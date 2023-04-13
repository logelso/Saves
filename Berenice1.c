#include <stdio.h>
#include <stdlib.h>


int main()
{
    //variaveis inteiras
    int codigo, quantidade, pagamento, parcelas;
    //variaveis flutuantes(numeros quebrados)
    float valor_unitario, valor_total, desconto, acrescimo, valor_final, recebido, troco;

    //lista de itens
    printf("------------------------------------------ \n");
    printf("|             LISTA DE ITENS             | \n");
    printf("|----------------------------------------| \n");
    printf("| Codigo | Nome do item | Valor  unidade | \n");
    printf("|----------------------------------------| \n");
    printf("|   1    | Pao de forma |    R$ 7,50     | \n");
    printf("|   2    |Pao de centeio|    R$ 8,69     | \n");
    printf("|   3    |Broa de milho |    R$ 5,00     | \n");
    printf("|   4    |    Sonho     |    R$ 4,50     | \n");
    printf("|   5    |   Tubaina    |    R$ 3,25     | \n");
    printf("|----------------------------------------| \n\n");
    printf("\nDigite o codigo do item desejado: ");
    //le dados de entrada do usuario
    scanf("%i", &codigo);
    //ignora o proximo ENTER pressionado
    getchar();
    
    if(codigo <1 || codigo >5){
        printf("Codigo invalido\n");
    }else{
   //leitura do codigo de item desejado
   //permite escolher varias opcoes(forma eficiente de substituir o if-else em situacoes de multiplas escolhas)
    switch(codigo){
        case 1:
            valor_unitario = 7.50;
            //sai do switch e continua na sintaxe abaixo
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
            printf("Digite um codigo valido!\n");
            //finaliza o codigo
            return 0;
    }
    //quantidade de itens desejada e valor total
    printf("\nDigite a quantidade desejada: ");
    scanf("%i", &quantidade);

    valor_total = valor_unitario*quantidade;

    printf("Valor total do pedido: R$ %.2f\n", valor_total);

    //formas de pagamento, desconto e acrescimo

    printf("\nDigite a forma de pagamento:\n");
    printf("1 - A vista\n");
    printf("2 - A prazo\n");
    printf("\n: ");
    scanf("%i", &pagamento);

    if(pagamento ==1){
    //desconto
        if(valor_total <= 50.00){
            desconto = valor_total * 0.05;
        }else if(valor_total > 50.00){
            desconto = valor_total * 0.10;
        }else if(valor_total >= 100.00){
            desconto = valor_total * 0.18;
        }
        valor_final = valor_total - desconto;
        printf("Valor total com desconto: R$ %.2f\n", valor_final);
    }else if(pagamento==2){
        printf("Quantidade de parcelas:\n");
        printf("1 \n");
        printf("2 \n");
        printf("3 \n");
        printf("4 \n");
        printf("5 \n");
        printf("6 \n");
        printf("7 \n");
        printf("8 \n");
        printf("\nDigite a quantidade de parcelas: ");
        scanf("%i", &parcelas);
    //acrescimo
        if(parcelas <=3){
            acrescimo = valor_total * 0.05;
        }else{
            acrescimo = valor_total *0.08;
        }
        valor_final = acrescimo + valor_total;
        printf("Valor total com acrescimo: R$ %.2f", valor_final);

    }
    //troco
    printf("\nDigite o valor recebido: ");
    scanf("%f", &recebido);

    troco = recebido - valor_final;
    printf("Troco a ser devolvido: R$ %.2f\n", troco);

    }
    return 0;
}
