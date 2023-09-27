#include <stdio.h>

int main() {
    float salario, financiamentoPret;

    printf("Digite o seu salário:\n> ");
    scanf("%f", &salario);

    while (salario <= 0) {
        printf("Digite um salário válido:\n> ");
        scanf("%f", &salario);
    }
    
    printf("Digite o financiamento pretendido:\n> ");
    scanf("%f", &financiamentoPret);

    while (financiamentoPret <= 0) {
        printf("Digite um financiamento válido:\n> ");
        scanf("%f", &financiamentoPret);
    }

    if (financiamentoPret <= 5*salario) {
        printf("\nFinanciamento concedido\n");
    } else {
        float salarioConjuge;

        printf("\nDigite o salário do seu conjuge:\n> ");
        scanf("%f", &salarioConjuge);
        
        while (salarioConjuge <= 0) {
            printf("Digite um salário válido:\n> ");
            scanf("%f", salarioConjuge);
        }

        if (financiamentoPret <= 5*(salario + salarioConjuge)) {
            printf("\nFinanciamento concedido\n");
        } else {
            printf("\nFinanciamento negado\n");
        }
    }
    printf("\nObrigado por nos consultar.");

    return 0;
}