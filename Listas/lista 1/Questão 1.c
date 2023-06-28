#include <stdio.h>

int main() {
    int a = 7 + 3 * 6 / 2 - 1;
    printf("O valor de x e: %d\n", a);
    int b = 2 % 2 + 2 * 2 - 2 / 2;
    printf("O valor de x e: %d\n", b);
    int c = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("O valor de x e: %d\n", c);

    printf("\nOs valores sao: %d , %d , %d",a,b,c);

    return 0;
}
