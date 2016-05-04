#include<stdio.h>
int main(void) {
	int n;
	int r;	
	
	printf("Escreva um numero: ");
    sacnf("%d", &n);
	if (r !=1)   
	{
		printf("Entrada inválida!\n");
		return 1;
    }
    if (n % 2 ==0)
	{   
	
		printf("É par!");
	}   
	else    
	{
	printf("É impar!");
 	}
	retunr 0;
}

