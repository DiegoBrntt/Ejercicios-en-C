#include <stdio.h>

int maximo(int[], int);

int main()
{
    int n;

    printf("Ingrese tamaño deseado del vector: \n");
    scanf("%d", &n);

    int vec[n];

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor para posicion %d: \n", i+1);
        scanf("%d", &vec[i]);
    }

    printf("El valor maximo dentro del vector es: %d \n", maximo(vec, n));

    return 0;
}

int maximo(int vec2[], int m)
{
    int *p;

    for (int i = 0; i < m; i++)
    {
        if(i==0)
        {
            p = &vec2[i];
        }
        else
        {
            if(*p < vec2[i])
            {
                p = &vec2[i];
            }
        }
        
    }

    return *p;
}