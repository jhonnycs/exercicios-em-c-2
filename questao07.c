#include <stdio.h>

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
        salario = salario * 1.5;
        break;
    case 2:
        salario = salario * 1.3;
        break;
    default:
        salario = salario * 1.2;
        break;
    }

    printf("\nApós o aumento, o salário será de R$ %.2f", salario);

    return 0;
}