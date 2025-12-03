#include <stdio.h>
#include "operator.h"

int main() {
    int num1, num2, resultat;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // note : espace pour consommer les retours à la ligne

    switch(op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et_bit(num1, num2);
            break;
        case '|':
            resultat = ou_bit(num1, num2);
            break;
        case '~':
            resultat = negation(num1);
            break;
        default:
            printf("Operateur non reconnu.\n");
            return 1;
    }

    printf("Resultat : %d\n", resultat);

    return 0;
}

