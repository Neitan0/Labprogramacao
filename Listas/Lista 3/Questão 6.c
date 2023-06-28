#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    int tamanho = strlen(string);

    printf("String na forma inversa: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }

    return 0;
}
