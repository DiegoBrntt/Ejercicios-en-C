#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
    {

        char a[2], b[2], c[2];

        printf("Ingrese primer caracter: \n");
        gets(a);
        printf("Ingrese segundo caracter: \n");
        gets(b);
        printf("Ingrese tercer caracter: \n");
        gets(c);

        a[1] = toupper(a[1]);
        b[1] = toupper(b[1]);
        c[1] = toupper(c[1]);
        a[2] = toupper(a[2]);
        b[2] = toupper(b[2]);
        c[2] = toupper(c[2]);

       switch (strcmp(a, b))
       {
          case -1: switch (strcmp(b, c))
                       {
                           case -1: puts("orden alfabetico: ");
                                    puts(a);
                                    puts(b);
                                    puts(c);
                                    break;
                           case 0:  puts("orden alfabetico: ");
                                    puts(a);
                                    puts(b);
                                    puts(c);
                                    break;
                           case 1:  switch (strcmp(a, c))
                                       {
                                           case -1: puts("orden alfabetico: ");
                                                    puts(a);
                                                    puts(c);
                                                    puts(b);
                                                    break;
                                           case 0:  puts("orden alfabetico: ");
                                                    puts(a);
                                                    puts(c);
                                                    puts(b);
                                                    break;
                                           case 1:  puts("orden alfabetico: ");
                                                    puts(c);
                                                    puts(a);
                                                    puts(b);
                                                    break;
                                       }
                                    break;
                       }

                    break;

            case 0: switch (strcmp(b, c))
                       {
                           case -1: puts("orden alfabetico: ");
                                    puts(b);
                                    puts(a);
                                    puts(c);
                                    break;
                           case 0:  printf("orden alfabetico: ");
                                    puts(a);
                                    puts(b);
                                    puts(c);
                                    break;
                           case 1:  puts("orden alfabetico: ");
                                    puts(c);
                                    puts(a);
                                    puts(b);
                                    break;
                       }

                    break;

            case 1:switch (strcmp(b, c))
                       {
                           case -1: switch (strcmp(a, c))
                                       {
                                           case -1: puts("orden alfabetico: ");
                                                    puts(b);
                                                    puts(a);
                                                    puts(c);
                                                    break;
                                           case 0:  puts("orden alfabetico: ");
                                                    puts(b);
                                                    puts(c);
                                                    puts(a);
                                                    break;
                                           case 1:  puts("orden alfabetico: ");
                                                    puts(b);
                                                    puts(c);
                                                    puts(a);
                                                    break;
                                       }
                                    break;
                           case 0:  puts("orden alfabetico: ");
                                    puts(c);
                                    puts(b);
                                    puts(a);
                                    break;
                           case 1:  puts("orden alfabetico: ");
                                    puts(c);
                                    puts(b);
                                    puts(a);
                                    break;
                       }

                    break;


       }

       return 0;



    }
