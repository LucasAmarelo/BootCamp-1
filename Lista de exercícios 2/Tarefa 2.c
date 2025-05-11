#include <stdio.h>

int main() {
    int numero, positivos = 0, negativos = 0;

    printf("Digite numeros inteiros (Digite '0' para parar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    // Resultado
    printf("\nQuantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);

    return 0;
}

