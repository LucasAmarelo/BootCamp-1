#include <stdio.h>

int main() {
    int num1, num2, num3;

    //Entrada dos n�meros
    printf("Digite o primeiro numero:");
    scanf("%d", &num1);

    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    printf("Digite o terceiro numero:");
    scanf("%d", &num3);

    //Comparando os n�meros para achar o maior
    if (num1 >= num2 && num1 >= num3) {
        printf("O maior numero e:%d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O maior numero e:%d\n", num2);
    } else {
        printf("O maior numero e:%d\n", num3);
    }

    return 0;
}

