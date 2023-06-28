#include <stdio.h>

int main() {
    float vetor[15];
    float menor, maior, soma = 0;

    printf("Digite 15 elementos do vetor:\n");
    for (int i = 0; i < 15; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%f", &vetor[i]);
        
        if (i == 0) {
            menor = vetor[i];
            maior = vetor[i];
        } else {
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
        }
        
        soma += vetor[i];
    }

    printf("Menor elemento: %.2f\n", menor);
    printf("Maior elemento: %.2f\n", maior);
    printf("Soma do menor e maior elemento: %.2f\n", menor + maior);

    return 0;
}
