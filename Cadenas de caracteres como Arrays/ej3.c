#include <stdio.h>
#include <stdbool.h>

int Suma(int, int);
int Resta(int, int);
int Multiplicacion(int, int);
float Division(int, int);

int main()
{
    int a, b;
    char op;
    bool rep = false;

    printf("Ingrese valor para A: \n");
    scanf("%d", &a);
    printf("Ingrese valor para B: \n");
    scanf("%d", &b);

    while (rep == false)
    {
        printf("Ingrese caracter segun operacion deseada: \n");
        fflush(stdin);
        scanf("%c", &op);

        switch (op)
        {
        case 's':
        case 'S':
            printf("%d + %d = %d", a, b, Suma(a, b));
            rep = true;
            break;
        case 'r':
        case 'R':
            printf("%d - %d = %d", a, b, Resta(a, b));
            rep = true;
            break;
        case 'm':
        case 'M':
            printf("%d x %d = %d", a, b, Multiplicacion(a, b));
            rep = true;
            break;
        case 'd':
        case 'D':
            if (b == 0)
            {
                printf("No se puede dividir por 0.");
            }
            else
            {
                printf("%d / %d = %2.f", a, b, Division(a, b));
            }
            rep = true;
            break;
        default:
            printf("No es un operador valido.");
            rep = false;
        }
    }
    return 0;
}

int Suma(int x, int y)
{
    return x + y;
}

int Resta(int x, int y)
{
    return x - y;
}

int Multiplicacion(int x, int y)
{
    return x * y;
}

float Division(int x, int y)
{
    return x/y;
}
