#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int lim, bul = 0, num, cont=0;

    srand(time(NULL));

    lim = 1 + rand() % 100;

    int Vec[lim];

    for(int i=0;i<lim;i++)
        {
            Vec[i]=rand() % 100 + 1;
        }

    printf("Juego de azar - Elija un numero y vea si acierta la ruleta. \nDebe ser entre el 1 y el 100.\n");

    while(bul==0)
        {
            printf("Elija numero para el sorteo: \n");
            fflush(stdin);
            scanf("%d", &num);

            for(int i=0;i<lim;i++)
                {
                    if(num==Vec[i])
                        {
                            printf("Enhorabuena ha ganado la ruleta!!! \n");
                            bul=1;
                            break;
                        }
                    else
                        {
                            cont++;
                        }
                    if(cont==(lim-1))
                        {
                            printf("Segui participando mister!!! \n");
                            bul=1;
                        }

                }
        }

    printf("Numeros Ganadores: \n");

    for(int i=0;i<lim;i++)
                {
                    printf("%d \n", Vec[i]);
                }


    return 0;

}
