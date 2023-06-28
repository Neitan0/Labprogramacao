#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso incorreto. Digite: programa <valor1> <valor2> <codigo_operacao>\n");
        return 1;
    }
    
    int valor1 = atoi(argv[1]);
    int valor2 = atoi(argv[2]);
    int codigo_operacao = atoi(argv[3]);
    int resultado;
    
    switch (codigo_operacao) {
        case 0:
            resultado = valor1 + valor2;
            printf("Resultado da soma: %d\n", resultado);
            break;
        case 1:
            resultado = valor1 * valor2;
            printf("Resultado da multiplicação: %d\n", resultado);
            break;
        default:
            printf("Código de operação inválido. Use 0 para soma ou 1 para multiplicação.\n");
            return 1;
    }
    
    return 0;
}
