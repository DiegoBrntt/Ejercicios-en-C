#include<stdio.h>

int main()
    {

        int a, b, c;

        printf("Ingrese valor para A: \n");
        scanf("%d", &a);
        printf("Ingrese valor para B: \n");
        scanf("%d", &b);
        printf("Ingrese valor para C: \n");
        scanf("%d", &c);


        if(a == b && b == c)
            {
                printf("Los 3 valores son iguales.");
            }

        else if(a > b)
            {
                if (b < c)
                    {
                        printf("El numero menor es %d", b);
                    }
                else
                    {
                        printf("El numero menor es %d", c);
                    }
            }
        else
            {
                if(a < c)
                    {
                        printf("El numero menor es %d", a);
                    }
                else
                    {
                        printf("El numero menor es %d", c);
                    }
            }

            return 0;


    }
