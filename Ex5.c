#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char cidade[50];
    double salario;
} InfoViuvo;

typedef struct {
    int qtd_filhos;
    int idade_maior_filho;
} InfoDivorciado;

typedef struct {
    char sexo[10];
    char nome_conjuge[50];
} InfoCasado;

int main() {
    char opcao[15];
    printf("Informe sua situacao civil: ");
    scanf("%s", opcao);

    if (strcmp(opcao, "Solteiro") == 0 || strcmp(opcao, "solteiro") == 0 || strcmp(opcao, "SOLTEIRO") == 0) {
        int idade;
        printf("Informe a sua idade: ");
        scanf("%d", &idade);
        printf("Situacao civil: %s\nIdade: %d anos\n", opcao, idade);
    } else if (strcmp(opcao, "Casado") == 0 || strcmp(opcao, "casado") == 0 || strcmp(opcao, "CASADO") == 0) {
        InfoCasado casado;
        printf("Informe o sexo do cônjuge: ");
        scanf("%s", casado.sexo);
        printf("Informe o nome do cônjuge: ");
        scanf("%s", casado.nome_conjuge);
        printf("Situacao civil: %s\nSexo do cônjuge: %s\nNome do cônjuge: %s\n", opcao, casado.sexo, casado.nome_conjuge);
    } else if (strcmp(opcao, "Divorciado") == 0 || strcmp(opcao, "divorciado") == 0 || strcmp(opcao, "DIVORCIADO") == 0) {
        InfoDivorciado divorciado;
        printf("Informe a quantidade de filhos: ");
        scanf("%d", &divorciado.qtd_filhos);
        if (divorciado.qtd_filhos > 0) {
            printf("Informe a idade do filho mais velho: ");
            scanf("%d", &divorciado.idade_maior_filho);
        } else {
            divorciado.idade_maior_filho = 0;
        }
        printf("Situacao civil: %s\nQuantidade de filhos: %d\nIdade do filho mais velho: %d anos\n", opcao, divorciado.qtd_filhos, divorciado.idade_maior_filho);
    } else if (strcmp(opcao, "Viúvo") == 0 || strcmp(opcao, "viuvo") == 0 || strcmp(opcao, "VIÚVO") == 0) {
        InfoViuvo viuvo;
        printf("Informe a cidade onde vive: ");
        scanf("%s", viuvo.cidade);
        printf("Informe o salário atual: ");
        scanf("%lf", &viuvo.salario);
        printf("Situacao civil: %s\nCidade onde vive: %s\nSalário atual: R$ %.2lf\n", opcao, viuvo.cidade, viuvo.salario);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
