#include<stdio.h>
#include<string.h>

int main()
    {

        char tipo;
        int peso, sub_precio, precio, viaje;

        printf("Ingrese tipo de viaje: Largo(l) o Corto(c). \n");
        scanf("%c", &tipo);
        printf("Ingrese peso de la mercaderia(kg): \n");
        scanf("%d", &peso);

        switch(tipo)
        {
            case 'l': viaje = 2000;
                      if(peso - 20 > 0)
                        {
                            sub_precio = ((peso - 20) / 5) * 800;
                            precio = sub_precio + viaje;
                            printf("El valor del transporte es: \n$%d", precio);
                        }
                      else
                        {
                            precio = viaje;
                            printf("El valor del transporte es: \n$%d", precio);
                        }
                      break;
            case 'c': viaje = 1500;
                      if(peso - 20 > 0)
                        {
                            sub_precio = (peso - 20) * 800;
                            precio = sub_precio + viaje;
                            printf("El valor del transporte es: \n$%d", precio);
                        }
                      else
                        {
                            precio = viaje;
                            printf("El valor del transporte es: \n$%d", precio);
                        }
                      break;
            default:  printf("Tipo de viaje no valido.");
                      break;

        }

        return 0;


    }
