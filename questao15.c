#include <stdio.h>

int main() {
    int mes;

    printf("Digite um número entre 1 e 12 para saber o mês correspondente:\n> ");
    scanf("%d", &mes);
    
    while (mes < 1 || mes > 12) {
        printf("Não existe um mês com esse número. Digite um mês válido:\n> ");
        scanf("%d", &mes);
    }
    
    switch (mes) {
    case 1:
        printf("O mês %d é Janeiro", mes);
        break;
    case 2:
        printf("O mês %d é Fevereiro", mes);
        break;
    case 3:
        printf("O mês %d é Março", mes);
        break;
    case 4:
        printf("O mês %d é Abril", mes);
        break;
    case 5:
        printf("O mês %d é Maio", mes);
        break;
    case 6:
        printf("O mês %d é Junho", mes);
        break;
    case 7:
        printf("O mês %d é Julho", mes);
        break;
    case 8:
        printf("O mês %d é Agosto", mes);
        break;
    case 9:
        printf("O mês %d é Setembro", mes);
        break;
    case 10:
        printf("O mês %d é Outubro", mes);
        break;
    case 11:
        printf("O mês %d é Novembro", mes);
        break;
    case 12:
        printf("O mês %d é Dezembro", mes);
        break;
    }

    return 0;
}