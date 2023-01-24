#include<stdio.h>

int main()
{
    int x[10], i=0, n;

    for(i=0;i<10;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", &x[i]);

            n=x[0]*x[i];
        }

    printf("El cuarto elemento es: %d \n", x[3]);
    printf("El segundo elemento es: %d \n", x[1]);
    printf("El producto del primero por el ultimo: %d \n", n);

    for(i=0;i<10;i++)
        {
            if((x[i]%2)==0)
                {
                    printf("Par: %d \n", x[i]);
                }
        }
    for(i=0;i<10;i++)
        {
            if((x[i]%2)!=0)
                {
                    printf("Impar: %d \n", x[i]);
                }
        }

    printf("\n Orden inverso \n");

    for(i=9;i>=0;i--)
        {
            printf("\n %d \n", x[i]);
        }

    return 0;
}
