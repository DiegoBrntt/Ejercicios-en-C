#include<stdio.h>

void mayor(int *,int *);

int main()
{
    int a, b;

    printf("Ingrese valor para A: \n");
    scanf("%d", &a);
    printf("Ingrese valor para B: \n");
    scanf("%d", &b);

    mayor(&a, &b);

    printf("El mayor es: %d \n", a);

    return 0;

}

void mayor(int *A, int *B)
{
    int aux;

    if(*B > *A)
    {
        aux = *B;
        *B = *A;
        *A = aux;
    }
}