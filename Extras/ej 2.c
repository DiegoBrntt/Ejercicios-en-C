#include<stdio.h>

int main()
{
    int i=1, primero, ultimo;
    int a[46], max, min;

    printf("Ingrese un tiempo para corredor numero %d: \n", i);
    scanf("%d", &a[i]);

    max=a[i];
    min=a[i];
    ultimo=1;
    primero=1;


    for(i=2;i<=45;i++)
        {
            printf("Ingrese un tiempo para corredor numero %d: \n", i);
            scanf("%d", &a[i]);


            if(max<a[i])
                {
                    max=a[i];
                    ultimo = i;
                }
            if(min>a[i])
                {
                    min=a[i];
                    primero = i;
                }

        }



    printf("El primero fue: %d \n\n", primero);
    printf("El ultimo fue: %d \n\n", ultimo);

    return 0;
}
