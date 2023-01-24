#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    //Contadores
    int contllam=0, contZona[3] = {0}, DNI[2], resp;
    int pri=0, respCorr=0, max, i;
    char maxZona[20], zona;

    printf("Ingrese DNI o 999 para salir: \n");
    scanf("%d", &DNI[0]);


    while(DNI[0]!=999)
        {
            printf("C-CABA   G-GBA   R-Resto el pais");
            printf("Ingrese zona: \n");
            fflush(stdin);
            scanf("%c", &zona);
            printf("¿Cual es la altura(m) el Monnte Everest?\nResouesta del participante: \n");
            scanf("%d", &resp);

            contllam++;


            switch(zona)
                {
                    case 'c':
                    case 'C':contZona[0]+= 1;

                             break;
                    case 'g':
                    case 'G':contZona[1]+= 1;
                             break;
                    case 'r':
                    case 'R':contZona[2]+= 1;
                             break;

                }




            if(resp == 8848)
                {
                    if(pri==0)
                        {
                            DNI[1]=DNI[0];
                            i=contllam;
                            pri=1;
                        }
                    respCorr++;
                }

            printf("Ingrese DNI o 999 para salir: \n");
            scanf("%d", &DNI[0]);
        }



        printf("Porcentaje de respuestas correctas: %.2f \n", (float)(100*respCorr)/contllam);

        printf("Cant. llamadas en CABA: %d \n", contZona[0]);
        printf("Cant. llamadas en GBA: %d \n", contZona[1]);
        printf("Cant. llamadas en Resto el pais: %d \n", contZona[2]);

        if(contZona[0]==contZona[1]==contZona[2])
            {
                printf("Recibieron la misma cant. de llamadas. \n");
            }
        else
            {
                max = contZona[0];
                strcpy(maxZona, "CABA");
                if(max < contZona[1])
                    {
                        max = contZona[1];
                        strcpy(maxZona, "GBA");
                    }
                if(max < contZona[2])
                    {
                        max = contZona[2];
                        strcpy(maxZona, "Resto del pais");
                    }
            }

        printf("Zona con mayor llamadas: %s \n", maxZona);

        printf("El ganador fue el participante numero: %d \n", i);
        printf("DNI: %d \n", DNI[1]);




    return 0;
}
