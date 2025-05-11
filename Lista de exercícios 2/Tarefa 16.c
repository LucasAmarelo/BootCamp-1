#include <stdio.h>
#include <math.h>

int main() {
    double capitalInicial, taxaJuros, montante;
    int meses;

    printf("Digite o valor presente (capital inicial):");
    scanf("%lf", &capitalInicial);
    printf("Digite a taxa de juros mensal (em porcentagem):");
    scanf("%lf", &taxaJuros);
    printf("Digite o numero de meses (n):");
    scanf("%d", &meses);

    taxaJuros /= 100;

    printf("\nEvolucao do montante a cada mes:\n");
    for (int i = 1; i <= meses; i++) {
        montante = capitalInicial * pow(1 + taxaJuros, i);
        printf("Mes %d: R$ %.2f\n", i, montante);
    }

    return 0;
}

