#include<stdio.h>

int main()
    {

        int a, b, c;
        int b1, b2, c1, c2;

        printf("Ingrese un numero de cuatro cifras: \n");
        scanf("%d", &a);


        b = a / 100;
        c = a % 100;

        b1 = b / 10;
        b2 = b % 10;
        c1 = c / 10;
        c2 = c % 10;

        if(b1 ==  c2 && b2 == c1)
            {
                printf("%d es capicua.", a);
                return 0;
            }
        else
            {
                printf("%d no es capicua.", a);
                return 0;
            }

    }
