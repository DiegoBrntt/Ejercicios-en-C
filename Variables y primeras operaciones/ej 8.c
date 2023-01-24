#include<stdio.h>
#include<stdlib.h>

int main ()
{
   int a, b;

   system("cls");

   printf("Ingrese cantidad de dias: \n");
   scanf("%d", &a);

   b = a * 86400;


   printf("%d dias equivalen a %d segundos. \n", a, b);

   return 0;
}
