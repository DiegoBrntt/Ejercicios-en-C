#include<stdio.h>

int main()
{
    int i, n=0;
    float a[20];


    for(i=1;i<=20;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%f", &a[n]);

            if(a[0]<a[n])
                a[0]=a[n];

            n++;

        }

    printf("El mayor fue: %f \n\n", a[0]);

    return 0;
}
