#include <stdio.h>
#include <stdbool.h>

void igualdad(int[], int[], int);

int main()
{
    int n;

    printf("Ingrese tamaño deseado del vector: \n");
    scanf("%d", &n);

    int vec[n], vec2[n];

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (j == 0)
            {
                printf("Ingrese valor para posicion %d del vector %d: \n", i + 1, j + 1);
                scanf("%d", &vec[i]);
            }
            else
            {
                printf("Ingrese valor para posicion %d del vector %d: \n", i + 1, j + 1);
                scanf("%d", &vec2[i]);
            }
        }
    }

    igualdad(vec, vec2, n);

    return 0;
}

void igualdad(int _vec[], int _vec2[], int m)
{
    int cont = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (_vec[i] == _vec2[j])
            {
                cont++;
                i++;
            }
        }
    }

    if (cont == m)
    {
        printf("Los vectores son igualers. \n");
    }
    else
    {
        printf("Los vectores no son igualers. \n");
    }
}
