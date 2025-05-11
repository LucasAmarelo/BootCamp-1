#include <stdio.h>
#include <math.h>

int main() {
    int razao, terceiroTermo, n, i;
    double primeiroTermo, termo, soma = 0;

    printf("Digite a razao da PG: ");
    scanf("%d", &razao);
    printf("Digite o terceiro termo da PG: ");
    scanf("%d", &terceiroTermo);
    printf("Digite o numero de termos (n) que deseja mostrar (maior que 3): ");
    scanf("%d", &n);

    if (n <= 3) {
        printf("O numero de termos deve ser maior que 3.\n");
        return 1;
    }

    primeiroTermo = terceiroTermo / pow(razao, 2);

    printf("Os %d primeiros termos da PG sao:\n", n);
    for (i = 0; i < n; i++) {
        termo = primeiroTermo * pow(razao, i);
        printf("%.0f ", termo);
        soma += termo;
    }

    printf("\nA soma dos %d primeiros termos da PG e: %.0f\n", n, soma);

    return 0;
}

