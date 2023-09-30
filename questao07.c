#include <stdio.h>
#define AUM_TEC 1.5
#define AUM_GER 1.3
#define AUM_DEM 1.2

int main() {
    float salario;
    int funcao;

    printf("Digite o seu salário:\n> ");
    scanf("%f", &salario);

    while (salario <= 0) {
        printf("Digite um salário válido:\n> ");
        scanf("%f", &salario);
    }

    printf("Digite a sua função:\n");
    printf("(1) Técnico   (2) Gerente   (3) Demais funções\n> ");
    scanf("%d", &funcao);
    
    switch (funcao) {
    case 1:
        salario = salario * AUM_TEC;
        break;
    case 2:
        salario = salario * AUM_GER;
        break;
    case 3:
        salario = salario * AUM_DEM;
        break;
    default:
        salario = salario * AUM_DEM;
        break;
    }

    printf("\nApós o aumento, o salário será de R$ %.2f", salario);

    return 0;
}