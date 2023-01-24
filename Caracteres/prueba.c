#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
    {

        char a, b;

        printf("Ingrese primer caracter: \n");
        scanf(" %c", &a);
        printf("Ingrese segundo caracter: \n");
        scanf(" %c", &b);


        if (a > b)
            {
               printf("\n%c\n%c", b, a);
            }
        else
            {
               printf("\n%c\n%c", a, b);
            }



       return 0;



    }
