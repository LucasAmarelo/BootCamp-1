#include <stdio.h>

int main() {
    int base, expoente, resultado = 1, i = 0;

    //Entrada
    printf("Digite a base (numero inteiro positivo): ");
    scanf("%d", &base);

    printf("Digite o expoente (numero inteiro positivo): ");
    scanf("%d", &expoente);

    if (base < 0 || expoente < 0) {
        printf("Erro: ambos os numeros devem ser inteiros positivos.\n");
        return 1;
    }

    while (i < expoente) {
        resultado *= base;
        i++;
    }

    // Saída
    printf("%d elevado a %d e igual a %d\n", base, expoente, resultado);

    return 0;
}

