#include<stdio.h>
int main(void)
{
	int d;
	printf("Didite o número da semana que deseja saber, considerando 1 como o primeiro dia útil: ");
	scanf("%d", &d);
	if((d > 0) &&  (d <= 7))
	{	
		if(d == 1)
		{
			printf("Hoje é segunda-feira\n");
		}
		if(d == 2)
		{
			printf("Hoje é terça-feira\n");
		}
		if(d == 3)
		{
			printf("Hoje é quarta-feira\n");
		}
		if(d == 4)
		{
			printf("Hoje é quinta-feira\n");
		}
		if(d == 5)
		{
			printf("Hoje é sexta-feira\n");
		}
		if(d == 6)
		{
			printf("Hoje é sábado\n");
		}
		if(d == 7)
		{
			printf("Hoje é domingo\n");
		}
	}
	else
		printf("Operação inválida, digite o número certo, por favor\n");
	return 0;
}
