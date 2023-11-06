#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
int numero;
int i;
int comecar;

printf("escolha o numero 1 para comecar: ");
scanf("%i", &comecar);

switch (numero){
case 1:
printf("DIGITE UM NUMERO Inteiro e POSITIVO: ");
scanf("%d" ,&numero);

for (i = numero; i >= 0; i--)
printf("\n %i ", i);
break;
default:
printf("incorreto digite outro numero: ");
break;
}

return 0;
}    