#include<stdio.h>

int main() {
    int a;         //inteiro a -> int a;
    int b;         //real x -> float x;
    int soma;      //literal nome -> char[37] nome;
    
    printf("Infrome o valor de A: ");  
    scanf("%i" , &a);    //leia(a)   
   
    printf("Informe o valor de B: ");
    scanf("%i", &b);
 
    soma = a + b;

    printf("%i + %i = %i\n", a, b, soma);
                        //escreva(soma)
   
    return 0;
}
