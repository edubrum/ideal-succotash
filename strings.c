#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[10]="batata\0"; char s2[10]="arroz\0";
	printf("\n\tComprimentos: %lu %lu\n",strlen(s1), strlen(s2));
	if(strcmp(s1,s2)==0)
		printf("\n Strings iguais.\n");
		else
		{
			printf("\n\tString diferentes\n");
		}			
			strcat(s1,s2);
			printf("\n\t%s",s1);
			strcpy(s1,"\n\tIsto é um teste.\n");
			printf("%s\n",s1);		
			return 0;
}
