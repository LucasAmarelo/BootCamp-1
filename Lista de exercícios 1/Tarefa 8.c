#include <stdio.h>
#include <math.h>

int main() {
    float v1, v2, v3, v4;
    float media_aritmetica, media_geometrica, media_harmonica;

    //Entrada dos 4 valores
    printf("Digite 4 valores positivos:\n");
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);

    //Verificação simples
    if (v1 <= 0 || v2 <= 0 || v3 <= 0 || v4 <= 0) {
        printf("Todos os valores devem ser positivos.\n");
        return 1;
    }

    //Cálculos
    media_aritmetica = (v1 + v2 + v3 + v4) / 4;
    media_geometrica = pow(v1 * v2 * v3 * v4, 0.25);
    media_harmonica = 4 / ((1/v1) + (1/v2) + (1/v3) + (1/v4));

    //Saída
    printf("\n=== RESULTADOS ===\n");
    printf("Media Aritmetica:%.2f\n", media_aritmetica);
    printf("Media Geometrica:%.2f\n", media_geometrica);
    printf("Media Harmonica :%.2f\n", media_harmonica);

    return 0;
}

