#include <stdio.h>

int main() {
    int i, num;
    double media = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        printf("Metade do número: %d\n", num / 2);
        media += num;
    }

    media /= 10;
    printf("Média dos números: %.2lf", media);

    return 0;
}
