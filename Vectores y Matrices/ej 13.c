#include<stdio.h>

int main ()
{
    int a[3][4], sum = 0;
    float prom = 0, porc = 0;



    for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
                {
                    printf("Ingrese elemento para fila %d columna %d: ", i+1, j+1);
                    scanf("%d", &a[i][j]);

                    prom += a[i][j];

                    if(a[i][j] > 0)
                        {
                            porc += 1;
                        }

                    if(a[i][j] % 2 == 0)
                        {
                            sum += a[i][j];
                        }

                }
        }

    prom = prom / (3*4);
    porc = (porc * 100)/(3*4);

    printf("Matriz de 3x4: ");

    for(int i=0;i<3;i++)
        {
            printf("fila %d columna %d: %d \n", i+1, i+1, a[i][i]);
        }

    printf("Promedio: %f \n", prom);
    printf("Porcentaje de positivos: %f \n", porc);
    printf("Sumatoria de los numeros pares: %d \n", sum);

    return 0;

}

