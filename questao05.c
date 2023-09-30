#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro:\n> ");
    scanf("%d", &n);

    if (n % 10 == 0) {
        printf("\nO número é divisível por 10");
    } else if (n % 5 == 0) {
        printf("\nO número é divisível por 5");
    } else if (n % 2 == 0) {
        printf("\nO número é divisível por 2");
    } else {
        printf("\nO número não é divisível por nenhuma das opções (2, 5, 10)");
    }

    return 0;
}