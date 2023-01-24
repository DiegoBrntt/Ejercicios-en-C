#include<stdio.h>


int main ()
{
    float a, b, c;

    printf("Ingrese primer lado del triangulo: \n");
    scanf("%f", &a);

    printf("Ingrese segundo lado del triangulo: \n");
    scanf("%f", &b);

    printf("Ingrese tercer lado del triangulo: \n");
    scanf("%f", &c);

    if (a+b>c && a+c>b && b+c>a)
        {
           if (a==b && b==c)
            {
               printf("el triangulo es equilatero.\n");
               return 0;
            }
            else if (a==b || b==c || a==c)
                {
                   printf("el triangulo es isosceles.\n");
                   return 0;
                }
            else
                {
                   printf("el triangulo es escaleno.\n");
                   return 0;

                }

        }
    else
        {
               printf("Estos lados no forman un triangulo.\n");
               return 0;

        }




return 0;

}
