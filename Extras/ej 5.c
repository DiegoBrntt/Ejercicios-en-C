#include<stdio.h>

int main()
{
    int terminales[4]={0}, empleados[6]={0}, i=0;
    int numTer, numEmp, precio, venta, cantPas, contPas[3]={0}, cantVent=5;
    int min, minEmp,maxTer, max, MenorM=0;
    float total[4] = {0};

    for(i=0;i<cantVent;i++)
        {
            printf("Ingrese numero de terminal (1-3): \n");
            scanf("%d", &numTer);
            printf("Ingrese numero de empleado (1-6): \n");
            scanf("%d", &numEmp);
            printf("Ingrese precio del pasaje: \n");
            scanf("%d", &precio);
            printf("Ingrese cant. de pasajes: \n");
            scanf("%d", &cantPas);

            venta = precio * cantPas;

            if(venta < 1000)
                {
                    MenorM++;
                }
            if(i == 0)
                {
                    min = cantPas;
                    minEmp = numEmp;
                }
            else
                {
                    if(min > cantPas)
                        {
                            min = cantPas;
                            minEmp = numEmp;
                        }
                }


            switch(numTer)
            {
                case '1': contPas[0] += cantPas;
                          total[0] += venta;
                          break;
                case '2': contPas[1] += cantPas;
                          total[1] += venta;
                          break;
                case '3': terminales[2] += cantPas;
                          total[2] += venta;
                          break;
            }

            switch(numEmp)
            {
                case '1': empleados[0] += cantPas;
                          break;
                case '2': empleados[1] += cantPas;
                          break;
                case '3': empleados[2] += cantPas;
                          break;
                case '4': empleados[3] += cantPas;
                          break;
                case '5': empleados[4] += cantPas;
                          break;
                case '6': empleados[5] += cantPas;
                          break;
            }

        }

        for(i=0;i<6;i++)
            {
                printf("Empleado %d tuvo: %d ventas. \n", i+1, empleados[i]);
            }
        for(i=0;i<3;i++)
            {
                printf("Terminal %d vendio: \n", i+1);
                printf("$%d \n", total[i]);
            }

        total[3]=total[0]+total[1]+total[2];
        printf("Total vendido: $%d \n", total[4]);

        printf("Empleado %d tuvo la menor cant. de pasajes vendidos en una sola venta (%d). \n", minEmp, min);

        for(i=0;i<3;i++)
            {
                printf("Terminal %d vendio: %d pasajes. \n", i+1);
                printf("%d pasajes. \n", terminales[i]);
            }

        terminales[3]=terminales[0]+terminales[1]+terminales[2];
        printf("Total de pasajes: %d \n", terminales[3]);

        max=terminales[0];
        maxTer=1;
        if(max<terminales[1])
            {
                max=terminales[1];
                maxTer=2;
            }
        if(max<terminales[2])
            {
                max=terminales[2];
                maxTer=3;
            }

        printf("Terminal con mas ventas de pasajes: %d \n", maxTer);

        for(i=0;i<3;i++)
            {
                printf("Porcentaje de ventas Terminal %d:\n", i+1);
                printf("%f \n", (float)(terminales[i]*100)/terminales[3]);
            }

        printf("Ventas menor a $1000: %d \n", MenorM);

        return 0;



}
