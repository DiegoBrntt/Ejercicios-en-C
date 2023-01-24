#include<stdio.h>

int main()
{
    int a, b, d;
    char c;

    printf("Ingrese un numero positivo: \n");
    scanf("%d", &a);
    printf("Ingrese un numero positivo: \n");
    scanf("%d", &b);

    printf("Ingrese un caracter (i)mpar o (p)ar: \n");
    scanf(" %c", &c);

    if(a<b)
        {
            switch(c)
                {
                    case 'P':
                    case 'p': while(a<=b)
                                    {
                                        d = a % 2;
                                        if(d == 0)
                                            printf("%d es par. \n", a);

                                        a++;
                                     }
                                break;
                    case 'i':
                    case 'I': while(a<=b)
                                     {
                                         d = a % 2;
                                         if(d != 0)
                                            printf("%d es impar. \n", a);

                                            a++;
                                     }
                                break;

                    default : printf("Caracter no valido.\n\n");

                }
        }
    else
        {
            printf("A ddebe ser menor que B. \n\n");
        }

    return 0;

}
