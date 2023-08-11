#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados em C.

int main() { // Define a função principal do programa.
    float salarioFuncionario, novoSalario; // Declara duas variáveis do tipo float.

    printf("Digite o seu salário: "); // Exibe uma mensagem na tela para o usuário.
    scanf("%f", &salarioFuncionario); // Lê um valor de ponto flutuante digitado pelo usuário.

    printf("Salário atual: R$ %.2f\n", salarioFuncionario);
    // Exibe o salário atual com duas casas decimais.

    if (salarioFuncionario <= 1000) { // Verifica se o salário atual é menor ou igual a 1000.
        novoSalario = salarioFuncionario * 1.1; // Calcula o novo salário com um aumento de 10%.
        printf("Aumento de 10%% concedido ao funcionário!\nNovo salário: R$ %.2f", novoSalario);
        // Exibe o novo salário com duas casas decimais.
    } else {
        printf("Salário normal: R$ %.2f", salarioFuncionario);
        // Exibe o salário atual com duas casas decimais.
    }

    return 0; // Retorna 0 para

}
__
