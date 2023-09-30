#include <stdio.h>

int main() {
    float valorCompra;
    
    printf("Digite o valor de compra:\n> ");
    scanf("%f", &valorCompra);

    while (valorCompra <= 0) {
        printf("Digite um valor de compra válido:\n> ");
        scanf("%f", &valorCompra);
    }

    float valorVenda;
    if (valorCompra < 20) {
        valorVenda = valorCompra * 1.45;
    } else {
        valorVenda = valorCompra * 1.3;
    }

    printf("\nO valor de venda será de R$ %.2f", valorVenda);

    return 0;
}