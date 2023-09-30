#include <stdio.h>

int main() {
    int n1, n2;
    char op;

    printf("Digite o primeiro número:\n> ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número:\n> ");
    scanf("%d", &n2);
    
    printf("Digite a operação (+, -, *, /):\n> ");
    scanf(" %c", &op);

    while (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("Digite uma operação válida (+, -, *, /):\n> ");
        scanf(" %c", &op);
    }
    int result;
    switch (op) {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        if (n2 == 0) {
            printf("\nNão é possível dividir por 0");
            return 0;
        }
        result = n1 / n2;
        break;
    }

    printf("\n%d %c %d = %d", n1, op, n2, result);
    
    return 0;
}