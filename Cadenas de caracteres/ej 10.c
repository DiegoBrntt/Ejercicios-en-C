#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char nombre[5][30];
    int longitud[5], max[2], i;

    for(i=0;i<5;i++)
        {
            printf("Ingrese una nombre: \n");
            fflush(stdin);
            gets(nombre[i]);

            longitud[i]=strlen(nombre[i]);

            if(i==0)
                {
                    max[0]=longitud[i];
                    max[1]=i;
                }
            else
                {
                    if(max[0]<longitud[i])
                        {
                            max[0]=longitud[i];
                            max[1]=i;
                        }
                }

        }

    printf("\nNombre mas largo: \n");
    puts(nombre[max[1]]);

    printf("\nLongitudes: \n");

    for(i=0;i<5;i++)
        {
            puts(nombre[i]);printf(" %d caracteres \n", longitud[i]);

        }

    return 0;

}
