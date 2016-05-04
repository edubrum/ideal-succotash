#include<stdio.h>
int main(void) {
    int n;
    printf("Digite um número para saber se e par ou impar: ");
    scanf("%d", &n);
    if(n % 2 ==0)
    { 
        printf("É par!");
    }
    else
    {
        printf("É impar!");
    }
    printf("\n");
    return 0;
}
