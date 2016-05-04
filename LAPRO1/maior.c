#include<stdio.h>
#include "maiorlib.h"
int main (void)
{
	int x, y;
	printf("Escreva dois números diferentes para saber qual o maior\nDigite o primeiro:");
	scanf("%d", &x);
	printf("Agora escreva o próximo:");
	scanf("%d", &y);
	printf("Obrigado.\n");
	printf("O maior é: %d\n", maior(x, y));
	return 0;
}
