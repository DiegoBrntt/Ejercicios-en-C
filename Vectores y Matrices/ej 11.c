#include<stdio.h>

int main ()
{
    int n, m, cont = 0;

    printf("Ingrese cant de filas deseada: ");
    scanf("%d", &n);
    printf("Ingrese cant de columnas deseada: ");
    scanf("%d", &m);

    int a[n][m];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    printf("Ingrese elemento para fila %d columna %d: ", i+1, j+1);
                    scanf("%d", &a[i][j]);
                }
        }

    printf("Ingrese numero de fila: ");
    scanf("%d", &n);
    printf("Ingrese numero de columna: ");
    scanf("%d", &m);

    printf("Fila %d Columna %d: %d ", n-1, m-1, a[n][m]);

    return 0;

}
