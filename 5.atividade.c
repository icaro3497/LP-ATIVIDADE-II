#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf("=== MENU === \n");
    printf("1 - Inglês \n");
    printf("2 - Espanhol \n");
    printf("3 - Francês \n");
    printf("Digite o idioma desejado: ");
    scanf("%d", &idioma);
    system("cls || clear");

    switch (idioma) {
    case 1 :
        printf("Welcome! \n");
        break;
    case 2 :
        printf("Bienvenido! \n");
        break;
    case 3 :
        printf("Bienvenue! \n");
        break;
    
    default:
    printf("Opção inválida. \n");
        break;
    }

    return 0;
}
