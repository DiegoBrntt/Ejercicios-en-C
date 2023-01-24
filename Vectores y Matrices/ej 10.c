#include<stdio.h>

int main ()
{
    int n, m, cont = 0;

    printf("Ingrese dimension para A: ");
    scanf("%d", &n);
    printf("Ingrese dimension para B: ");
    scanf("%d", &m);

    int a[n][m];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    scanf("%d", &a[i][j]);
                }
        }

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    if(a[i][j] == 0)
                        {
                            cont++;
                        }
                }
        }

    printf("Cant. de ceros: %d \n\n", cont);

    return 0;

}
