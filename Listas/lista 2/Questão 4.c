#include <stdio.h>

int main() {
    int joseAltura = 150;
    int pedroAltura = 110;
    int anos = 0;

    while (joseAltura >= pedroAltura) {
        joseAltura += 2;
        pedroAltura += 3;
        anos++;
    }

    printf("Pedro sera maior que Jose em %d anos.\n", anos);

    return 0;
}
