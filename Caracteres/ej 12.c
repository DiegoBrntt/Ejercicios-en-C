#include<stdio.h>

int main ()
{
    char nombre[] = "";
    int dia, mes, anio;

    printf("Ingrese nombre de la persona: \n");
    scanf(" %s", &nombre);
    printf("Ingrese anio de nacimiento: \n");
    scanf("%d", &anio);
    printf("Ingrese mes de nacimiento: \n");
    scanf("%d", &mes);
    printf("Ingrese dia de nacimiento: \n");
    scanf("%d", &dia);

    switch(mes)
    {
        case 1:printf("%s nacio el %d de Enero del %d \n", nombre, dia, anio);
               break;
        case 2:printf("%s nacio el %d de Febrero del %d \n", nombre, dia, anio);
               break;
        case 3:printf("%s nacio el %d de Marzo del %d \n", nombre, dia, anio);
               break;
        case 4:printf("%s nacio el %d de Abril del %d \n", nombre, dia, anio);
               break;
        case 5:printf("%s nacio el %d de Mayo del %d \n", nombre, dia, anio);
               break;
        case 6:printf("%s nacio el %d de Junio del %d \n", nombre, dia, anio);
               break;
        case 7:printf("%s nacio el %d de Julio del %d \n", nombre, dia, anio);
               break;
        case 8:printf("%s nacio el %d de Agosto del %d \n", nombre, dia, anio);
               break;
        case 9:printf("%s nacio el %d de Septiembre del %d \n", nombre, dia, anio);
               break;
        case 10:printf("%s nacio el %d de Octubre del %d \n", nombre, dia, anio);
                break;
        case 11:printf("%s nacio el %d de Noviembre del %d \n", nombre, dia, anio);
                break;
        case 12:printf("%s nacio el %d de Diciembre del %d \n", nombre, dia, anio);
                break;
        default:printf("No es una fecha valida.");
                break;
    }

    return 0;

}
