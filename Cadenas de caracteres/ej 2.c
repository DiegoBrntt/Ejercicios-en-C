#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char pal[50];

    printf("Ingrese una palabra: \n");
    gets(pal);

    printf("Tiene: %d letras. \n", strlen(pal));

    return 0;

}
