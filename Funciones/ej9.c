#include<stdio.h>

int suma(int[], int);

int main()
{
    int n;

    printf("Ingrese tamaño del vector de enteros deseados: \n");
    scanf("%d", &n);

    int vec[n], sumar;


    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor para la posicion %d del vector: \n", i+1);
        scanf("%d", &vec[i]);
    }


    sumar = suma(vec, n);

    printf("La suma de los elementos del vector es: %d \n", sumar);

    return 0;
}

int suma(int vec2[], int m)
{
    int *p;
    
    for (int i = 0; i < m; i++)
    {
        if(i==0)
        {
            p=vec2;
        }
        else
        {
            *p += *(p+i);
        }
    }
    
   return *p;

}