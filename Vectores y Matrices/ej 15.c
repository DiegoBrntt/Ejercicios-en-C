#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int notas[3][6];
    float prom[6];
    char mat[6][11] = {"Biologia", "Matematica", "Geografia", "Ingles", "Lengua"};
    char tri[3][25] = {"Primer Trimestre", "Segundo Trimestre", "Tercer Trimestre"};

    printf("Ingrese Notas del alumno \n\n");

    for(int i=0;i<3;i++)
        {
            for(int j=0;j<6;j++)
                {
                    printf("\n");
                    puts(tri[i]);
                    printf("\n");
                    puts(mat[j]);
                    scanf("%d", &notas[i][j]);
                }
        }





    return 0;

}

