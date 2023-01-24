#include<stdio.h>

int main ()
{
    char nombre;

    printf("Ingrese un caracter: \n");
    scanf(" %c", &nombre);


    switch(nombre)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("%c es vocal.", nombre);
                 break;
        default:printf("No es una vocal.");
                break;
    }

    return 0;

}
