#include<stdio.h>
void soma(float,float, float *);
void soma(float x, float y, float *r)
{
	*r = x + y;
}
int main(void)
{
	float x, y, s;
	printf("Escreva dois número:");
	scanf("%f", &x);
	scanf("%f", &y);
	soma (x, y, &s);
	printf("S = %.2f\n", s);
	return 0;
}
