#include<stdio.h>
int main(void)
{
	FILE *arquivo;
	int n;
	arquivo = fopen("numArqv.txt", "r");
	while( ! feof(arquivo))
	{
		int r = fscanf(arquivo, "%i", &n);
		printf("Resultado do scanf=%i; o número lido foi %i.\n", r, n);
	}
		fclose(arquivo);
	return 0;
}
