#include<stdio.h>
int main(void)
{
	int d;
	printf("Digete o número do dia útil da semana para saber qual é:\n ");
	scanf("%d", &d);
	switch (d)
	{
		case 1:
			printf("Hoje é segunda-feira\n");
		break;

		case 2:
			printf("Hoje é terça-feira\n");
		break;

		case 3:
			printf("Hoje é quarta-feira\n");
		break;

		case 4:
			printf("Hoje é quinta-feria\n");
		break;

		case 5:
			printf("Hoje é sexta-feira\n");
		break;

		case 6:
			printf("Hoje é sábado\n");
		break;

		case 7:
			printf("Hoje é domingo\n");
		break;
		
		default: 
			printf("Escreva um número certo, por favor\n");
	}
	return 0;
}
