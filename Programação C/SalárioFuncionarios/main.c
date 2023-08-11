#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da de dados em C.

int main() { // Define a fun��o principal do programa.
    float salarioFuncionario, novoSalario; // Declara duas vari�veis do tipo float.

    printf("Digite o seu sal�rio: "); // Exibe uma mensagem na tela para o usu�rio.
    scanf("%f", &salarioFuncionario); // L� um valor de ponto flutuante digitado pelo usu�rio.

    printf("Sal�rio atual: R$ %.2f\n", salarioFuncionario);
    // Exibe o sal�rio atual com duas casas decimais.

    if (salarioFuncionario <= 1000) { // Verifica se o sal�rio atual � menor ou igual a 1000.
        novoSalario = salarioFuncionario * 1.1; // Calcula o novo sal�rio com um aumento de 10%.
        printf("Aumento de 10%% concedido ao funcion�rio!\nNovo sal�rio: R$ %.2f", novoSalario);
        // Exibe o novo sal�rio com duas casas decimais.
    } else {
        printf("Sal�rio normal: R$ %.2f", salarioFuncionario);
        // Exibe o sal�rio atual com duas casas decimais.
    }

    return 0; // Retorna 0 para

}
__
