#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino ou F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
        printf("O peso ideal para um homem com altura %.2f metros e de %.2f kg\n", altura, pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
        printf("O peso ideal para uma mulher com altura %.2f metros e de %.2f kg\n", altura, pesoIdeal);
    } else {
        printf("Sexo invalido! Por favor, digite M para masculino ou F para feminino.\n");
    }

    return 0;
}
