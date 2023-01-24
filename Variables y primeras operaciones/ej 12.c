#include<stdio.h>

int main()
{
    int num, uni, dec, cent;

    printf("Ingrese un numero de 3 cifras: \n");
    scanf("%d", &num);

    uni = num % 10;
    dec = (num/10) % 10;
    cent = (num/100);

    printf("Unidades: %d.\n", uni);
    printf("Decenas: %d.\n", dec);
    printf("Centenas: %d.\n", cent);

    return 0;

}
