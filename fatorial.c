#include<stdio.h>
double fatorial(double);
double fatorial(double n)
{
	double f;
	double r = 1L;
	for(f = 1; f <= n; f= f + 1)
		r = r * f;
	return r;
}
int main()
{
	double n;  
	printf("Escreva um número:");
	scanf("%lf", &n);
	double f = fatorial(n);
	printf("\nN=%lf, F=%lf\n", n, f);
	return 0;
}
