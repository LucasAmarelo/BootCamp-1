#include <stdio.h>

int main() {
    int numero;
    int positivos = 0, negativos = 0;


    while (1) {
        printf("Digite um numero (digite 0 para parar):");
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


    printf("\nQuantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);

    if (positivos > negativos) {
        printf("Ha mais numeros positivos.\n");
    } else if (negativos > positivos) {
        printf("Ha mais numeros negativos.\n");
    } else {
        printf("Ha a mesma quantidade de numeros positivos e negativos.\n");
    }

    return 0;
}

