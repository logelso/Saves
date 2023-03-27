#include <stdio.h>

int main() {

    int codigo, quantidade, opcao_pagamento, opcao_sair, quant_parcelas;
    float valor_unitario, valor_total, desconto, acrescimo, valor_final, valor_pago, troco;
    char resposta;

    do {

    printf("Selecione o item desejado: \n");
    printf("1 - Pao de Forma (R$ 7,50)\n");
    printf("2 - Pao de Centeio (R$ 8,69)\n");
    printf("3 - Broa de Milho (R$ 5,00)\n");
    printf("4 - Sonho (R$ 4,50)\n");
    printf("5 - Tubaina (R$ 3,25)\n");

    printf("\nDigite o codigo do item desejado: ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1:
            valor_unitario = 7.50;
            break;
        case 2:
            valor_unitario = 8.69;
            break;
        case 3:
            valor_unitario = 5.00;
            break;
        case 4:
            valor_unitario = 4.50;
            break;
        case 5:
            valor_unitario = 3.25;
            break;
        default:
            printf("Codigo inválido!\n");
            return 0;
    }

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    valor_total = valor_unitario * quantidade;

    printf("Valor total do pedido: R$ %.2f\n", valor_total);

    printf("\nOpcoes de pagamento:\n");
    printf("1 - A vista\n");
    printf("2 - A prazo\n");

    printf("\nDigite a opcao de pagamento: ");
    scanf("%d", &opcao_pagamento);

    if(opcao_pagamento == 1) {

        if(valor_total <= 50.00) {
            desconto = valor_total * 0.05;
        } else if(valor_total > 50.00 && valor_total < 100.00) {
            desconto = valor_total * 0.10;
        } else {
            desconto = valor_total * 0.18;
        }

        valor_final = valor_total - desconto;
        printf("Valor final com desconto: R$ %.2f\n", valor_final);

    } else if(opcao_pagamento == 2) {
        printf("Quantidade de parcelas:\n");
        printf("1 \n");
        printf("2 \n");
        printf("3 \n");
        printf("4 \n");
        printf("5 \n");
        printf("6 \n");
        printf("7 \n");
        printf("8 \n");
        printf("Digite a quantidade de parcelas: ");
        scanf("%d", &quantidade);

        if(quantidade <= 3) {
            acrescimo = valor_total * 0.05;
        } else {
            acrescimo = valor_total * 0.08;
        }

        valor_final = valor_total + acrescimo;
        printf("Valor final com acrescimo: R$ %.2f\n", valor_final);

    } else {
        printf("Opcao de pagamento inválida!\n");
        return 0;
    }

    printf("\nDigite o valor pago pelo cliente: R$ ");
    scanf("%f", &valor_pago);

    troco = valor_pago - valor_final;

    printf("Troco a ser devolvido: R$ %.2f\n", troco);


        printf("Deseja realizar outra compra (S/N):\n");
        scanf(" %c", &resposta);
    }while (resposta == "S" || resposta == "s" );


    return 0;
}
