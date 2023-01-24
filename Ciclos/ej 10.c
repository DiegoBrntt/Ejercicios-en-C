#include<stdio.h>

int main()
{
    int a, b, d, i=0;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &a);

    d = a++;
    int c[d];
    b=a;
    c[i] = b;

    while(b > 0)
        {
          i++;
          c[i] *= c[i--];
          b--;
        }

    printf("el factorial de %d es: %d", a, c[i]);


    return 0;
}
