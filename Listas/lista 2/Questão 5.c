#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, maior, menor;
    bool primeiroTermo = true;
    
    printf("Digite um valor (ou 0 para sair): ");
    scanf("%d", &n);

    maior = n;
    menor = n;

    while (n != 0) {
        if (n > maior) {
            maior = n;
        }
        
        if (n < menor) {
            menor = n;
        }

        primeiroTermo = false;

        printf("Digite um valor (ou 0 para sair): ");
        scanf("%d", &n);
    }

    if (primeiroTermo) {
        printf("Nenhum valor foi fornecido.\n");
    } else {
        printf("O maior termo fornecido foi: %d\n", maior);
        printf("O menor termo fornecido foi: %d\n", menor);
    }

    return 0;
}
