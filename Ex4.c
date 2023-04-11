#include <stdio.h>

int main() {
    int qtd_itens, regiao_entrega;
    float valor_compra, valor_frete, total_compra;

    printf("Informe a quantidade de itens que deseja comprar (maximo 100): ");
    scanf("%d", &qtd_itens);

    valor_compra = qtd_itens * 5.00;

    printf("Informe a regiao de entrega (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao_entrega);

    switch(regiao_entrega) {
        case 1:
            valor_frete = valor_compra * 0.10;
            break;
        case 2:
            valor_frete = valor_compra * 0.08;
            break;
        case 3:
            valor_frete = valor_compra * 0.12;
            break;
        case 4:
            valor_frete = valor_compra * 0.15;
            break;
        case 5:
            valor_frete = valor_compra * 0.11;
            break;
        default:
            valor_frete = 0.0;
            printf("Regiao invalida. Frete sera calculado como zero.\n");
    }

    total_compra = valor_compra + valor_frete;

    printf("Valor total da compra: R$ %.2f\n", valor_compra);
    printf("Valor do frete: R$ %.2f\n", valor_frete);
    printf("Valor total a pagar: R$ %.2f\n", total_compra);

    return 0;
}
