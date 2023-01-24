#include<stdio.h>

int producto(int, int, int);
int division(int, int, int);

int main()
{
    int a, b, D, M;

    printf("Ingrese primer numero (multiplicando / numerador): \n");
    scanf("%d", &a);
    printf("Ingrese primer numero (multiplicador / denominador): \n");
    scanf("%d", &b);

    M = producto(a, b, 0);
    printf("El producto es igual a: %d \n", M);

    D = division(a, b, 0);
    printf("El cociente es igual a: %d \n", D);


    return 0;


}

int producto(int x, int y, int r)
{
    if(y==0)
    {
        return r;
    }
    else
    {
        r += x;
        return producto(x, y-1, r);
    }
}

int division(int x, int y, int r)
{
    if(x < y)
    {
        return r;
    }
    else
    {
        return division(x-y, y, r+1);
    }
}