#include<stdio.h>

int main()
    {

        int a;

        printf("Ingrese valor para A: \n");
        scanf("%d", &a);

        if(a % 2 == 0)
            {
                printf("A es Par.");
                return 0;
            }
        else
            {
                printf("A es impar.");
                return 0;
            }


    }
