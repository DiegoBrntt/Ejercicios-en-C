#include<stdio.h>

struct Datos
{
    char nombre[40];
    char pais[25];
};

struct Deportista
{
    char deporte[30];
    struct Datos persona;
    int cmedallas;
};

int main()
{
    struct Deportista competidor[3], aux[3];
    int max;

    for(int i=0;i<3;i++)
        {
            printf("Ingrese nombre y apellido del competidor %d: \n", i+1);
            fflush(stdin);
            gets(competidor[i].persona.nombre);

            printf("Ingrese pais de origen: \n");
            fflush(stdin);
            gets(competidor[i].persona.pais);

            printf("Ingrese deporte en el que participa: \n");
            fflush(stdin);
            gets(competidor[i].deporte);

            printf("Ingrese cantidad de medallas: \n");
            fflush(stdin);
            scanf("%d", &competidor[i].cmedallas);

            if(i==0)
                {
                    max = competidor[i].cmedallas;
                    aux[0] = competidor[i];
                }
            else
                {
                    if(competidor[i].cmedallas>max)
                        {
                            aux[0] = competidor[i];
                        }
                    else if(competidor[i].cmedallas == max)
                        {
                            aux[i] = competidor[i];
                        }

                }
        }

    printf("\n\nNombre y apellido                       Deporte                       Pais                     Cantidad de medallas\n");

    for(int i=0;i<3;i++)
        {
            printf("%-40s", competidor[i].persona.nombre);
            printf("%-30s", competidor[i].deporte);
            printf("%-25s", competidor[i].persona.pais);
            printf("%d\n", competidor[i].cmedallas);
        }

    for(int i=0;i<3;i++)
        {
            printf("\nEl ", competidor[i].persona.nombre);
            printf("%-30s", competidor[i].deporte);
            printf("%-25s", competidor[i].persona.pais);
            printf("%d\n", competidor[i].cmedallas);
        }

    return 0;

}
