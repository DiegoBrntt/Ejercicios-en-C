#include<stdio.h>

int main ()
{
    int des[10]={0},hrs[10][5], cont[10][2]={0}, max[10][2], mes=1;
    char meses [12][20]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
                          "Septiembre", "Octubre", "Noviembre", "Diciembre"};

   while(mes!=0){

       printf("Ingrese un mes o 0 para salir: \n");
       fflush(stdin);
       scanf("%d", &mes);

       if(mes==0)
         {
            break;
         }

       for(int i=0;i<10;i++)
         {
            for(int j=0;j<5;j++)
              {


                 printf("Ingrese hrs para el desarrollador %d\n", i+1);
                 printf("Proyecto %d\n", j+1);
                 fflush(stdin);
                 scanf("%d", &hrs[i][j]);

                 des[i]+=hrs[i][j];

                 if(hrs[i][j]==0)
                    {
                        cont[i][1]++;
                    }

               }

          }

        printf("\n");

        puts(meses[mes]);

        printf("\n\nCant. de hrs por trabajador\n\n");

        for(int i=0;i<10;i++)
          {
            printf("Trabajador %d: %d hrs\n", i+1, des[i]);
          }

        printf("\n\nCant. de que no participàron en todos los proyectos.\n\n");

        for(int i=0;i<10;i++)
          {
            if(cont[i][1]!=0)
                {
                    printf("Trabajador %d: no trabajo en todos los proyectos. \n", i+1);
                }
          }

        for(int i=0;i<10;i++)
          {
            for(int j=0;j<5;j++)
              {



                 if(j==0)
                    {
                        max[i][0]=hrs[i][j];
                        max[i][1]=j+1;
                    }
                 else
                    {
                        if(max[i][0]<hrs[i][j])
                            {
                                max[i][0]=hrs[i][j];
                                max[i][1]=j+1;
                            }
                    }


              }

          }

        printf("\n\nProyecto al que le dedico mas hrs cada desarrollador.\n\n");

        for(int i=0;i<10;i++)
          {
            printf("Trabajador %d le dedico mas hrs al proyecto %d: %d hrs. \n", i+1, max[i][1], max[i][0]);
          }

   }

    return 0;
}
