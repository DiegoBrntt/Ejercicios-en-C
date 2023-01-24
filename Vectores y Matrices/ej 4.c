#include<stdio.h>

int main()
{
    int n, i=0;
    int pos=0, neg=0, nul=0;

    printf("Ingrese un numero: \n");
    scanf("%d", &n);

    int x[n];

    for(i=0;i<n;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", &x[i]);

            if(x[i]>0)
                {
                    pos++;
                }
            else if(x[i]<0)
                {
                    neg++;
                }
            else
                {
                    nul++;
                }

        }


    printf("\nCant. positivos: %d \n", pos);
    printf("\nCant. negativos: %d \n", neg);
    printf("\nCant. de ceros: %d \n", nul);

    return 0;
}
