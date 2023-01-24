#include<stdio.h>

int main()
{
	
    int a, i = 1;

    
	do
	{
	    a = i % 2;
		
		if(a == 0)  
		    printf("Numero par: %d \n", i);
		
		i++;
		
	}while(i<=50);
	
	printf("La suma de sus cifras es: %d", i);
	
    
    return 0;   
}
