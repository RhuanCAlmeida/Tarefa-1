#include <stdio.h>

int main() {
    int n, i, num, maior;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    // Lê o primeiro número e inicializa a variável 'maior'
    printf("Digite o primeiro numero: ");
    scanf("%d", &maior);

    for(i = 2; i <= n; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);

        // Verifica se o número atual é maior que o armazenado na variável 'maior'
        if(num > maior) {
            maior = num;
        }
    }

    printf("O maior numero digitado foi: %d", maior);

    return 0;
}
