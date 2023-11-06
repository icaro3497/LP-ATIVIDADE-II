#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int codigo;
    char mercadoria[200];
    float preco;

    printf("=== MENU === \n");
    printf("1 - Camiseta \n");
    printf("2 - Calça \n");
    printf("3 - Sapato \n");
    printf("Digite o código do produto escolhido: ");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1 :
        strcpy(mercadoria, "Camiseta \n");
        preco = 25.00;
        break;
    case 2 :
        strcpy(mercadoria, "Calça \n");
        preco = 50.00;
        break;
    case 3 :
        strcpy(mercadoria, "Sapato \n");
        preco = 35.00;
        break;
    
    default:
    printf("Opção inválida. \n");
        break;
    }

    system("cls || clear");
//mostrar usuario.
    printf("Produto: %s", mercadoria);
    printf("Preço: %.2f \n", preco);

    return 0;
}