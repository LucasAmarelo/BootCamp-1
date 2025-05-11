#include <stdio.h>

int main() {
    float preco_original, desconto, preco_com_desconto;

    //Entrada
    printf("Digite o preco original do produto:R$ ");
    scanf("%f", &preco_original);

    //Cálculo do desconto
    desconto = preco_original * 0.20;
    preco_com_desconto = preco_original - desconto;

    //Saída
    printf("\n=== TABELA DE DESCONTO ===\n");
    printf("Preco original:R$ %.2f\n", preco_original);
    printf("Voce ganhou R$%.2f de desconto.\n", desconto);
    printf("Preco com desconto:R$ %.2f\n", preco_com_desconto);

    return 0;
}

