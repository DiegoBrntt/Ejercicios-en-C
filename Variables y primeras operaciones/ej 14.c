#include<stdio.h>

float precio[3], total[4];
int ventas[3];

int main()
{


    printf("Ingrese precio para gaseosa de cola: \n ");
    scanf("%f", &precio[0]);
    printf("Ingrese cant. de ventas de gaseosa de cola: \n ");
    scanf("%d", &ventas[0]);
    printf("Ingrese precio para gaseosa de naranja: \n ");
    scanf("%f", &precio[1]);
    printf("Ingrese cant. de ventas de gaseosa de naranja: \n ");
    scanf("%d", &ventas[1]);
    printf("Ingrese precio para gaseosa de limonada: \n ");
    scanf("%f", &precio[2]);
    printf("Ingrese cant. de ventas de gaseosa de limonada: \n ");
    scanf("%d", &ventas[2]);

    total[0] = precio[0] * ventas[0];
    total[1] = precio[1] * ventas[1];
    total[2] = precio[2] * ventas[2];
    total[3] = total[0] + total[1] + total[2];

    printf("PRODUCTO     COLA     NARANAJA     LIMONADA\n");
    printf("VENTAS        %d         %d         %d\n", ventas[0], ventas[1], ventas[2]);
    printf("PRECIO        %.2f       %.2f       %.2f\n", precio[0], precio[1], precio[2]);
    printf("TOTAL         %.2f       %.2f       %.2f\n", total[0], total[1], total[2]);
    printf("TOTAL...............................%.2f\n", total[3]);

    return 0;

}
