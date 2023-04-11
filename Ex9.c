#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 20

struct Pessoa {
    char nome[100];
    int idade;
    char sexo;
};

int main() {
    struct Pessoa pessoas[MAX_PESSOAS];

    // Lendo os dados das 20 pessoas
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(pessoas[i].nome, 100, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0; // removendo o \n do final da string

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o sexo da pessoa %d (M ou F): ", i+1);
        scanf(" %c", &pessoas[i].sexo);

        getchar(); // limpa o buffer do teclado
    }

    printf("\nAs pessoas do sexo masculino com mais de 21 anos sao:\n");

    // Imprimindo o nome das pessoas do sexo masculino com mais de 21 anos
    for (int i = 0; i < MAX_PESSOAS; i++) {
        if (pessoas[i].sexo == 'M' && pessoas[i].idade > 21) {
            printf("%s\n", pessoas[i].nome);
        }
    }

    return 0;
}
