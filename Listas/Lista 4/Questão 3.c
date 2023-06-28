#include <stdio.h>

int main() {
    int numero, menor;
    int *ptr_menor = NULL;
    
    printf("Digite um número (ou zero para sair): ");
    scanf("%d", &numero);
    
    if (numero != 0) {
        menor = numero;
        ptr_menor = &menor;
    }
    
    while (numero != 0) {
        printf("Digite um número (ou zero para sair): ");
        scanf("%d", &numero);
        
        if (numero != 0 && numero < *ptr_menor) {
            *ptr_menor = numero;
        }
    }
    
    if (ptr_menor != NULL) {
        printf("O menor número fornecido foi: %d\n", *ptr_menor);
    } else {
        printf("Nenhum número válido foi fornecido.\n");
    }
    
    return 0;
}
