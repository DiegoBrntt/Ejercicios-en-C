#include <stdio.h>
#define parts 5
#define vueltas 4
/* Lea atentamente toda la consigna:
La final de una competencia de Ciclismo consta de 4 etapas (vueltas) y participan 5 ciclistas.
Los resultados de cada etapa se almacenan en un array donde las filas representan el número de competidor y las columnas las etapas, 
cada posición contiene el tiempo en segundos que ha tardado el corredor en realizar la etapa.
Si un corredor no ha finalizado una etapa aparecerá un 0 en la posición correspondiente.
Los nombres de los corredores se almacenan en un array de registros “RegTotal”, con las siguientes características:
nombre del corredor (char [20]), Tiempo (int).

Se pide:
1. Diseñar el algoritmo que permita rellenar en el programa principal, la tabla con tiempos obtenidos de cada corredor (seg).
2. Desarrollar la función/procedimiento “Total”, que permita cargar el nombre de los corredores y almacenarlo en el array de registros
   diseñado más arriba y a su vez obtener el total en segundos de cada corredor. Teniendo en cuenta que si en alguna vuelta no clasifica,
   ese corredor queda descalificado obteniendo un (1000) como puntaje total.
3. Desarrollar la función/procedimiento “Primero”, que permita encontrar el número de corredor que obtuvo el mejor tiempo y devuelva
   su nombre y su puntuación, emitir dichos datos en el programa principal. (Suponer único).
4. Desarrollar la función/procedimiento recursiva, “Mostrar”, que, teniendo en cuenta,  el número de corredor que obtuvo el mejor tiempo,
   muestre los tiempos parciales obtenidos en cada vuelta.
*/
typedef struct
{
   char nomApe[20];
   int total;
} RegTotal;

void Total(int[][vueltas], RegTotal[], int);
int Primero(RegTotal[], int, int *);
void Mostrar(int[][vueltas], int, int);

int main()
{
   int tiempos[parts][vueltas], max;
   RegTotal carrera[parts];

   for (int i = 0; i < parts; i++)
   {
      for (int j = 0; j < vueltas; j++)
      {
         printf("Ingrese tiempo para la vuelta %d del participante %d: \n", j+1, i+1); 
         scanf("%d", &tiempos[i][j]);
      }
   }

   Total(tiempos, carrera, parts);

   Primero(carrera, parts, &max);
   printf("Ganador:\nNombre y Apellido\tTiempo Total\n");
   for (int i = 0; i < parts; i++)
   {
      if(carrera[i].total == max)
      {
         printf("%-20s\t%d\n\n", carrera[i].nomApe, carrera[i].total);
         
         printf("Vuelta 1\tVuelta 2\tVuelta 3\tVuelta4\n");
         Mostrar(tiempos, parts-1, i);
      }
   }
   

   return 0;
}


void Total(int tiempos[][vueltas], RegTotal carrera[], int m)
{
   for (int i = 0; i < parts; i++)
   {
      carrera[i].total = 0;

      printf("Ingrese Nombre y Apellido del participante %d: \n", i+1);
      fflush(stdin);
      gets(carrera[i].nomApe);
   }

   for (int i = 0; i < parts; i++)
   {
      for (int j = 0; j < vueltas; j++)
      {
         if (tiempos[i][j] == 0)
         {
            carrera[i].total = 1000;
            i++;
            j=0;
         }
         else
         {
            carrera[i].total += tiempos[i][j];
         }
      }
   }
}

int Primero(RegTotal carrera[], int m, int*p)
{
   for (int i = 0; i < m; i++)
   {
      if(i==0)
      {
         *p = carrera[i].total;
      }
      else
      {
         if(*p > carrera[i].total)
         {
            *p = carrera[i].total;
         }
      }
   }

   return *p;
   
}

void Mostrar(int tiempos[][vueltas], int m, int n)
{
   if(m==n)
   {
      printf("%d\t\t%d\t\t%d\t\t%d\n", tiempos[m][0], tiempos[m][1], tiempos[m][2], tiempos[m][3]);
   }
   else
   {
      Mostrar(tiempos, m-1, n);
   }
   
}