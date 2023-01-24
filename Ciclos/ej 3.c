#include<stdio.h>

int main()
{
    int x[10], i = 0, sized;

    sized = sizeof(x)/sizeof(x[0]);

    printf("Ingrese un valor: \n");
    scanf("%d", &x[0]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[1]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[2]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[3]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[4]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[5]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[6]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[7]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[8]);
    printf("Ingrese un valor: \n");
    scanf("%d", &x[9]);



    while (i < sized)
        {
           if(x[i]>0)
            printf("%d es positivo. \n", x[i]);
            i++;
        }

    return 0;
}
