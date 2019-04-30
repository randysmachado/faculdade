#include <stdio.h>

int main() {

  float height, weight = 0;

  printf("Informa seu peso\n");
  scanf("%f", &weight);
  printf("Informa sua altura\n");
  scanf("%f", &height);
  
  float result = weight / ( height * height );

  printf("Seu IMC é: %.2f\n", result);
}
