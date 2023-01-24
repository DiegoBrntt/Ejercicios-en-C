#include <stdio.h>
#include <string.h>

int main () {
   char apell[50];
   char primero[50];
   int ret, i=0, bul=0;

   do
    {
        printf("Ingrese un apellido o zzz para procesar: \n");
        fflush(stdin);
        scanf("%s", &apell);
        
        if(strcmp(apell, "zzz") == 0 || strcmp(apell, "ZZZ") == 0){
            bul = 1;
        } else {
            bul = 0;
        }

        if (bul == 0)
        {
            if(i==0)
            {
                strcpy(primero, apell);
            }
        else
            {
                if(strcmp(primero, apell) > 0)
                    {
                        strcpy(primero, apell);
                        i++;
                    }
            }
        }
        
        

    }while(bul != 1);

    puts(primero);
    printf(" es el primero de la lista.");

   return(0);
}
