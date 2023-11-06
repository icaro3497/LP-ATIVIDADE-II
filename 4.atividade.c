#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade >= 18){
        printf("Acesso permitido! \n");
    }else{
        printf("Acesso negado. \n");
    }

    return 0;
}

