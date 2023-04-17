#include <stdio.h>

int mult(int a, int b) {
 return a*b;
}

int main() {
  int x = 10,y = 20;
  printf("resultado = %d\n", mult(x,y));
  return 0;
}