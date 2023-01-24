#include<stdio.h>

int main()
{
    int vec[10], i=0, n=0, aux;

    for(i=0;i<10;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", &vec[i]);

            if(i==0)
                {
                    aux=vec[i];
                    n++;
                }
            else
                {
                    if(vec[i-1] != vec[i])
                        {
                            n++;
                        }
                }

        }

    int vec2[n];



    for(i=0;i<n;i++)
        {
            if(vec[i] != vec[i+1])
                {
                    vec2[i] = vec[i];
                }

            printf("%d \n", vec2[i]);
        }

    return 0;

}
