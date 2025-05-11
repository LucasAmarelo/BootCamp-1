#include <stdio.h>

int main() {
    int razao, terceiroTermo, n, i, primeiroTermo;

    //Entrada
    printf("Digite a razao da PA:");
    scanf("%d", &razao);
    printf("Digite o terceiro termo da PA:");
    scanf("%d", &terceiroTermo);
    printf("Digite o numero de termos (n) que deseja mostrar (maior que 3):");
    scanf("%d", &n);


    if (n <= 3) {
        printf("O numero de termos deve ser maior que 3.\n");
        return 1;
    }

    // Calcular o primeiro termo
    primeiroTermo = terceiroTermo - 2 * razao;

    //Cálculo e exibição dos n primeiros termos da PA
    printf("Os %d primeiros termos da PA sao:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", primeiroTermo + i * razao);
    }

    printf("\n");

    return 0;
}

