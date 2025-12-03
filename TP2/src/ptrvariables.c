#include <stdio.h>

int main() {
    // Déclaration des variables
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x123456789ABCDEF0;
    long long int lli = 0x123456789ABCDEF0;
    float f = 1.0f;
    double d = 3.14;
    long double ld = 2.718281828459045L;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // --- Affichage avant manipulation ---
    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : (affichage dépend du compilateur)\n", (void*)pld);

    // --- Manipulation via pointeurs ---
    *pc += 1;
    *ps += 1;
    *pi += 1;
    *pli += 1;
    *plli += 1;
    *pf = 0.5f;
    *pd = 2.0;
    *pld = 1.6180339887L;

    // --- Affichage après manipulation ---
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : (affichage dépend du compilateur)\n", (void*)pld);

    return 0;
}
