#include <stdio.h>

int main() {
    int primeiroTermo, razao, n, i, termo;


    printf("Digite o primeiro termo da PA:");
    scanf("%d", &primeiroTermo);
    printf("Digite a razao da PA:");
    scanf("%d", &razao);
    printf("Digite o numero de termos (n) que deseja mostrar:");
    scanf("%d", &n);


    printf("Os %d primeiros termos da PA sao:\n", n);
    for (i = 0; i < n; i++) {
        termo = primeiroTermo + i * razao;
        printf("%d ", termo);
    }

    printf("\n");

    return 0;
}
