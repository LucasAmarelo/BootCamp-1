#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um valor maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("Valor inválido. O número deve ser maior que 5.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || i == n - 1) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
