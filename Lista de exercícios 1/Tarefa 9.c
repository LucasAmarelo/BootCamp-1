#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, x3, x4;
    float media, variancia, desvio;

    //Entrada
    printf("Digite 4 numeros reais:\n");
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);

    //Média
    media = (x1 + x2 + x3 + x4) / 4;

    //Variância
    variancia = (
        pow(x1 - media, 2) +
        pow(x2 - media, 2) +
        pow(x3 - media, 2) +
        pow(x4 - media, 2)
    ) / 4;

    //Desvio padrão
    desvio = sqrt(variancia);

    //Saída
    printf("\n=== RESULTADOS ===\n");
    printf("Media aritmetica:%.2f\n", media);
    printf("Variancia       :%.2f\n", variancia);
    printf("Desvio padrao   :%.2f\n", desvio);

    return 0;
}
