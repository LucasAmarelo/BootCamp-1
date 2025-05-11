#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    printf("Digite numeros inteiros (Use um numero negativo se deseja parar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        soma += numero;
        contador++;
    }

    if (contador == 0) {
        printf("Nenhum numero valido foi digitado.\n");
    } else {
        media = (float)soma / contador;
        printf("Media dos %d numeros digitados: %.2f\n", contador, media);
    }

    return 0;
}

