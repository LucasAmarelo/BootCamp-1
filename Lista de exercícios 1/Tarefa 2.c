#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome [20];
    char sobrenome [20];

    printf("Digite seu primeiro nome:");
    scanf("%s", &nome);

    printf("Digite seu sobrenome:");
    scanf("%s", &sobrenome);

    printf("Seu nome é %s %s.\n", &nome, &sobrenome);


    return 0;
}
