#include<stdio.h>

int main ()
{
   float a, b;
   float area, perimetro;

   printf("Ingrese valor para base de un triangulo: \n");
   scanf("%f", &a);
   printf("Ingrese valor para altura de un trisngulo: \n");
   scanf("%f", &b);

   area = a * b / 2;
   perimetro = a + b + (b / a);



   printf("Area= %f \nPerimetro= %f", area, perimetro);

   return 0;
}
