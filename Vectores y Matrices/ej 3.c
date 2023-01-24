#include<stdio.h>

int main()
{
    int x[20], i=0;
    float prom = 0;

    for(i=0;i<20;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", &x[i]);


        }

    for(i=0;i<20;i++)
        {
            prom += x[i];
        }

    prom /= 20;
    printf("Promedio: %.2f \n\n", prom);


    return 0;
}
