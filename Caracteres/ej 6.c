#include<stdio.h>

int main()
    {

        int a, b, c;

        printf("Ingrese valor para A: \n");
        scanf("%d", &a);
        printf("Ingrese valor para B: \n");
        scanf("%d", &b);

        c = a + b;

        if(c % 2 == 0)
            {
                printf("%d + %d = %d (par).", a, b, c);
                return 0;
            }
        else
            {
                printf("%d + %d = %d (impar).", a, b, c);
                return 0;
            }

    }
