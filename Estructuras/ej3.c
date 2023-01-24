#include<stdio.h>
#define n 4
#define alumnos 3

typedef struct
{
    int legajo, notas[10]
}Alum;

int main()
{
    Alum alum[alumnos];

    float prom[alumnos]={0};

    for(int i=0;i<alumnos;i++)
        {
            printf("Ingrese numero de legajo: \n");
            scanf("%d", &alum[i].legajo);

            for(int j=0;j<10;j++)
                {
                    printf("Ingrese nota %d: \n", j+1);
                    scanf("%d", &alum[i].notas[j]);

                    prom[i]+=alum[i].notas[j];
                }
            prom[i]/=10;
        }

    for(int i=0;i<alumnos-1;i++)
        {
            for(int j=0;j<alumnos-j;j++)
                {
                    if(alum[j].legajo>alum[j+1].legajo)
                        {
                            int aux;

                            aux = alum[j].legajo;
                            alum[j].legajo = alum[j+1].legajo;
                            alum[j+1].legajo = aux;
                        }
                }
        }

    printf("\n\nOrden ascendente por legajo. \n\n");
    printf("Legajo\tPromedio\n");

    for(int i=0;i<alumnos;i++)
        {
            printf("%d\t", alum[i].legajo);
            printf("%.2f\n", prom[i]);
        }


    return 0;

}
