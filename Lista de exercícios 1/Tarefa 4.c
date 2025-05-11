#include <stdio.h>

int main() {
    int dia_aniv, mes_aniv;
    int dia_atual, mes_atual;

int dias_do_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//Função que converte dia e mês em "dia do ano"
int dia_do_ano(int dia, int mes) {
    int soma = 0;
    for (int i = 0; i < mes - 1; i++) {
        soma += dias_do_mes[i];
    }
    return soma + dia;
}

    //Entrada do usuário
    printf("Digite o dia do seu aniversario:");
    scanf("%d", &dia_aniv);
    printf("Digite o mes do seu aniversario:");
    scanf("%d", &mes_aniv);

    printf("Digite o dia atual:");
    scanf("%d", &dia_atual);
    printf("Digite o mes atual:");
    scanf("%d", &mes_atual);

    //Converter datas para "dias do ano"
    int aniv_dia_do_ano = dia_do_ano(dia_aniv, mes_aniv);
    int atual_dia_do_ano = dia_do_ano(dia_atual, mes_atual);

    if (aniv_dia_do_ano == atual_dia_do_ano) {
        printf("Hoje e seu aniversario! Parabens!\n");
    } else if (aniv_dia_do_ano > atual_dia_do_ano) {
        printf("Faltam %d dias para o seu aniversario.\n", aniv_dia_do_ano - atual_dia_do_ano);
    } else {
        printf("Ja se passaram %d dias desde o seu aniversario.\n", atual_dia_do_ano - aniv_dia_do_ano);
    }

    return 0;
}
