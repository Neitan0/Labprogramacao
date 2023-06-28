#include <stdio.h>

int main() {
    int num1, num2, soma;
    int *ptr_soma;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    ptr_soma = &soma;  // Ponteiro apontando para a variável soma
    
    *ptr_soma = num1 + num2;  // Soma dos números usando o ponteiro
    
    printf("A soma dos números é: %d\n", soma);
    printf("Endereço de memória do resultado: %p\n", &soma);
    
    return 0;
}
