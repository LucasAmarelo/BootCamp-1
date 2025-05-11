#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nTabuada de %d:\n", numero);
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}
