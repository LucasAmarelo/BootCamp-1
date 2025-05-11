#include <stdio.h>

int main() {
    float preco_original, porcentagem, desconto, preco_com_desconto;

    //Entradas
    printf("Digite o preco original do produto: R$");
    scanf("%f", &preco_original);

    printf("Digite a porcentagem de desconto (ex: 20 para 20%%):");
    scanf("%f", &porcentagem);

    //Cálculos
    desconto = preco_original * (porcentagem / 100);
    preco_com_desconto = preco_original - desconto;

    //Saída
    printf("\n=== TABELA DE DESCONTO ===\n");
    printf("Preco original:R$ %.2f\n", preco_original);
    printf("Voce ganhou R$%.2f de desconto.\n", desconto);
    printf("Preco com desconto:R$ %.2f\n", preco_com_desconto);

    return 0;
}

