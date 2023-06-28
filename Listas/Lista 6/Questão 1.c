#include <stdio.h>

typedef struct {
    float nota1;
    float nota2;
    float media;
} Aluno;

int main() {
    Aluno aluno;

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

    printf("Média do aluno: %.2f\n", aluno.media);

    return 0;
}
