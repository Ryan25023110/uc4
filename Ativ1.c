#include<stdio.h>

int main(){
    char nome[100];
    int idade;
    int possuiIngresso;

    printf("digite seu nome: ");
    scanf("%s, &nome");

    printf("digite seu nome: ");
    scanf("%d, &idade");

    printf("voce possui ingresso? (1 para sim, 0 para nao): ");
    scanf("%d, &possuiIngresso");

    if(idade >= 18 && possuiIngresso == 1) {
        printf("bem-vindo ao evento, %s|\n", nome);
    } else if (idade < 18) {
        printf("Entrada nao permitida para menores de idade.\n");
    } else if (possuiIngresso == 0) {
        printf("e necessario possuir ingresso para entrar.\n");
    } else {
        printf("informacoes invalidas. verifique seus dados.\n");
    }

    return 0;

}