#include <stdio.h>

int main() {
    int x, y;

    printf("Digite dois numeros inteiros positivos (Formato: x e y): ");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0) {
        printf("Os numeros devem ser inteiros positivos.\n");
        return 1;
    }

    int a = x, b = y;
    int fator = 2;
    int mmc = 1, mdc = 1;
    int primeiro = 1;

    printf("\nEtapas do calculo do MMC:\n");
    printf("%-6s %-6s | %s\n", "x", "y", "fator");
    printf("----------------------\n");

    while (a > 1 || b > 1) {
        if (a % fator == 0 || b % fator == 0) {
            printf("%-6d %-6d | %-5d\n", a, b, fator);

            if (a % fator == 0) a /= fator;
            if (b % fator == 0) b /= fator;

            mmc *= fator;


            if (x % fator == 0 && y % fator == 0) {
                mdc *= fator;
                x /= fator;
                y /= fator;
            }
        } else {
            fator++;
        }
    }


    printf("%-6d %-6d\n", a, b);

    printf("\nO MMC vale %d\n", mmc);
    printf("O MDC vale %d\n", mdc);

    return 0;
}
