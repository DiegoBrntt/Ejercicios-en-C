#include<stdio.h>

int main ()
{
   float a, b;

   printf("Ingrese valor en KM: \n");
   scanf("%f", &a);
   b = a * 1000;
   printf("El Valor en M es: %.2f \n", b);

   return 0;
}
