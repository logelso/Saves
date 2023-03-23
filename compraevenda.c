#include <stdio.h>
#include <stdlib.h>

struct Item {
    char name[50];
    float price;
    int quantity;
};

struct Item items[] = {
    {"Maçã", 2.0, 10},
    {"Banana", 1.5, 15},
    {"Laranja", 3.0, 8},
    {"Pera", 2.5, 12},
};

float money = 100.0;
float total_sales = 0.0;

void display_items() {
    printf("Item\t\tPreço\t\tEstoque\n");
    for (int i = 0; i < sizeof(items)/sizeof(struct Item); i++) {
        printf("%s\t\t%.2f\t\t%d\n", items[i].name, items[i].price, items[i].quantity);
    }
}

void sell_item(int item_index, int quantity) {
    if (items[item_index].quantity >= quantity) {
        items[item_index].quantity -= quantity;
        total_sales += items[item_index].price * quantity;
        printf("%d unidades de %s vendidas.\n", quantity, items[item_index].name);
    } else {
        printf("Não há estoque suficiente de %s.\n", items[item_index].name);
    }
}

void buy_item(int item_index, int quantity) {
    float total_cost = items[item_index].price * quantity;
    if (money >= total_cost) {
        money -= total_cost;
        items[item_index].quantity += quantity;
        printf("%d unidades de %s compradas.\n", quantity, items[item_index].name);
    } else {
        printf("Você não tem dinheiro suficiente para comprar %d unidades de %s.\n", quantity, items[item_index].name);
    }
}

int main() {
    int choice;
    int item_index;
    int quantity;

    while (1) {
        printf("\nDinheiro disponível: %.2f\n", money);
        display_items();
        printf("\nEscolha uma opção:\n");
        printf("1. Comprar item\n");
        printf("2. Vender item\n");
        printf("3. Sair\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Digite o número do item que deseja comprar: ");
            scanf("%d", &item_index);
            printf("Digite a quantidade que deseja comprar: ");
            scanf("%
