#include<stdio.h>

void imprimir(int[] , int);

int main()
{
    int n;

    printf("Ingrese tamaño para el vector: ");
    scanf("%d", &n);
    
    int vec[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor para la posicion %d del vector: \n", i+1);
        scanf("%d", &vec[i]);
    }

    imprimir(vec, n);

    return 0;
}

void imprimir(int vec2[], int m)
{

    if(m==1)
    {
        printf("Valor de la posicion %d del vector: %d \n", m, vec2[m-1]);
    }
    else
    {
        imprimir(vec2, (m-1));
        printf("Valor de la posicion %d del vector: %d \n", m, vec2[m-1]);
    }
}