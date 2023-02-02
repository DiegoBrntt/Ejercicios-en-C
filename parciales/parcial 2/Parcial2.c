#include<stdio.h>
#include<string.h>

int main ()
{
    int temps[2][1000], cont=0, max[2], i;
    float  prom[2]={0};
    char ciudad[2][30]={"BS. AS.",
                        "CORDOBA"};

    for(int i=0;i<2;i++)
        {
            printf("\n\n");
            puts(ciudad[i]);

            for(int j=0;j<1000;j++)
                {
                    printf("\nIngrese temp %d: \n", j+1);
                    scanf("%d", &temps[i][j]);
                }
        }

    for(int i=0;i<2;i++)
        {

            for(int j=0;j<1000;j++)
                {
                    if(i==0)
                        {
                            max[0]=temps[i][j];
                            max[1]=i;
                        }
                    else
                        {
                            if(max[0]<temps[i][j])
                                {
                                    max[0]=temps[i][j];
                                    max[1]=i;
                                }
                        }
                }
        }

    i=max[1];

    printf("\n\nTemperatura Maxima: %d \n", max[0]);
    printf("Ciudad: ");
    puts(ciudad[i]);

    for(int i=0;i<2;i++)
        {

            for(int j=0;j<1000;j++)
                {
                    if(temps[i][j]>32)
                        {
                            cont++;
                        }

                    if(i==0)
                        {
                            prom[0]+=temps[i][j];
                        }
                    if(i==1)
                        {
                            prom[1]+=temps[i][j];
                        }
                }
        }

    prom[0]/=1000;
    prom[1]/=1000;

    printf("\n\nPromedio de Temps por ciudad: \n");

    puts(ciudad[0]);
    printf("Promedio: %f\n\n", prom[0]);
    puts(ciudad[1]);
    printf("Promedio: %f\n\n", prom[1]);

    printf("\n\nHay %d temps mayores a 32. \n", cont);

    return 0;
}
