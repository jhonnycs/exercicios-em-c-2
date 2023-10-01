#include <stdio.h>

int main() {
    float media;
    
    printf("Digite média do aluno:\n> ");
    scanf("%f", &media);

    while (media < 0) {
        printf("Digite uma média válida:\n> ");
        scanf("%f", &media);
    }

    if (media >= 9) {
        printf("\nAprovado, conceito A");
    } else if (media >= 7.5) {
        printf("\nAprovado, conceito B");
    } else if (media >= 6) {
        printf("\nAprovado, conceito C");
    } else if (media >= 4) {
        printf("\nReprovado, conceito D");
    } else {
        printf("\nReprovado, conceito E");
    }
    
    return 0;
}