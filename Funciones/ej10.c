#include <stdio.h>
#include <stdbool.h>

bool buscar(int[], int, int);

int main()
{
    int n;

    printf("Ingrese cantidad de elementos del vector: \n");
    scanf("%d", &n);

    int vec[n], valor;

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor del elemento %d: \n", i + 1);
        scanf("%d", &vec[i]);
    }

    printf("Ingrese valor para verificar la existencia dentro del vector: \n");
    scanf("%d", &valor);

    if(buscar(vec, n, valor)==true)
        printf("El valor %d pertenece al vector. \n", valor);
    else
         printf("El valor %d no pertenece al vector. \n", valor);


    return 0;

}

bool buscar (int vec2[], int m, int v)
{
    int *p;

    p=vec2;

    for (int i = 0; i < m; i++)
    {     
        if(*(p+i) == v)
            return true;
        
    }
    
    return false;

}