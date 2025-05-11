#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite um numero inteiro positivo:");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    printf("Os %d primeiros numeros da sequencia de Fibonacci:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}

