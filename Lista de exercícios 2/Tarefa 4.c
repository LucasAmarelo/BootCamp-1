#include <stdio.h>

int main() {
    float orcamento, valorServico, soma = 0;
    int numeroServico = 1;

    //Entrada de orçamento válido (>= 100.00)
    do {
        printf("Digite o valor total do orcamento (minimo R$100.00): R$ ");
        scanf("%f", &orcamento);
        if (orcamento < 100.00) {
            printf("Orcamento invalido! Tente novamente.\n");
        }
    } while (orcamento < 100.00);

    printf("\nDigite os valores dos servicos:\n");

    //Entrada de valores dos serviços compatíveis ao orçamento
    while (1) {
        printf("Servico %d: R$ ", numeroServico);
        scanf("%f", &valorServico);

        if (soma + valorServico > orcamento) {
            printf("\nServico nao adicionado. Orçamento estourado.\n");
            break;
        }

        soma += valorServico;
        printf("Servico %d adicionado com sucesso.\n", numeroServico);
        numeroServico++;

        if (soma == orcamento) {
            printf("\nOrcamento esgotado.\n");
            break;
        }
    }

    //Saída
    printf("\nResumo:\n");
    printf("Total utilizado: R$ %.2f\n", soma);
    printf("Orcamento restante: R$ %.2f\n", orcamento - soma);
    printf("Nenhum outro servico pode ser adicionado.\n");

    return 0;
}

