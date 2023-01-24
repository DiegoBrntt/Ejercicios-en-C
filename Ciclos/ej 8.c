#include<stdio.h>

int main()
{
	
    int i, a, x;
    
    printf("Ingrese un numero positivo: \n");
    scanf("%d", &a);
    
	if(a>0)
	{
	    for(i=1;i<=a;i++)
	    {
	        x = a % i;
	        
	        if(x == 0)
	            printf("%d es divisor. \n", i);
	
	    }
	
	}
	else
	{
	    printf("El numero debe ser positivo.\n");
	
	}
	
    
    
    
	return 0;
    
}
