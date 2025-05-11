#include <stdio.h>
#include <math.h>

int main() {
    int primeiroTermo, razao, n, i;
    double termo;

    printf("Digite o primeiro termo da PG:");
    scanf("%d", &primeiroTermo);
    printf("Digite a razao da PG:");
    scanf("%d", &razao);
    printf("Digite o numero de termos (n) que deseja mostrar:");
    scanf("%d", &n);

    printf("Os %d primeiros termos da PG sao:\n", n);
    for (i = 0; i < n; i++) {
        termo = primeiroTermo * pow(razao, i);
        printf("%.0f ", termo);
    }

    printf("\n");

    return 0;
}

