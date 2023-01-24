#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define asp 50



struct fecha
{
    int dia, mes, anio;
};

struct aspirantes
{
    int DNI;
    char nomApe[30];
    float peso, altura;
    struct fecha FechNac;
};

int edad(struct fecha, struct fecha);

int main()
{
    bool rep = true, rep2 = true;
    char c;
    int i = 0;
    struct aspirantes aspirante[asp];

    struct fecha fechAct;
    
    printf("Ingrese dia actual: \n");
    scanf("%d", &fechAct.dia);
    printf("Ingrese mes actual: \n");
    scanf("%d", &fechAct.mes);
    printf("Ingrese año actual: \n");
    scanf("%d", &fechAct.anio);
    

    while (rep == true)
    {
        rep2 = true;

        printf("Ingrese DNI del aspirante %d: \n", i + 1);
        scanf("%d", &aspirante[i].DNI);

        printf("Ingrese nombre y apellido del aspirante: \n");
        fflush(stdin);
        gets(aspirante[i].nomApe);

        printf("Ingrese dia de nacimineto: \n");
        scanf("%d", &aspirante[i].FechNac.dia);
        printf("Ingrese mes de nacimineto: \n");
        scanf("%d", &aspirante[i].FechNac.mes);
        printf("Ingrese año de nacimineto: \n");
        scanf("%d", &aspirante[i].FechNac.anio);

        aspirante[i].FechNac.anio = edad(fechAct , aspirante[i].FechNac);

        printf("Ingrese el peso: \n");
        scanf("%f", &aspirante[i].peso);

        printf("Ingrese la altura: \n");
        scanf("%f", &aspirante[i].altura);

        while (rep2 == true)
        {
            printf("Desea continuar ingresando aspirantes? (S)i / (N)o  \n");
            fflush(stdin);
            scanf("%c", &c);

            switch (c)
            {
            case 's':
            case 'S':
                rep2 = false;
                i++;
                break;
            case 'n':
            case 'N':
                rep2 = false;
                rep = false;
                break;
            default:
                rep2=true;
            }
        }
    }

    for(int j=0;j<i+1;j++)
    {
        printf("Aspirante %d tiene: %d anios \n", j+1, aspirante[j].FechNac.anio);
    }

    return 0;


}

int edad(struct fecha fecact, struct fecha nacfec)
{
    int *aux;

    aux = &nacfec.anio;

    if(fecact.mes < nacfec.mes)
    {
        *aux = (fecact.anio - nacfec.anio) - 1;
    }
    else if(fecact.mes == nacfec.mes && fecact.dia < nacfec.dia)
    {
        *aux = (fecact.anio - nacfec.anio) - 1;
    }
    else
    {
        *aux = fecact.anio - nacfec.anio;
    }

    return *aux;
}