#include <stdio.h>
#include<string.h>

int Palindromo(char[], int, int);

int main()
{
    char cad[100];

    printf("Ingrese cadena de caracteres: \n");
    scanf("%s", &cad);


    if (Palindromo(cad, strlen(cad)-1, 0) == 1)
        printf("Es palindromo. \n");
    else
        printf("No es palindromo. \n");

    return 0;
}

int Palindromo(char cad2[], int fin, int inicio)
{
    if (fin <= 1)
        return 1;


    if (cad2[inicio] != cad2[fin])
    {
        return 0;
    }
    else
    {
        if (inicio >= fin)
            return 1;
        Palindromo(cad2, fin-1, inicio+1);
    }
}