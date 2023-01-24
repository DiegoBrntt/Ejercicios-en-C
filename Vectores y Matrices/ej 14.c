#include<stdio.h>

int main ()
{
    int n, m, max, min, pos[2][2], bul=0;

    printf("Ingrese cant de filas de la matriz: ");
    scanf("%d", &n);
    printf("Ingrese cant de columnas de la matriz: ");
    scanf("%d", &m);

    int a[n][m];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    printf("Ingrese elemento para fila %d columna %d: ", i+1, j+1);
                    scanf("%d", &a[i][j]);

                    if(i == 0 && j == 0)
                        {
                            max = a[i][j];
                            min = a[i][j];
                        }
                    else
                        {
                            if(a[i][j]>max)
                                {
                                    max = a[i][j];
                                }
                            if(a[i][j]<min)
                                {
                                    min = a[i][j];
                                }
                        }
                }
        }


        printf("El valor mayor: %d \n", max);
        printf("El valor menor: %d \n", min);

    return 0;

}

