#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main ()
{
    int a;
    char c[10];



    printf("Ingrese Nombre del alumno: \n");
    scanf(" %s", &c);

    printf("Ingrese nota de la materia: \n");
    scanf("%d", &a);






    switch(a)
    {
         case 1:
         case 2:
         case 3: printf("%s obtuvo un Reprobado", c);
                 break;
         case 4:
         case 5: printf("%s obtuvo un Aprobado", c);
                 break;
         case 6:
         case 7: printf("%s obtuvo un Bueno", c);
                 break;
         case 8:
         case 9: printf("%s obtuvo un Distinguido", c);
                 break;
         case 10:printf("%s obtuvo un Sobresaliente", c);
                 break;

        default: printf("Nota no valida.");
                 break;
    }

return 0;

}
