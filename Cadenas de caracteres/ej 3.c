#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int cont[2];
    char pal[50];

    cont[1]=0;
    cont[0]=0;

    printf("Ingrese una palabra: \n");
    gets(pal);

    for(int i=0;i<strlen(pal);i++)
        {
            switch(pal[i])
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    cont[0]++;
                    break;
                default:
                    cont[1]++;
            }
        }

    printf("Cant Vocales: %d \n", cont[0]);
    printf("Cant Consonantes: %d \n", cont[1]);

    return 0;

}
