#include <stdio.h>

int main() {
    int a, b, c, temp;

    //Entrada
    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    //Ordena��o simples (troca de valores)
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    //Sa�da
    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}

