#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int l = 0x0102030405060708;
    float f = 9.1f;         // Exemple : float
    double d = 1.0;         // Exemple : double
    long double ld = 1.0L;  // Exemple : long double

    unsigned char *p; // pointeur pour parcourir les octets
    int j;

    // Short
    printf("Octets de short :\n");
    p = (unsigned char*)&s;
    for (j = 0; j < sizeof(short); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Int
    printf("Octets de int :\n");
    p = (unsigned char*)&i;
    for (j = 0; j < sizeof(int); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Long int
    printf("Octets de long int :\n");
    p = (unsigned char*)&l;
    for (j = 0; j < sizeof(long int); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Float
    printf("Octets de float :\n");
    p = (unsigned char*)&f;
    for (j = 0; j < sizeof(float); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Double
    printf("Octets de double :\n");
    p = (unsigned char*)&d;
    for (j = 0; j < sizeof(double); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Long double
    printf("Octets de long double :\n");
    p = (unsigned char*)&ld;
    for (j = 0; j < sizeof(long double); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n");

    return 0;
}
