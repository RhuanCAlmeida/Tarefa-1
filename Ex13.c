#include <stdio.h>

int main() {
    int opcao, qtd_itens = 0;
    float valor, total_compra = 0, desconto, total_pagar;
    int qtd_itens_vendidos = 0;
    float total_vendas = 0;

    do {
        printf("Informe o valor unitario do produto: ");
        scanf("%f", &valor);
        
        if (valor > 0) {
            qtd_itens++;
            total_compra += valor;
        }
    } while (valor > 0);

    printf("\nQuantidade de itens comprados: %d\n", qtd_itens);
    printf("Valor total da compra: R$ %.2f\n", total_compra);

    if (total_compra > 0) {
        printf("\nOpcoes de pagamento:\n");
        printf("1. Dinheiro\n");
        printf("2. Cartao debito\n");
        printf("3. Cartao credito\n");
        printf("Escolha a opcao de pagamento: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            desconto = total_compra * 0.1;
            total_pagar = total_compra - desconto;
            printf("\nOpcao de pagamento escolhida: Dinheiro\n");
            printf("Percentual de desconto: 10%%\n");
            printf("Desconto obtido: R$ %.2f\n", desconto);
            printf("Total a pagar: R$ %.2f\n", total_pagar);
        } else if (opcao == 2) {
            desconto = total_compra * 0.05;
            total_pagar = total_compra - desconto;
            printf("\nOpcao de pagamento escolhida: Cartao debito\n");
            printf("Percentual de desconto: 5%%\n");
            printf("Desconto obtido: R$ %.2f\n", desconto);
            printf("Total a pagar: R$ %.2f\n", total_pagar);
        } else if (opcao == 3) {
            total_pagar = total_compra;
            printf("\nOpcao de pagamento escolhida: Cartao credito\n");
            printf("Total a pagar: R$ %.2f\n", total_pagar);
        }
    }

    qtd_itens_vendidos += qtd_itens;
    total_vendas += total_pagar;

    printf("\n---------------------------------\n\n");

    printf("Total de itens vendidos no dia: %d\n", qtd_itens_vendidos);
    printf("Total das vendas no dia: R$ %.2f\n", total_vendas);

    return 0;
}
