#include <stdio.h>

int main() {
    float valor;
    int parcelas;

    printf("Digite o valor à vista da sua compra:\n> ");
    scanf("%f", &valor);

    while (valor <= 0) {
        printf("Digite um valor válido:\n> ");
        scanf("%f", &valor);
    }
    
    printf("Digite o número de parcelas (1, 2 ou 3):\n> ");
    scanf("%d", &parcelas);

    if (parcelas < 1) {
        parcelas = 1;
    } else if (parcelas > 3) {
        parcelas = 3;
    }

    switch (parcelas) {
    case 2:
        valor = valor * 1.1;
        break;
    case 3:
        valor = valor * 1.2;
        break;
    }

    float valorParcela = valor / parcelas;

    printf("\nO número de parcelas é %d", parcelas);
    printf("\nO valor de cada parcela é R$ %.2f", valorParcela);
    printf("\nO valor total a pagar é R$ %.2f", valor);

    return 0;
}