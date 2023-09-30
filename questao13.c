#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do aluno:\n> ");
    scanf("%d", &idade);

    while (idade <= 0) {
        printf("Digite uma idade válida:\n> ");
        scanf("%d", &idade);
    }

    if (idade >=4 && idade <=5) {
        printf("\nA criança terá aulas na turma A");
    } else if (idade >= 6 && idade <= 8) {
        printf("\nA criança terá aulas na turma B");
    } else if (idade >= 9 && idade <= 10) {
        printf("\nA criança terá aulas na turma C");
    } else {
        printf("\nA escola não tem turmas para a criança");
    }
    
    return 0;
}