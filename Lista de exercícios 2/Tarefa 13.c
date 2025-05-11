#include <stdio.h>

int main() {
    int razao, quartoTermo, n, i, primeiroTermo;
    long long soma = 0;

    // Entrada
    printf("Digite a razao da PA:");
    scanf("%d", &razao);
    printf("Digite o quarto termo da PA:");
    scanf("%d", &quartoTermo);
    printf("Digite o numero de termos (n) que deseja somar:");
    scanf("%d", &n);

    primeiroTermo = quartoTermo - 3 * razao;

    soma = 0;
    for (i = 0; i < n; i++) {
        soma += primeiroTermo + i * razao;
    }

    //Exibição da soma
    printf("A soma dos %d primeiros termos da PA e:%lld\n", n, soma);

    return 0;
}
