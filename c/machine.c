#include <stdio.h>
#include <unistd.h>

int main() {
  int choice;

  printf("Escolha: **********************************************\n");
  printf("1 - Lavar rápido | 2 - Lavar direito | 3 - Lavar super \n");
  printf("*******************************************************\n");
  scanf("%d", &choice); 

  printf("Módulo %d selecionado\n", choice);
  sleep(2); //Delay de 2 milissegundos 

  printf("Inicinado lavagem ");
  for( int i = 1; i <= 3; i++ ) {
    printf(". "); 
    sleep(1);
    fflush(stdout);
  }
  printf("\n");
    
  printf("\nAdicionando água ");
  for( int i = 1; i <= 5; i++ ) {
    printf("> "); 
    sleep(1);
    fflush(stdout);
  }

  printf("\nLavando a roupa ");
  for( int i = 1; i <= 5; i++ ) {
    printf("> "); 
    sleep(1);
    fflush(stdout);
  }

  printf("\nEnxaguando ");
  for( int i = 1; i <= 5; i++ ) {
    printf("> "); 
    sleep(1);
    fflush(stdout);
  }

  printf("\nJogando água fora ");
  for( int i = 1; i <= 5; i++ ) {
    printf("> "); 
    sleep(1);
    fflush(stdout);
  }

  printf("\nCentrifugando ");
  for( int i = 1; i <= 5; i++ ) {
    printf("> "); 
    sleep(1);
    fflush(stdout);
  }
  printf("\n");
  printf("\n");
  printf("\n*** Processo Finalizado! *** \n");
} //end main