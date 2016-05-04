#include<stdio.h>
#include"s.h"
int main(void)
{
	float y;
	float x;
	float a;
	float b;
	float s;
	printf("Escreva dois números:");
	scanf("%f", &a);
	scanf("%f", &b);
	s = soma(a, b);
	printf(" A soma é %f\n", s);
	return 0;
}
