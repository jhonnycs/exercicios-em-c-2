#include <stdio.h>

int main() {
    float peso, altura;
    char sexo;

    printf("Digite o peso:\n> ");
    scanf("%f", &peso);

    while (peso <= 0) {
        printf("Digite um peso válido:\n> ");
        scanf("%f", &peso);
    }

    printf("Digite a altura (em metros):\n> ");
    scanf("%f", &altura);

    while (altura <= 0) {
        printf("Digite uma altura válida:\n> ");
        scanf("%f", &altura);
    }
    
    printf("Digite o sexo (F ou M):\n> ");
    scanf(" %c", &sexo);

    while (sexo != 'M' && sexo != 'F') {
        printf("Digite um sexo válido (F ou M):\n> ");
        scanf(" %c", &sexo);
    }

    float imc = peso / (altura*altura);

    if (sexo == 'M') {
        if (imc < 19.1) {
            printf("\nSeu IMC é %.2f; você está abaixo do peso", imc);
        } else if (imc < 25.8) {
            printf("\nSeu IMC é %.2f; você está com peso normal", imc);
        } else if (imc < 27.3) {
            printf("\nSeu IMC é %.2f; você está marginalmente acima do peso", imc);
        } else if (imc <= 32.3) {
            printf("\nSeu IMC é %.2f; você está acima do peso ideal", imc);
        } else {
            printf("\nSeu IMC é %.2f; você está obeso", imc);
        }
    } else {
        if (imc < 20.7) {
            printf("\nSeu IMC é %.2f; você está abaixo do peso", imc);
        } else if (imc < 26.4) {
            printf("\nSeu IMC é %.2f; você está com peso normal", imc);
        } else if (imc < 27.8) {
            printf("\nSeu IMC é %.2f; você está marginalmente acima do peso", imc);
        } else if (imc <= 31.1) {
            printf("\nSeu IMC é %.2f; você está acima do peso ideal", imc);
        } else {
            printf("\nSeu IMC é %.2f; você está obeso", imc);
        }
    }

    return 0;
}