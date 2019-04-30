#include <stdio.h>

int main() {
  int x, y, troca;
  
  printf("Número X: \n");
  scanf("%d", &x);
  printf("Número Y: \n");
  scanf("%d", &y);

  troca = y;
  y = x;
  x = troca;

  printf("X: %d\n", x);
  printf("Y: %d\n", y);
}