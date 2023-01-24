#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main ()
{
    float a, b, r;
    char c;

    printf("Ingrese primer valor numerico: \n");
    scanf("%f", &a);

    printf("Ingrese segundo valor numerico: \n");
    scanf("%f", &b);

    printf("SUMA(s). \n");
    printf("RESTA(r). \n");
    printf("MULTIPLICACION(m). \n");
    printf("DIVISION(d). \n");

    printf("Ingrese operador: \n");
    scanf(" %c", &c);




    switch(c)
    {
         case 's': r = a + b;
                   printf("Resultado de la suma: %f \n", r);
                   break;
         case 'r': r = a - b;
                   printf("Resultado de la resta: %f \n", r);
                   break;
         case 'm': r = a * b;
                   printf("Resultado de la multiplicacion: %f \n", r);
                   break;
         case 'd': if(b != 0)
                      {
                          r = a / b;
                          printf("Resultado de la division: %f \n", r);
                          return 0;

                      }
                   else
                      {
                           printf("No se puede dividir por 0.");
                           return 0;
                      }

        default: printf("Operador no valido.");
    }

return 0;

}
