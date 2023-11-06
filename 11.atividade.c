#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char codigoAcesso[300];
    char codigoCorreto[300] = "123456";

    do {
    printf("Digite o código de acesso: ");
    gets(codigoAcesso);
    printf("\n");

    if (strcmp(codigoCorreto, codigoAcesso)==0) {
        printf("Acesso permitido. \n");
    }else{
        printf("Acesso negado. Tente novamente... \n \n");
    }

    } while (strcmp(codigoCorreto, codigoAcesso)!=0);

    return 0;
}