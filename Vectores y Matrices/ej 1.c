#include<stdio.h>

int main()
{
    int x[50], i=0;

    for(i=0;i<50;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", &x[i]);
        }

    for(i=0;i<50;i++)
        {
            printf("%d- %d \n", i+1, x[i]);
        }

    return 0;
}
