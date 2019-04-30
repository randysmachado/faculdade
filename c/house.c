#include <stdio.h>

int main() {
    char rua[50], bairro[50], numero[50], valor[50];

    sprintf(rua, "Rua: Nova Iguaçu");
    sprintf(bairro, "Bairro: Limeira");
    sprintf(numero, "Número: 34");
    sprintf(valor, "Valor: 100000");   

    printf("%s\n", rua);
    printf("%s\n", bairro);
    printf("%s\n", numero);
    printf("%s\n", valor);
}