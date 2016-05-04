#include <stdio.h>
int main(void){
  const char *const green = "\033[0;40;32m";
  const char *const yellow = "\033[0;40;33m";
  const char *const red = "\033[0;40;31m";
  const char *const blue = "\033[0;40;34m";
  const char *const normal = "\033[0m";
 
  printf("%sHello World%s\n", green, normal);
  printf("%sHello World%s\n", yellow, normal);
  printf("%sHello World%s\n", red, normal);
  printf("%sHello World%s\n", blue, normal);
  return 0;
}
