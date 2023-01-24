#include<stdio.h>

void piramide(int, int, int);

int main()
{
    int n;

    while(n < 0 || n > 10)
    {
        printf("Ingrese valor para n (1-10): \n");
        scanf("%d", &n);
    }

    printf("\nPiramide:\n---------\n");
    piramide(n, 1, 1);

    return 0;

    
}

void piramide(int n, int j, int i)
{
    if(j <= n)
    {
        if (i < j)
        {
            printf("%d", i);
            piramide(n, j, i+1);
        }
        else if(i == j)
        {
            printf("%d \n", i);
            piramide(n, j+1, 1);
        }
    }
}