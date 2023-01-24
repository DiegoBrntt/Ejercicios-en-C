#include<stdio.h>
#include<string.h>

int main()
{
    char cadena[30], carac;

    printf("Ingrese una cadena de caracteres: \n");
    gets(cadena);

    printf("Ingrese caracter a buscar: \n");
    scanf("%c", &carac);

    contar(cadena, carac);

    return 0;
}

void contar(char cad[30], char carac2)
{
    int cont=0;

    for(int i=0;i<strlen(cad);i++)
        {
            if(cad[i]==carac2)
                    cont++;
        }

    printf("El caracter %c se repite %d de veces dentro de la cadena. \n", carac2, cont);

}
