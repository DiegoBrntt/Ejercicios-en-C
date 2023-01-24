#include<stdio.h>

void intercambio(int[],int[],int);

int main()
{
    int n;

    printf("Ingrese tamaño para el vector: ");
    scanf("%d", &n);
    
    int vec[n], vec2[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor para la posicion %d del vector: \n", i+1);
        scanf("%d", &vec[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor para la posicion %d del vector: \n", i+1);
        scanf("%d", &vec2[i]);
    }

    printf("Vector 1\tVector 2\n");

    intercambio(vec, vec2, n);

    return 0;
}

void intercambio(int vec[],int vec2[],int n)
{
    int aux;

    aux = vec[n-1];
    vec[n-1] = vec2[n-1];
    vec2[n-1] = aux;

    if(n==1)
    {
        printf("%d\t\t%d\n", vec[n-1], vec2[n-1]);
    }
    else
    {
        printf("%d\t\t%d\n", vec[n-1], vec2[n-1]);
        intercambio(vec, vec2, n-1);
    }
    

}