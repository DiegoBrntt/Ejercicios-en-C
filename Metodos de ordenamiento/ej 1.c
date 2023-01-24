#include<stdio.h>

int main()
{
    int vec[5], max;

    for(int i=0;i<5;i++)
        {
            printf("Ingrese elemento para posicion %d: \n", i+1);
            scanf("%d", &vec[i]);
        }

    for(int i=0;i<4;i++)
        {
            for(int j=0;j<4-i;j++)
                {
                    if(vec[j]>vec[j+1])
                        {
                            max = vec[j];
                            vec[j] = vec[j+1];
                            vec[j+1] = max;
                        }
                }
        }

    printf("Vector ordenado ascendentemente: \n");

    for(int i=0;i<5;i++)
        {
            printf("Elemento %d: %d \n", i+1, vec[i]);
        }

    return 0;

}

