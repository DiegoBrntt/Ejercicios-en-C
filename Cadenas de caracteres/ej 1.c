#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char pal[20];

    printf("Ingrese una palabra: \n");
    gets(pal);

    for(int i=0;i<strlen(pal);i++)
        {
            if(i==(strlen(pal) - 1))
                {
                    printf("%c", pal[i]);
                }
            else
                {
                    printf("%c - ", pal[i]);
                }
        }

    return 0;


}
