#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, i = 0;
    system("cls");

    printf("Ingrese un numero entero: \n");
    scanf("%d", &a);

    do
    {
        i += (a % 10);
        a /= 10;

    }while(a > 0);

    printf("La suma de las cifras es: %d", i);


    return 0;
}
