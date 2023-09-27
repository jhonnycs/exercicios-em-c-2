#include <stdio.h>
#include <time.h>

int main() {
    int anoNasc, numeroSorte;
    float valorCompra;

    time_t segundos = time(NULL); // função time retorna os segundos
    // atuais contados desde 1900, quando passamos null
    struct tm *data = localtime(&segundos);
    // a função localtime nesse caso joga em data o tempo atual (que está em segundos)
    // e dentro de data há várias variáveis separadas em ano, mês, dia, hora...
    int anoAtual = data->tm_year+1900;
    // a contagem começa em 1900. Assim, 1900 é o valor 0, e 2023 seria o valor 123.
    // Pra converter pro ano atual, precisamos adicionar 1900.

    printf("Digite o ano que você nasceu:\n> ");
    scanf("%d", &anoNasc);

    while (anoNasc <= 0 || anoNasc > anoAtual) {
        printf("Digite um ano de nascimento válido:\n> ");
        scanf("%d", &anoNasc);
    }

    printf("Digite o valor da compra:\n> ");
    scanf("%f", &valorCompra);

    while (valorCompra <= 0) {
        printf("Digite um valor de compra válido (positivo):\n> ");
        scanf("%f", &valorCompra);
    }

    

    int idade = anoAtual - anoNasc;
    if (valorCompra < 500) {
        numeroSorte = 5000 - valorCompra * idade;
    } else if (valorCompra > 500) {
        numeroSorte = 50000 - valorCompra * idade;
    } else {
        numeroSorte = idade * idade;
    }

    printf("\nO seu número da sorte é: %d", numeroSorte);

    return 0;
}