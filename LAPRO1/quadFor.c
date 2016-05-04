#include<stdio.h>
int main(void)
{
    int i , n, j;
    printf("Escreva o tamanho do lado do quadrado que deseja");
    scanf("%d", &n);
    for(i = 1;  i <= n; i++)
    {
        printf("*");
    	for(j = 1; j <= n; j++)
    	{	
		printf("\n");
	}
    }
    return 0;
}
