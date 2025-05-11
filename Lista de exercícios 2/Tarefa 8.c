#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro nao negativo:");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o numero deve ser nao negativo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}
