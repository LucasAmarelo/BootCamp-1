#include <stdio.h>

int main() {
    float x1, x2, x3, media;

    //Entradas
    printf("Digite o primeiro valor:");
    scanf("%f", &x1);

    printf("Digite o segundo valor:");
    scanf("%f", &x2);

    printf("Digite o terceiro valor:");
    scanf("%f", &x3);

    //C�lculo da m�dia
    media = (x1 + x2 + x3) / 3;

    //Sa�da
    printf("A media aritmetica dos tres valores e:%.2f\n", media);

    return 0;
}
