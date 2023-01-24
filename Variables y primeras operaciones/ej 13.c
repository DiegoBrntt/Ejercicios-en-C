#include<stdio.h>
#include<math.h>

int main()
{
    float cat1, cat2, hip;

    printf("Ingrese medida cateto adyacente (cm): \n");
    scanf("%f", &cat1);
    printf("Ingrese medida cateto opuesto (cm): \n");
    scanf("%f", &cat2);

    hip = pow(cat1, 2) + pow(cat2, 2);
    hip = sqrt (hip);

    printf("Hipotenusa es igual: %.2f cm.\n", hip);

    return 0;

}
