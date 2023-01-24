#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void esPar(int _num);
int esPar2(int _num);


int main()
{
    int num, aux;
    char aux2;

    printf("Ingrese un n%cmero: \n", 163);
    scanf("%d", &num);

    esPar(num);
    printf("\n%d", esPar2(num));
    esPar3(num);

    return 0;
}

void esPar(int _num)
{
    if(_num % 2 == 0)
        {
            printf("Es un n%cmero par.", 163);
        }
    else
        {
            printf("Es un n%cmero impar.", 163);
        }
}

int esPar2(int _num)
{
    if(_num % 2 == 0)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}
