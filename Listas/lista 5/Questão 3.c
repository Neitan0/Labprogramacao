#include <stdio.h>
#include <stdlib.h>

void encontrarExtremos(int *vetor, int tamanho, int **endereco_menor, int **endereco_maior) {
    *endereco_menor = vetor;
    *endereco_maior = vetor;
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < **endereco_menor) {
            *endereco_menor = &vetor[i];
        }
        
        if (vetor[i] > **endereco_maior) {
            *endereco_maior = &vetor[i];
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso incorreto. Digite: programa <tamanho_vetor>\n");
        return 1;
    }
    
    int tamanho = atoi(argv[1]);
    
    if (tamanho <= 0) {
        printf("Tamanho inválido. Digite um valor positivo.\n");
        return 1;
    }
    
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return 1;
    }
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int *endereco_menor;
    int *endereco_maior;
    
    encontrarExtremos(vetor, tamanho, &endereco_menor, &endereco_maior);
    
    printf("Endereço do menor elemento: %p\n", (void *) endereco_menor);
    printf("Endereço do maior elemento: %p\n", (void *) endereco_maior);
    
    free(vetor);
    
    return 0;
}
