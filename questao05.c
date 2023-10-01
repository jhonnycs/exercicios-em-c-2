#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro:\n> ");
    scanf("%d", &n);

    if (n % 10 == 0) {
        printf("\nO número %d é divisível por 10", n);
    }
    if (n % 5 == 0) {
        printf("\nO número %d é divisível por 5", n);
    }
    if (n % 2 == 0) {
        printf("\nO número %d é divisível por 2", n);
    }
    

    if (n % 10 != 0 && n % 5 != 0 && n % 2 != 0) {
        printf("\nO número %d não é divisível por nenhuma das opções (2, 5, 10)", n);
    }

    return 0;
}