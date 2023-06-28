#include <stdio.h>

#define VALOR_DIARIO 50.25
#define GRATIFICACAO_10_DIAS 0.0
#define GRATIFICACAO_20_DIAS 0.2
#define GRATIFICACAO_30_DIAS 0.3
#define IMPOSTO_RENDA 0.1

int main() {
    int diasTrabalhados;
    float valorBruto, valorGratificacao, valorImposto, valorLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    valorBruto = diasTrabalhados * VALOR_DIARIO;

    if (diasTrabalhados <= 10) {
        valorGratificacao = GRATIFICACAO_10_DIAS * valorBruto;
    } else if (diasTrabalhados <= 20) {
        valorGratificacao = GRATIFICACAO_20_DIAS * valorBruto;
    } else {
        valorGratificacao = GRATIFICACAO_30_DIAS * valorBruto;
    }

    valorImposto = IMPOSTO_RENDA * (valorBruto + valorGratificacao);
    valorLiquido = valorBruto + valorGratificacao - valorImposto;

    printf("Valor liquido a ser pago ao vendedor: R$ %.2f\n", valorLiquido);

    return 0;
}
