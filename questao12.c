#include <stdio.h>

int main() {
    char tipo;
    int QuantDiarias;
    float consumoInterno;

    printf("Digite o tipo de apartamento (A, B, C ou D):\n> ");
    scanf(" %c", &tipo);

    while (tipo != 'A' && tipo != 'B' && tipo != 'C' && tipo != 'D') {
        printf("Digite um tipo de apartamento válido:\n> ");
        scanf(" %c", &tipo);
    }
    
    printf("Digite o número de diárias do hóspede:\n> ");
    scanf("%d", &QuantDiarias);

    while (QuantDiarias <= 0) {
        printf("Digite um número válido de diárias:\n> ");
        scanf("%d", &QuantDiarias);
    }
    
    printf("Digite o valor do consumo interno do hóspede:\n> ");
    scanf("%f", &consumoInterno);

    while (consumoInterno < 0) {
        printf("Digite um valor válido de consumo:\n> ");
        scanf("%f", &consumoInterno);
    }

    float valorUnitarioDiaria;
    float valorDiarias;
    switch (tipo) {
    case 'A':
        valorUnitarioDiaria = 150;
        valorDiarias = valorUnitarioDiaria * QuantDiarias;
        break;
    case 'B':
        valorUnitarioDiaria = 100;
        valorDiarias = valorUnitarioDiaria * QuantDiarias;
        break;
    case 'C':
        valorUnitarioDiaria = 75;
        valorDiarias = valorUnitarioDiaria * QuantDiarias;
        break;
    case 'D':
        valorUnitarioDiaria = 175;
        valorDiarias = valorUnitarioDiaria * QuantDiarias;
        break;
    }

    float subTotal = valorDiarias + consumoInterno;
    float taxaServico = subTotal * 0.1;
    float total = subTotal + taxaServico;

    printf("\nTipo de apartamento: %c", tipo);
    printf("\nNúmero de diárias: %d", QuantDiarias);
    printf("\nValor unitário da diária: R$ %.2f", valorUnitarioDiaria);
    printf("\nValor total das diárias: R$ %.2f", valorDiarias);
    printf("\nValor do consumo interno: R$ %.2f", consumoInterno);
    printf("\nSubtotal: R$ %.2f", subTotal);
    printf("\nValor da taxa de serviço: R$ %.2f", taxaServico);
    printf("\nTotal: R$ %.2f", total);

    return 0;
}