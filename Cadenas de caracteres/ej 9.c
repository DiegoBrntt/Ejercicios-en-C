#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char nombre[5][30];
    int edad[5], max[2], i;

    for(i=0;i<5;i++)
        {
            printf("Ingrese una nombre: \n");
            fflush(stdin);
            gets(nombre[i]);

            printf("Ingrese una edad: \n");
            scanf("%d", &edad[i]);

            if(i==0)
                {
                    max[0]=edad[i];
                    max[1]=i;
                }
            else
                {
                    if(max[0]<edad[i])
                        {
                            max[0]=edad[i];
                            max[1]=i;
                        }
                }

        }

    printf("\nAlumno mayor: \n\n");
    puts(nombre[max[1]]);
    printf("\nedad: %d", max[0]);

    return 0;

}
