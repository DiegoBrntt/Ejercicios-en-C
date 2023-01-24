#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t_1, t_2, t_3, i = 0, a, b;
    float prom;
    char nombre[15], proc;


    do
        {
            printf("Ingrese nombre \n");
            fflush(stdin);
            gets(nombre);

            printf("Ingrese un numero positivo: \n");
            scanf("%d", &t_1);
            printf("Ingrese un numero positivo: \n");
            scanf("%d", &t_2);
            printf("Ingrese un numero positivo: \n");
            scanf("%d", &t_3);


            b=0;

            while(b == 0)
                {
                    printf("Ingrese: \n S para procesar la informacion \n N para Salir \n");
                    scanf(" %c", &proc);

                    switch(proc)
                    {
                         case 'S': prom = (t_1 + t_2 + t_3) / 3;


                                   if(prom >= 6 && t_3 >= 6)
                                    {
                                        puts(nombre);
                                        printf("Aprobado. \n\n");

                                        i++;

                                        printf("%d alumnos aprobados. \n\n", i);
                                    }

                                   a = 0;
                                   b = 1;
                                   break;
                         case 'N': a = 1;
                                   b = 1;
                                   break;
                         default: b=0;
                                  break;

                }


            }

        }while(a == 0);




    return 0;

}
