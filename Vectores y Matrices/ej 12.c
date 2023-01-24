#include<stdio.h>

int main ()
{
    int a[3][3];

    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    printf("Ingrese elemento para fila %d columna %d: ", i+1, j+1);
                    scanf("%d", &a[i][j]);
                }
        }

    printf("La diagonal principal es: ");

    for(int i=0;i<3;i++)
        {
            printf("fila %d columna %d: %d \n", i+1, i+1, a[i][i]);
        }

    return 0;

}
