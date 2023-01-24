#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char pal[50];


    printf("Ingrese una palabra: \n");
    gets(pal);



    puts(strrev (pal));

    return 0;

}
