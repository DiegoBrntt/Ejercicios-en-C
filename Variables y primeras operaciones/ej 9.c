#include<stdio.h>
#include<math.h>

int main ()
{
   int a, b;
   int dias = 0, horas, minutos, segundos;

   printf("Ingrese cant. de segundos: \n");
   scanf("d", &a);

   if(a >= 60)
    {
      minutos = a / 60;
      segundos = a % 60;

      if (minutos >= 60)
        {
          horas = minutos / 60;
          minutos = minutos % 60;

          if(horas >= 24)
            {
              dias++;
              horas = horas % 24;
              printf("Dias = %d. Horas = %d. Minutos = %d. Segundos = %d.", dias, horas, minutos, segundos);
            }
            else
                {
                  printf("Dias = %d. Horas = %d. Minutos = %d. Segundos = %d.", dias, horas, minutos, segundos);
                }
        }
        else
            {

                printf("Dias = %d. Horas = %d. Minutos = %d. Segundos = %d.", dias, horas, minutos, segundos);
            }

    }
    else
        {
          segundos = a;
          printf("Dias = %d. Horas = %d. Minutos = %d. Segundos = %d.", dias, horas, minutos, segundos);
        }

    return 0;
}
