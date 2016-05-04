#include<stdio.h>
int main(void)
{
	FILE *arquivo;
	arquivo = fopen("saida.txt", "w");    
	fprintf(arquivo, "Hello, world!\n");
	fclose(arquivo);
	return 0;
}
