void recois_numeros_calcule(int socket_client, char *message)
{
    char op;
    float a, b, resultat;
    char reponse[1000];

    sscanf(message, "%c %f %f", &op, &a, &b);

    switch (op)
    {
        case '+': resultat = a + b; break;
        case '-': resultat = a - b; break;
        case '*': resultat = a * b; break;
        case '/':
            if (b == 0)
            {
                write(socket_client, "Erreur division par zero", 24);
                return;
            }
            resultat = a / b;
            break;
        default:
            write(socket_client, "Operateur inconnu", 17);
            return;
    }

    snprintf(reponse, sizeof(reponse), "%.2f", resultat);
    write(socket_client, reponse, strlen(reponse));
}
