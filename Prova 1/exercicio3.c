#include <stdio.h>

int main() {
    char unidade;
    float temperatura, convertida;

    printf("Você quer converter de Celsius ou Fahrenheit? (C/F):");
    scanf(" %c", &unidade);

    if (unidade == 'C' || unidade == 'c') {

        printf("Digite a temperatura em Celsius:");
        scanf("%f", &temperatura);
        convertida = (temperatura * 9.0 / 5.0) + 32;
        printf("Temperatura em Fahrenheit: %.2fF\n", convertida);
    } else if (unidade == 'F' || unidade == 'f') {

        printf("Digite a temperatura em Fahrenheit:");
        scanf("%f", &temperatura);
        convertida = 5.0 * (temperatura - 32) / 9.0;
        printf("Temperatura em Celsius: %.2fC\n", convertida);
    } else {
        printf("Unidade inválida. Use 'C' para Celsius ou 'F' para Fahrenheit.\n");
    }

    return 0;
}

