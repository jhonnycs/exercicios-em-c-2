#include <stdio.h>
#define PRECO_APARTAMENTO 350

int main() {
    int tipoAnimal;
    float taxa;

    printf("Digite qual o tipo de animal que você tem:\n");
    printf("(1) Gato   (2) Papagaio   (3) Cão   (Outro número) nenhum:\n> ");
    scanf("%d", &tipoAnimal);

    switch (tipoAnimal) {
    case 1:
        taxa = 30;
        break;
    case 2:
        taxa = 12;
        break;
    case 3:
        taxa = 50;
        break;
    default:
        taxa = -20;
        break;
    }

    float precoAPagar = PRECO_APARTAMENTO + taxa;

    printf("\nO valor a pagar pelo apartamento é R$ %.2f", precoAPagar);

    return 0;
}