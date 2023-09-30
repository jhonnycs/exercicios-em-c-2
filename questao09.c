#include <stdio.h>

int main() {
    float media;
    
    printf("Digite média do aluno:\n> ");
    scanf("%f", &media);

    while (media < 0) {
        printf("Digite uma média válida:\n> ");
        scanf("%f", &media);
    }

    if (media >= 6) {
        printf("\nAprovado");
    } else {
        printf("\nReprovado");
    }
    
    return 0;
}