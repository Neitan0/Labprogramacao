#include <stdio.h>

typedef struct {
    char nomePeca[100];
    int numeroPeca;
    float preco;
    int numeroPedido;
} Estoque;

int main() {
    Estoque estoque;

    printf("Digite o nome da peça: ");
    scanf("%s", estoque.nomePeca);

    printf("Digite o número da peça: ");
    scanf("%d", &estoque.numeroPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &estoque.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &estoque.numeroPedido);

    printf("\nInformações do estoque:\n");
    printf("Nome da peça: %s\n", estoque.nomePeca);
    printf("Número da peça: %d\n", estoque.numeroPeca);
    printf("Preço da peça: %.2f\n", estoque.preco);
    printf("Número do pedido: %d\n", estoque.numeroPedido);

    return 0;
}
