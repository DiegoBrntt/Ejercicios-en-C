#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    float num, r;

    printf("ELEGI EL NUMERO CON EL QUE ESEAS OPERAR:\n");
    scanf("%f", &num);

    printf("(1) EL TRIPLE.\n");
    printf("(2) EL CUADRADO.\n");
    printf("(3) LOGARITMO NATURAL.\n");
    printf("(4) LOGARITMO DECIMAL.\n");
    printf("ELEGI EL NUMERO DE LA OPCION QUE DESEES:\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1: r = num * 3;
                printf("El triple de %f es: %f\n", num, r);
                break;
        case 2: r = pow(num, 2);
                printf("El cuadrado de %f es: %f\n", num, r);
                break;
        case 3: if (num > 0)
                    {
                      r = log(num);
                      printf("El logaritmo natural de %f es: %f\n", num, r);
                      return 0;
                    }
                  else
                    {
                      printf("No se puede calcular cuando X es menor o igual que 0.");
                      return 0;
                    }
                  break;
        case 4: if (num > 0)
                  {
                      r = log10(num);
                      printf("El logaritmo decimal de %f es: %f\n", num, r);
                      return 0;
                  }
                  else
                  {
                      printf("No se puede calcular cuando X es menor o igual que 0.");
                      return 0;
                  }
                  break;
        default: printf("No es una opcion valida.");
                 break;

    }

    return 0;

}
