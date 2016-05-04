#include<stdio.h>
int main (void)
{
	int i, n;		/* i -> contagem*/
	i = 1;
	printf("Escreva um número para saber a contaagem de 1 até ele: ");
	scanf("%d", &n);
	while( i <= n)
	{
		printf("%d ", i);
		i = i + 1;
	}
	printf("Fim\n");
	return 0;
}
	
	
