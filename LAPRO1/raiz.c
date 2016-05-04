
/*
 *cc raiz.c -o raiz -lm
 */
#include <stdio.h>
#include <math.h>
 int main() {
    float x;         //real: x -> float x;
                     //real: x -> double x;
    float raiz;
    
    printf("Infrome o valor de X: ");  
    scanf("%f" , &x);    //leia(x)   
   
    raiz = sqrtf(x);

    printf("%f\n", raiz);
                        //escreva(raiz)
   
    return 0;cc
}
