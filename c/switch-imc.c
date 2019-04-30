#include <stdio.h>
#include <stdlib.h>

int main() {

  int choice;

  printf("\n");
  printf("** Digite 1 para calcular IMC ou 2 para calcular velocidade média pedalada: ");
  scanf("%d", &choice);

  switch (choice) {

    float weight, height, distance, time;

    case 1:
      printf("Informe teu peso: ");
      scanf("%f", &weight);

      printf("Informe tua altura: ");
      scanf("%f", &height);

      float result = weight / (height * height);
      printf("** Seu IMC é: %.2f\n", result);

    break;

    case 2:  
      printf("Informe a distância percorrida em KM: ");
      scanf("%f", &distance);

      printf("Informe o tempo percorrido em horas: ");
      scanf("%f", &time);

      float speed = distance / time;
      printf("** Sua velocidade média pedalada foi: %.2f KM/h\n", speed);
    break;

    default:
    printf("OPÇÃO INVÁLIDA!\n");
    return 0;
  }
}