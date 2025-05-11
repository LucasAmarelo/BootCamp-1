#include <stdio.h>
#include <math.h>

int main() {
    double depositoMensal, taxaJuros, montante, jurosMensais, totalDeposito = 0;
    int meses;

    printf("Digite o valor do deposito mensal:");
    scanf("%lf", &depositoMensal);
    printf("Digite a taxa de juros mensal (em porcentagem):");
    scanf("%lf", &taxaJuros);
    printf("Digite o numero de meses (n):");
    scanf("%d", &meses);

    taxaJuros /= 100;


    montante = depositoMensal * ((pow(1 + taxaJuros, meses) - 1) / taxaJuros);

    printf("\nEvolucao do montante e dos juros a cada mes:\n");
    for (int i = 1; i <= meses; i++) {
        totalDeposito = depositoMensal * i;
        jurosMensais = depositoMensal * ((pow(1 + taxaJuros, i) - 1) / taxaJuros) - totalDeposito;
        printf("Mes %d: Montante = R$ %.2f, Juros = R$ %.2f\n", i, totalDeposito + jurosMensais, jurosMensais);
    }


    printf("\nMontante final apos %d meses: R$ %.2f\n", meses, montante);

    return 0;
}

