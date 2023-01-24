#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int cont = 0;
    char txt[50];

    FILE *f;
    FILE * p;

    f = fopen("MiTexto.txt", "r");
    p = fopen("NITEXTO.txt", "w");

    if(f == NULL)
        {
            printf("No se pudo leer el archivo.");
            return;
        }
    if(p == NULL)
        {
            printf("No se pudo crear el archivo.");
            return;
        }

    while(!feof(f))
        {
            fread(&txt, sizeof(txt), 1, f);

            if(cont == 0)
                {
                    for(int i = 0; i < 50;i++)
                        {
                            if(txt[i] == NULL)
                                {
                                    break;
                                }
                            else
                                {
                                    toupper(txt[i]);
                                }
                        }

                    printf("%s", txt);

                }

            cont++;

        }

    fclose(f);
    fclose(p);

    return 0;

}
