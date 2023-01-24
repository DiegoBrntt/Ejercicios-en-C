#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char pal[50], pal2[50];
    int sum;


    printf("Ingrese una palabra: \n");
    gets(pal);
    printf("Ingrese una palabra: \n");
    gets(pal2);


    sum=strlen(pal)+strlen(pal2);

    printf("Strings concatenados.", sum);
    puts(strcat(pal, pal2));
    printf("\nCant. de caracteres: %d", sum);

    return 0;

}
