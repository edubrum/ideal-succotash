#include<stdio.h>
#include<string.h>
int main(void)
{
	int dia;
	char diaext[51];
	fprintf(stdout, "Digite o número do dia útil atual, ENTRE 1 A 7, POR FAVOR, para saber que dia da semana é:\n");
	fscanf(stdin, "%d", &dia);
	switch(dia)
	{
		case 1: strcpy(diaext, "segunda-feira");
		break;
		
		case 2: strcpy(diaext, "terça-feira");
		break;

		case 3: strcpy(diaext, "quarta-feira");
		break;

		case 4: strcpy(diaext, "quinta-feira");
		break;

		case 5: strcpy(diaext, "sexta-feria");
		break;

		case 6: strcpy(diaext, "sábado");
		break;

		case 7: strcpy(diaext, "domingo");
		break;

		default:
			fprintf(stderr, "Escreva um dia que possa ser lido, por favor\n");
		return 1;
	}
	fprintf(stdout, "O dia %d corresponde a(ao) %s.\n", dia, diaext);
	return 0;
}
