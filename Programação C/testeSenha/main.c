#include <stdio.h>        // inclui a biblioteca padrão de entrada e saída em C
#include <string.h>       // inclui a biblioteca de funções para manipulação de strings em C

int main() {              // função principal do programa
    char senhaCadastrada[] = "julio123";  // define a senha cadastrada como uma string
    char senhaDigitada[100];              // define a senha digitada pelo usuário como uma string

    printf("Digite sua senha: ");         // exibe a mensagem "Digite sua senha" na tela
    scanf("%s", senhaDigitada);           // lê a senha digitada pelo usuário e a armazena na variável senhaDigitada
    if (strcmp(senhaDigitada, senhaCadastrada) == 0) { // compara as duas strings e verifica se são iguais
        printf("Senha vaida!\n");        // exibe a mensagem "Senha válida!" na tela
    } else {
        printf("Senha invalida.\n");      // exibe a mensagem "Senha inválida." na tela
    }

    return 0;  // encerra a função principal e retorna o valor 0 para o sistema operacional
}


//O CODIGO É UMA REPRESENTAÇÃO DE UM SISTEMA DE SENHA QUE MOSTRA SE ELA É VALIDA OU NÃO
