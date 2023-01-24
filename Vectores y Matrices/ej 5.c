#include<stdio.h>

int main()
{
    int i, tiempo[10];
    int med[2], pos[2];
    float prom=0, n=0;

    for(i=0;i<10;i++)
        {
            printf("Ingrese tiempo de corredor numero %d : \n", i+1);
            scanf("%d", &tiempo[i]);

            n += tiempo[i];
            prom = n / (i+1);

            if(i==0)
                {
                    med[0]=tiempo[i];
                    pos[0]=i+1;
                    med[1]=tiempo[i];
                    pos[1]=i+1;
                }
            else
                {
                    if(med[0]>tiempo[i])
                        {
                            med[0]=tiempo[i];
                            pos[0]=i+1;
                        }
                    if(med[1]<tiempo[i])
                        {
                            med[1]=tiempo[i];
                            pos[1]=i+1;
                        }
                }


        }


    printf("Tiempo Promedio: %.2f \n", prom);
    printf("Ganador: %d \n", pos[0]);
    printf("Ultimo: %d \n", pos[1]);


    return 0;
}
