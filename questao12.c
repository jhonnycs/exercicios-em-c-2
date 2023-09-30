#include <stdio.h>
#define TIPO_A 'A'
#define TIPO_B 'B'
#define TIPO_C 'C'
#define TIPO_D 'D'

#define VALOR_TIPO_A 150
#define VALOR_TIPO_B 100
#define VALOR_TIPO_C 75
#define VALOR_TIPO_D 175

int main() {
    char tipo;
    int diarias;
    float consumoInterno;

    printf("Digite o tipo de apartamento (A, B, C ou D):\n> ");
    scanf(" %c", &tipo);

    while (tipo != TIPO_A && tipo != TIPO_B && tipo != TIPO_C && tipo != TIPO_D) {
        printf("Digite um tipo de apartamento válido:\n> ");
        scanf(" %c", &tipo);
    }
    
    printf("Digite o número de diárias do hóspede:\n> ");
    scanf("%d", &diarias);

    while (diarias <= 0) {
        printf("Digite um número válido de diárias:\n> ");
        scanf("%d", &diarias);
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
    case TIPO_A:
        valorUnitarioDiaria = VALOR_TIPO_A;
        valorDiarias = VALOR_TIPO_A * diarias;
        break;
    case TIPO_B:
        valorUnitarioDiaria = VALOR_TIPO_B;
        valorDiarias = VALOR_TIPO_B * diarias;
        break;
    case TIPO_C:
        valorUnitarioDiaria = VALOR_TIPO_C;
        valorDiarias = VALOR_TIPO_C * diarias;
        break;
    case TIPO_D:
        valorUnitarioDiaria = VALOR_TIPO_D;
        valorDiarias = VALOR_TIPO_D * diarias;
        break;
    }

    float subTotal = valorDiarias + consumoInterno;
    float taxaServico = subTotal * 0.1;
    float total = subTotal + taxaServico;

    printf("\nTipo de apartamento: %c", tipo);
    printf("\nNúmero de diárias: %d", diarias);
    printf("\nValor unitário da diária: R$ %.2f", valorUnitarioDiaria);
    printf("\nValor total das diárias: R$ %.2f", valorDiarias);
    printf("\nValor do consumo interno: R$ %.2f", consumoInterno);
    printf("\nSubtotal: R$ %.2f", subTotal);
    printf("\nValor da taxa de serviço: R$ %.2f", taxaServico);
    printf("\nTotal: R$ %.2f", total);

    return 0;
}