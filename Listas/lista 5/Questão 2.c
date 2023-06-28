#include <stdio.h>
#include <stdlib.h>

int *encontrarMenor(int *vetor, int tamanho) {
    int *menor = vetor;
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
    }
    
    return menor;
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
    
    int *menor = encontrarMenor(vetor, tamanho);
    
    printf("Endereço do menor elemento: %p\n", (void *) menor);
    
    free(vetor);
    
    return 0;
}
