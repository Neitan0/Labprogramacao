#include <stdio.h>

int main() {
    char string[100];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        contador++;
    }

    printf("A quantidade de caracteres da string fornecida: %d\n", contador);

    return 0;
}
