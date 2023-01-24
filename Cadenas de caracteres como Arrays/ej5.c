#include<stdio.h>
#include<stdbool.h>

int main()
{
    esPrimo();

    return 0;
}

void esPrimo(void)
{
    int num, cont=0;
    bool primo;

    printf("Ingrese un numero para verificar si es primo: \n");
    scanf("%d", &num);

    for(int i=1;i<=num;i++)
    {
        if(num % i == 0)
            cont++;
    }

    if(cont == 2)
    {
        primo = true;
    }
    else
    {
        primo = false;
    }

     printf("\nPrimo = %s \n", primo?"True":"False");
}
