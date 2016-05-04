#include<stdio.h>
int main(void)
{
	int i, n, j;	/*n -> número do lado */
	i = 1;		/* i= 1,2,3,...,n-1,n*/
	j = 1;
	printf("Digite o número representando o tamanho do lado: ");
	scanf("%d", &n);
	while(j <= n)
	{
		i = 1;
		while(i <= n)
		{
			printf("* ");
			i = i + 1;
		}
	printf("\n");
	j = j + 1;
	}
	printf(" Fim\n");
	return 0;
}
