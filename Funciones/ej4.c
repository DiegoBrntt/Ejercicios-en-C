#include <stdio.h>

void ordenar(int[], int);

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

    ordenar(vec, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d: %d\n", i+1, vec[i]);
    }

    return 0;
}

void ordenar(int vec2[], int m)
{
    int *p, max;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i; j++)
        {
            if(vec2[j] > vec2[j+1] || vec2[j] == vec2[j+1])
            {
                max = vec2[j];
                p = &vec2[j];
                *p = vec2[j+1];
                p = &vec2[j+1];
                *p = max;
            }
        }
    }
}