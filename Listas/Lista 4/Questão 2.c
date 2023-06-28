#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);
    
    trocar(&num1, &num2);
    
    printf("Após a troca: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
