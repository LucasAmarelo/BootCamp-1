#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double soma = 0, media, somaQuadrados = 0, desvioPadrao;

    printf("Digite o numero de provas (n):");
    scanf("%d", &n);

    double notas[n];

    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d:", i+1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }

    media = soma / n;

    for (int i = 0; i < n; i++) {
        somaQuadrados += pow(notas[i] - media, 2);
    }

    desvioPadrao = sqrt(somaQuadrados / n);

    printf("\nMedia das notas: %.2f\n", media);
    printf("Desvio padrao das notas: %.2f\n", desvioPadrao);

    return 0;
}

