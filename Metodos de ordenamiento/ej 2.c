#include<stdio.h>
#include<string.h>

int main()
{
    char nombre[50][30];
    int bul=0, i=0;

    while(bul==0)
        {
            printf("Escriba un nombre o zzz para procesar: \n");
            fflush(stdin);
            scanf("%s", &nombre[i]);

            if(nombre[i]=='zzz' || nombre[i]=='ZZZ')
                {
                    bul=1;
                    break;
                }

            i++;
        }



    return 0;

}
