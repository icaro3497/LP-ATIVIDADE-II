#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;
    int par = 0;
    int impar = 0;
    int qntNumeros = 0;
    int somaPares = 0;
    int somaImpares = 0;
    float mediaPares;
    float mediaImpares;

        printf("Digite a quantidade de Numeros: \n");
        scanf("%d", &qntNumeros);

        for (i = 1; i <= qntNumeros; i++) {
            printf("Digite a %d° Numero: \n", i);
            scanf("%d", &numero);

            if (numero % 2 == 0) {
                par++;
                somaPares+=numero;
            }else{
                impar++;
                somaImpares+=numero;
            }
        }
    
    mediaPares = somaPares / (float)par;
    mediaImpares = somaImpares / (float)impar;

    printf("Quantidade de números pares: %d \n", par);
    printf("Quantidade de números ímpares: %d \n", impar);
    printf("Média pares: %.2f \n", mediaPares);
    printf("Média ímpares: %.2f \n", mediaImpares);

    return 0;
}