#include<stdio.h>
#include<stdbool.h>

bool busqueda(int, int, int);

int main()
{
    int num, bus;

    printf("Ingrese numero entero: \n");
    scanf("%d", &num);
    printf("Ingrese numero a buscar: \n");
    scanf("%d", &bus);

    if(busqueda(num, bus, 10) == true)
    {
        printf("Pertenece.");
    }
    else
    {
        printf("No pertenece.");
    }

    return 0;
    
}

bool busqueda(int x, int y, int z)
{
    if (x % z == y)
    {
        return true;
    }
    else if(x / z > 0)
    {
        busqueda(x/z, y, z);
    }
    else
    {
        return false;
    }
    
    
}