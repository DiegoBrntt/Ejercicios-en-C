#include<stdio.h>

int suma(int[], int, int);

int main()
{
    int n, sum = 0;

    printf("Ingrese tamaño del array deseado: \n");
    scanf("%d", &n);

    int vec[n];

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor del elemento %d: \n", i+1);
        scanf("%d", &vec[i]);
    }

    sum = suma(vec, n-1, sum);

    printf("\nLa suma es: %d \n", sum);

    return 0;


}

int suma(int vec[], int n, int sum)
{
    if(n==0)
    {
        sum += vec[n];
        return sum;
    }
    else
    {
        suma(vec, n-1, sum + vec[n]) ;
    }
    
}

