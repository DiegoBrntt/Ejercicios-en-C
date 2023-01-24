#include<stdio.h>

int main ()
{
   float a, b;
   float suma, resta, multiplicacion, division;

   printf("Ingrese valor para a: \n");
   scanf("%f", &a);
   printf("Ingrese valor para b: \n");
   scanf("%f", &b);

   suma = a + b;
   resta = a - b;
   multiplicacion = a * b;
   division = a / b;



   printf("SUMA= %f \nRESTA= %f\nMULTIPLICACION = %f\nDIVISION = %f", suma, resta, multiplicacion, division);

   return 0;
}
