#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

struct empleados
{
    char NomApe[25], Cat[2];
    int edad;
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



            printf("Ingrese edad: \n");
            scanf("%d", &persona[i].edad);

            printf("Ingrese sueldo: \n");
            scanf("%f", &persona[i].sueldo);

            prom+=persona[i].sueldo;
        }

    prom/=n;

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
            printf("%d\t", persona[i].edad);
            printf("%.2f\n", persona[i].sueldo);
        }

    printf("\n\nPromedio de sueldos: %.2f\n", prom);
    printf("\nCantidad de empleados por categoria. \n");
    printf("A\tB\tC\n");

    for(int i=0;i<3;i++)
        {
            printf("%d\t", cont[i]);
        }

    printf("\n\nLista de empleados Mayores de 50:\n");

    for(int i=0;i<n;i++)
        {
            if(persona[i].edad > 50)
                {
                    printf("%-25s\n", persona[i].NomApe);
                }
        }

    return 0;

}
