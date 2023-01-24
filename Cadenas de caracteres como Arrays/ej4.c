#include<stdio.h>
#include<math.h>

int pot(int, int);

int main()
{
    int base, potencia;

    printf("Ingrese valor para la Base:\n");
    scanf("%d", &base);
    printf("Ingrese valor para la Potencia:\n");
    scanf("%d", &potencia);

    printf("%d ^ %d = %d",  base, potencia, pot(base, potencia));

    return 0;
}

int pot(int b, int p)
{
    return pow(b, p);
}

