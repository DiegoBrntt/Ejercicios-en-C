#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<time.h>

struct fecha
{
    int anio, mes, dia;
};

struct empleados
{
    char NomApe[25], Cat[2];
    struct fecha edad;
    float sueldo;
};

int main()
{
    int n, cont[3]={0};
    float prom=0;

    printf("Ingrese cantidad de empleados de la empresa: \n");
    scanf("%d", &n);

    struct empleados persona[n];
    struct empleados aux;
    struct fecha fechaActual;

    printf("Ingrese año actual: \n");
    scanf("%d", &fechaActual.anio);

    printf("Ingrese mes actual: \n");
    scanf("%d", &fechaActual.mes);

    printf("Ingrese dia actual: \n");
    scanf("%d", &fechaActual.dia);

    for(int i=0;i<n;i++)
        {
            printf("Ingrese nombre y apellido del empleado %d: \n", i+1);
            fflush(stdin);
            gets(persona[i].NomApe);

            bool noCat = false;

            while(noCat == false)
                {
                    printf("Ingrese Categoria: \n");
                    fflush(stdin);
                    gets(persona[i].Cat);

                    switch(persona[i].Cat[0])
                        {
                        case 'A':
                        case 'a':
                            cont[0]++;
                            noCat = true;
                            break;
                        case 'B':
                        case 'b':
                            cont[1]++;
                            noCat = true;
                            break;
                        case 'C':
                        case 'c':
                            cont[2]++;
                            noCat = true;
                            break;
                        default:
                            printf("No es una categoria valida. \n");
                            noCat = false;
                      }
                }



            printf("Ingrese a�o de nacimiento: \n");
            scanf("%d", &persona[i].edad.anio);

            printf("Ingrese mes de nacimiento: \n");
            scanf("%d", &persona[i].edad.mes);

            printf("Ingrese dia de nacimiento: \n");
            scanf("%d", &persona[i].edad.dia);

            persona[i].edad.anio = fechaActual.anio - persona[i].edad.anio;
            if(persona[i].edad.mes>fechaActual.mes)
                {
                    persona[i].edad.anio++;
                }
            else if(persona[i].edad.mes == fechaActual.mes)
                {
                    if(persona[i].edad.dia>fechaActual.dia)
                        {
                            persona[i].edad.anio++;
                        }
                }

            printf("Ingrese sueldo: \n");
            scanf("%f", &persona[i].sueldo);

            printf("Lista de empleados:\n");
    printf("Nombre y Apellido\tCategoria\tEdad\tSueldo\n");

    for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-j;j++)
                {
                    if(strcmp(persona[j].NomApe, persona[j+1].NomApe)>0)
                        {
                            aux = persona[j];
                            persona[j] = persona[j+1];
                            persona[j+1] = aux;
                        }
                }
        }

    for(int i=0;i<n;i++)
        {
            printf("%-25s\t", persona[i].NomApe);
            printf("%s\t", persona[i].Cat);
            printf("%d\t", persona[i].edad.anio);
            printf("%.2f\n", persona[i].sueldo);
        }

        }

    return 0;
}
