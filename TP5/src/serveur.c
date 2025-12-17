void recois_envoie_message(int socket_client)
{
    char buffer[1000];
    char reponse[1000];
    int n;

    /* Réception du message du client */
    n = read(socket_client, buffer, sizeof(buffer) - 1);
    if (n <= 0)
        return;

    buffer[n] = '\0';
    printf("Message reçu : %s\n", buffer);

    /* Le serveur demande un message à l'utilisateur */
    printf("Message à envoyer au client : ");
    fflush(stdout);
    fgets(reponse, sizeof(reponse), stdin);

    /* Envoi du message saisi au client */
    write(socket_client, reponse, strlen(reponse));
}
