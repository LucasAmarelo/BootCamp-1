#include <stdio.h>

int main() {
    int num, i, ehPrimo = 1;

    //Entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);


    if (num < 2) {
        ehPrimo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    // Resultado
    if (ehPrimo) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}
