#include<stdio.h>

int main()
{
    int num, uni;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);

    uni = num % 10;

    printf("Ultima cifra: %d.", uni);

    return 0;

}
