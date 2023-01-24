#include<stdio.h>

int main()
{
   int max[2], num, n=0;

   max[1]=1;

   do
    {
        printf("Ingrese un numero positivo para continuar \no uno negativo para salir: \n");
        scanf("%d", &num);

        if(n==0)
            {
                max[0]=num;
                max[1]++;
                n++;
            }
        else
            {
                if(max[0]<num)
                    {
                        max[0]=num;
                        max[1]=1;
                    }
                else if(max[0]==num)
                    {
                        max[1]++;
                    }
            }



    }while(num>0);

    printf("Numero mayor: %d \n\n", max[0]);
    printf("Cant. de repeticiones: %d \n\n", max[1]);


    return 0;
}
