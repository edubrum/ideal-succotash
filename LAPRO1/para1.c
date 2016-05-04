#include<stdio.h>
int main(void)
{					//x = ++i
	int i;				// i = i +1 -> i++
	printf("Início\n");
	for (i = 1; i <= 10; i++)
	{
		if(i % 2 == 1)
		continue;
		printf("%d\n", i);
	}
	printf("Fim\n");
	return 0;
}
