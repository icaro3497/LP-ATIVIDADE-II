#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int temperatura;

    printf("Digite a temperatura do jogo:  ");
    scanf("%d", &temperatura);

    if (temperatura > 25 ) {
        printf("\nEnsolarado. \n");
        } else if (temperatura < 15) {
        printf("\nChuvoso. \n");
    }else{
        printf("\nNublado. \n");
    }

    
    
    return 0;
}