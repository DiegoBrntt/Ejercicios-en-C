#include <stdio.h>
#include <stdlib.h>

struct Registro
{
    int peso1, peso2, peso3;
    char nomApe[50];
    float prom;
};

float promedio(float);
void Burbuja(struct Registro *,int);
void top_10(struct Registro[]);
float promedio_general(float, int);

int main()
{
    int cont = 0;
    float prome_aux, prome_gen = 0;
    FILE *f;
    struct Registro Competencia[90];

    f = fopen("Olimpiadas.txt", "r");

    int i = 0;

    while (!feof(f) && i < 90)
    {
        fscanf(f, "%s %d %d %d", &Competencia[i].nomApe, &Competencia[i].peso1, &Competencia[i].peso2, &Competencia[i].peso3);
        if (Competencia[i].peso1 != 0 && Competencia[i].peso2 != 0 && Competencia[i].peso3 != 0)
        {
            prome_aux = Competencia[i].peso1 + Competencia[i].peso2 + Competencia[i].peso3;
            Competencia[i].prom = promedio(prome_aux);
            prome_gen += Competencia[i].prom;
            cont++;
        }
        else
        {
            Competencia[i].prom = 0;
        }
        i++;
    }

    Burbuja(Competencia, 90);
    top_10(Competencia);

    prome_gen = promedio_general(prome_gen, cont);

    printf("\nPromedio General: %.2f \n", prome_gen);
    
    fclose(f);

    return 0;
}

float promedio(float peso)
{
    return peso / 3;
}

void Burbuja(struct Registro *comp, int m)
{
    struct Registro aux;

    for (int j = 1; j < m; j++)
    {
        for (int n = 0; n < m - j; n++)
        {
            if (comp[n].prom < comp[n + 1].prom)
            {
                aux = comp[n];
                comp[n] = comp[n + 1];
                comp[n + 1] = aux;
            }
        }
    }
}

void top_10(struct Registro comp[])
{
    printf("\nTop 10 mejores promedios: \n");
    printf("\nNombre Apellido\tPromedio \n");
    for (int j = 0; j < 10; j++)
    {
        printf("%s\t%.2f \n", comp[j].nomApe, comp[j].prom);      
    }
}

float promedio_general(float suma, int cont)
{
    return suma / cont;
}