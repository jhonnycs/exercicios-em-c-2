#include <stdio.h>

int main() {
    float salario;
    int desconto;
    
    printf("Digite o seu salário:\n> ");
    scanf("%f", &salario);

    while (salario <= 0) {
        printf("Digite um salário válido:\n> ");
        scanf("%f", &salario);
    }

    if (salario <= 600) {
        desconto = 0;
    } else if (salario <= 1200) {
        salario = 0.8 * salario;
        desconto = 20;
    } else if (salario <= 2000) {
        salario = 0.75 * salario;
        desconto = 25;
    } else {
        salario = 0.7 * salario;
        desconto = 30;
    }
    
    printf("O desconto foi de %d%%. O salário final é R$ %.2f", desconto, salario);

    return 0;
}