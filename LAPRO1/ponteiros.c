#include <stdio.h>
#include<stdlib.h> 
int main(void)
{
    int x, y;
    int *p;
 
    p = &x;
 
    scanf("%d", &x);
    scanf("%d", &y);
 
    printf("x=%d\n", x);
    printf("endereço de x=%p\n", &x);
 
    printf("y=%d\n", y);
    printf("endereço de y=%p\n", &y);
 
    printf("valor apontado por p=%d\n", *p);
    printf("valor de p=%p\n", p);
    printf("endereço de p=%p\n", &p);
 
    p++;
 
    printf("valor apontado por p=%d\n", *p);
    printf("valor de p=%p\n", p);
    printf("endereço de p=%p\n", &p);
 
    return EXIT_SUCCESS;
}
