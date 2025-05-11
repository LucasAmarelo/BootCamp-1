#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[20];

        printf("Digite seu primeiro nome:");
        scanf("%s", &nome);

        printf("Seu nome é %s.\n", nome);


    return 0;
}
