#include <stdio.h>

int Palindromo(int[], int);

int main()
{
    int n;

    printf("Ingrese tamaño deseado del vector: \n");
    scanf("%d", &n);

    int vec[n];

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese valor para posicion %d: \n", i + 1);
        scanf("%d", &vec[i]);
    }

    if (Palindromo(vec, n) == 1)
        printf("Es palindromo. \n");
    else
        printf("No es palindromo. \n");

    return 0;
}

int Palindromo(int vec2[], int m)
{
    if (m <= 1)
        return 1;

    int inicio = 0, fin = m - 1;

    while (vec2[inicio] == vec2[fin])
    {
        if (inicio >= fin)
            return 1;

        inicio++;
        fin--;
    }

    return 0;
}