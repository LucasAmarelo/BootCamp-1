#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100], temp[100];

    //Entrada
    printf("Digite a primeira string:");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string:");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Digite a terceira string:");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';

    //Ordenação
    if (strcmp(str1, str2) > 0) { strcpy(temp, str1); strcpy(str1, str2); strcpy(str2, temp); }
    if (strcmp(str1, str3) > 0) { strcpy(temp, str1); strcpy(str1, str3); strcpy(str3, temp); }
    if (strcmp(str2, str3) > 0) { strcpy(temp, str2); strcpy(str2, str3); strcpy(str3, temp); }

    //Saída
    printf("\nStrings em ordem alfabetica:\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}

