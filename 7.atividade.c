#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("=== MENU === \n");
    printf("1 - Novo jogo \n");
    printf("2 - Carregar jogo \n");
    printf("3 - Configuracoes \n\n");
    printf("Digite a opcao escolhida: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
    case 1 :
        printf("Comecando novo jogo \n");
        break;
    case 2 :
        printf("Carregando o jogo... \n");
        break;
    case 3 :
        printf("Configuracoes: \n\n");
        printf("Som \n");
        printf("Imagem \n");
        printf("Alterar idioma \n");
        printf("Voltar \n");
        break;
    
    default:
    printf("Opcao invalida. \n");
        break;
    }
    return 0; 
    }