#include<stdio.h>

int main()
    {

        int a, b;

        printf("Ingrese valor para A: \n");
        scanf("%d", &a);
        printf("Ingrese valor para B: \n");
        scanf("%d", &b);

        if(a == b)
            {
                printf("A y B son iguales.");
                return 0;
            }
        else
            {
                printf("A y B son distintos");
                return 0;
            }


    }
