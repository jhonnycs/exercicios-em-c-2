#include <stdio.h>
#define PRECO_APARTAMENTO 350
#define TAXA_CAO 50
#define TAXA_PAPAGAIO 12
#define TAXA_GATO 30

int main() {
    int tipoAnimal;
    float precoAPagar;

    printf("Digite qual o tipo de animal que você tem:\n");
    printf("(1) Gato   (2) Papagaio   (3) Cão   (4) nenhum:\n> ");
    scanf("%d", &tipoAnimal);

    switch (tipoAnimal) {
    case 1:
        precoAPagar = PRECO_APARTAMENTO + TAXA_GATO;
        break;
    case 2:
        precoAPagar = PRECO_APARTAMENTO + TAXA_PAPAGAIO;
        break;
    case 3:
        precoAPagar = PRECO_APARTAMENTO + TAXA_CAO;
        break;
    default:
        precoAPagar = PRECO_APARTAMENTO - 20;
        break;
    }

    printf("\nO valor a pagar pelo apartamento é R$ %.2f", precoAPagar);

    return 0;
}