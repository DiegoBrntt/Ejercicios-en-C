#include<stdio.h>

int main()
{
	
    int a, b;
    
    printf("Ingrese un numero positivo: \n");
    scanf("%d", &a);
    printf("Ingrese un numero positivo: \n");
    scanf("%d", &b);

    if(a<b)
	{
		do
	    {
	        printf("%d \n", a);
			a++;	
		
	    }while(a<=b);
	}
	else
	{
		printf("A debe ser menor que B. \n");
		
	}
    
	
    return 0;   
}
