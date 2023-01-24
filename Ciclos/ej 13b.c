#include<stdio.h>

int main()
{
    int a, b, d;
    char c;

    do
        {
            printf("Ingrese un caracter (i)mpar o (p)ar: \n");
            fflush(stdin);
            scanf(" %c", &c);
        }while(c != 'i' && c != 'I' && c != 'p' && c != 'P');

    do
        {
            printf("Ingrese un numero positivo: \n");
            scanf("%d", &a);
            printf("Ingrese un numero positivo: \n");
            scanf("%d", &b);
        }while(a>=b);

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

                }


    return 0;

}
