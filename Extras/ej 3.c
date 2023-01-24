#include<stdio.h>

int main()
{
    int i=0, n=1, primero, ultimo;
    int a[11], max, min;

    printf("Ingrese un numero %d: \n", n);
    scanf("%d", &a[i]);

    max=a[i];
    min=a[i];
    ultimo=n;
    primero=n;
    n++;


    for(i=1;i<10;i++)
        {
            printf("Ingrese un numero %d: \n", n);
            scanf("%d", &a[i]);

            if(max<a[i])
                {
                    max=a[i];
                    ultimo = n;
                }
            if(min>a[i])
                {
                    min=a[i];
                    primero = n;
                }

            n++;
        }


    printf("El rango de valores es: (%d - %d) \n\n", min, max);
    printf("El orden del min fue: %d \n\n", primero);
    printf("El orden del max fue: %d \n\n", ultimo);

    return 0;
}
