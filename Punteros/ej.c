#include<stdio.h>

void cargar(int[], int);
void imprimir(int *, int);


int main()
{
    int n;

    printf("Ingrese tamaño para el vector: ");
    scanf("%d", &n);
    
    int vec[n];
    
    cargar(vec, n);

    return 0;
}

void cargar(int vec2[], int m)
{
    int *p;

    p = vec2;

    for (int i = m-1; i >= 0; i--)
    {
        printf("Ingrese valor para la posicion %d del vector: \n", i+1);
        scanf("%d", (p+i));

        if(i==0)
            imprimir(vec2, m);
    }

    
}

void imprimir(int *p2, int m2)
{
    for (int i = 0; i < m2; i++)
    {
        printf("Valor en posicion %d del vector: %d \n", i+1, *(p2+i));
    }
}