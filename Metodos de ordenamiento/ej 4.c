#include<stdio.h>
#include<string.h>

int main()
{
    char nombre[50][30], aux[50];
    int legajo[50], dni[50], i=0, num, aux2[2];

    do
        {
            printf("Escriba numero de legajo o 0 para procesar: \n");
            fflush(stdin);
            scanf("%d", &num);

            if(num==0)
                break;

            legajo[i]=num;

            printf("Escriba apellido y nombre: \n");
            fflush(stdin);
            gets(nombre[i]);


            printf("Escriba numero de DNI: \n");
            scanf("%d", &dni[i]);


            i++;
        }while(num!=0);


    printf("\n\nEmpleados\n");


    for(int n=0;n<i-1;n++)
        {
            for(int j=0;j<i-j;j++)
                {
                    if(strcmp(nombre[j], nombre[j+1])>0)
                        {
                            strcpy(aux, nombre[j]);
                            strcpy(nombre[j], nombre[j+1]);
                            strcpy(nombre[j+1], aux);

                            aux2[0] = legajo[j];
                            legajo[j] = legajo[j+1];
                            legajo[j+1] = aux2[0];

                            aux2[1] = dni[j];
                            dni[j] = dni[j+1];
                            dni[j+1] = aux2[1];
                        }
                }
        }

    for(int n=0;n<i;n++)
        {
            puts(nombre[n]);
        }


    do
    {
        aux2[0]=0;
        printf("\n\nIngrese numero de legajo o 0 para salir:\n");
        fflush(stdin);
        scanf("%d", &num);

        for(int n=0;n<i;n++)
            {
                if(num==legajo[n])
                    {
                        puts(nombre[n]);
                        printf("DNI: %d\n", dni[n]);
                        printf("Legajo: %d\n", legajo[n]);
                        break;
                    }
                else
                    {
                        aux2[0]++;
                    }

                if(aux2[0]==i)
                    {
                        printf("\nNo es un empleado de esta empresa.\n");
                    }
            }

    }while(num!=0);


    return 0;

}
