#include <stdio.h>

int main() {
    int A, B, C;
    char op;

    printf("Digite o valor de A:\n> ");
    scanf("%d", &A);
    printf("Digite o valor de B:\n> ");
    scanf("%d", &B);

    if (A == B) {
        C = A + B;
        op = '+';
    } else {
        C = A * B;
        op = 'x';
    }

    printf("\nO valor de %d %c %d é %d ", A, op, B, C);

    return 0;
}