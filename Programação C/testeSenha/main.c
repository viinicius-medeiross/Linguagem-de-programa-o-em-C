#include <stdio.h>        // inclui a biblioteca padr�o de entrada e sa�da em C
#include <string.h>       // inclui a biblioteca de fun��es para manipula��o de strings em C

int main() {              // fun��o principal do programa
    char senhaCadastrada[] = "julio123";  // define a senha cadastrada como uma string
    char senhaDigitada[100];              // define a senha digitada pelo usu�rio como uma string

    printf("Digite sua senha: ");         // exibe a mensagem "Digite sua senha" na tela
    scanf("%s", senhaDigitada);           // l� a senha digitada pelo usu�rio e a armazena na vari�vel senhaDigitada
    if (strcmp(senhaDigitada, senhaCadastrada) == 0) { // compara as duas strings e verifica se s�o iguais
        printf("Senha vaida!\n");        // exibe a mensagem "Senha v�lida!" na tela
    } else {
        printf("Senha invalida.\n");      // exibe a mensagem "Senha inv�lida." na tela
    }

    return 0;  // encerra a fun��o principal e retorna o valor 0 para o sistema operacional
}


//O CODIGO � UMA REPRESENTA��O DE UM SISTEMA DE SENHA QUE MOSTRA SE ELA � VALIDA OU N�O
