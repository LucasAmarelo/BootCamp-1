#include <stdio.h>

int main() {
    char sexo;
    float peso, altura, tmb;
    int idade;

    //Entrada de dados
    printf("Informe seu sexo (M para homem, F para mulher):");
    scanf(" %c", &sexo);

    printf("Informe seu peso (em kg):");
    scanf("%f", &peso);

    printf("Informe sua altura (em cm):");
    scanf("%f", &altura);

    printf("Informe sua idade (em anos):");
    scanf("%d", &idade);

    // Cálculo da TMB
    if (sexo == 'M' || sexo == 'm') {
        tmb = 66.47 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
    } else if (sexo == 'F' || sexo == 'f') {
        tmb = 655.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade);
    } else {
        printf("Sexo invalido! Use M para homem ou F para mulher.\n");
        return 1;
    }

    // Saída
    printf("\nSua Taxa Metabolica Basal (TMB) é: %.2f calorias por dia.\n", tmb);

    return 0;
}
