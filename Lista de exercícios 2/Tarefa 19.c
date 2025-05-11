#include <stdio.h>

void imprimirBinario(int numero) {
    if (numero > 1) {
        imprimirBinario(numero / 2);
    }
    printf("%d", numero % 2);
}

int main() {
    int numero;


    printf("Digite um numero inteiro positivo:");
    scanf("%d", &numero);


    if (numero < 0) {
        printf("Por favor, digite um numero positivo!\n");
        return 1;
    }

    printf("O numero %d em binario e:", numero);
    imprimirBinario(numero);
    printf("\n");

    return 0;
}

