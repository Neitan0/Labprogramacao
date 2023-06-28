#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char caractere;
    int contem = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            contem = 1;
            break;
        }
    }

    if (contem) {
        printf("A string contem o caractere fornecido.\n");
    } else {
        printf("A string nao contem o caractere fornecido.\n");
    }

    return 0;
}
