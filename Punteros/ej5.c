#include<stdio.h>
#include<string.h>

void invertir(char[], int);

int main()
{
    char cad[100];


    puts("Ingrese una cadena de caracteres: ");
    gets(cad);

    invertir(cad, (strlen(cad)-1));

    return 0;
}

void invertir(char cad[], int n)
{
    if(n==0)
    {
        printf("%c", cad[n]);
    }
    else
    {
        printf("%c", cad[n]);
        invertir(cad, n-1);
    }
    
}