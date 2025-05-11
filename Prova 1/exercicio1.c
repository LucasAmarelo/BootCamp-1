#include <stdio.h>

int main() {
    int anoNascimento, idade2025, ano50;

    printf("Digite seu ano de nascimento:");
    scanf("%d", &anoNascimento);


    idade2025 = 2025 - anoNascimento;
    ano50 = anoNascimento + 50;

    printf("Sua idade em 2025 sera: %d anos.\n", idade2025);
    printf("O ano em que voce vai fazer 50 anos e: %d.\n", ano50);

    return 0;
}

