#include<stdio.h>
int  main(void)
{
	int i, n, j;
	printf("Digite n:");
	scanf("%d", &n);
	for(j = 1; j <= n;j++) 
	{
        	for(i = 1; i <= n; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
