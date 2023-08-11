#include <stdio.h>
#include <string.h>
int main()
{
    char nome[100]; // Declaração da variável para armazenar o nome do aluno
    int matricula; // Declaração da variável para armazenar a matrícula do aluno
    char materia[100]; // Declaração da variável para armazenar a matéria escolhida
    float nota1, nota2, nota3, nota4, media; // Declaração das variáveis para armazenar as notas e a média

    // Solicita ao usuário o nome do aluno e armazena na variável 'nome'
    printf("DIGITE O NOME DO ALUNO(A): ");
    scanf("%s", nome);

    // Solicita ao usuário a matrícula do aluno e armazena na variável 'matricula'
    printf("DIGITE A MATRICULA: ");
    scanf("%d", &matricula);

    // Loop que apresenta as opções de matérias e solicita ao usuário a escolha da matéria
    do
    {
        printf("-----------------ESCOLHA A MATERIA:-----------------\n");
        printf("1 - MATEMATICA\n");
        printf("2 - PORTUGUES\n");
        printf("3 - HISTORIA\n");
        printf("4 - GEOGRAFIA\n");
        printf("5 - CIENCIAS\n");
        printf("6 - INFORMATICA\n");
        printf("7 - ESPANHOL\n");
        printf("8 - INGLES\n");
        printf("------------------------------------------------------\n");
        printf("DIGITE O NUMERO DA MATERIA: ");

        int opcao; // Declaração da variável para armazenar a opção escolhida pelo usuário
        scanf("%d", &opcao);

        // Switch case que verifica a opção escolhida pelo usuário e armazena a matéria na variável 'materia'
        switch(opcao)
        {
        case 1:
            strcpy(materia, "MATEMATICA");//strcpy pega a variável materia e troca por dado MATEMATICA
            break;

        case 2:
            strcpy(materia, "PORTUGUES");
            break;

        case 3:
            strcpy(materia, "HISTORIA");
            break;

        case 4:
            strcpy(materia, "GEOGRAFIA");
            break;

        case 5:
            strcpy(materia, "CIENCIAS");
            break;

        case 6:
            strcpy(materia, "INFORMATICA");
            break;

        case 7:
            strcpy(materia, "ESPANHOL");
            break;

        case 8:
            strcpy(materia, "INGLES");
            break;

        default: // Caso a opção escolhida seja inválida, exibe uma mensagem de erro e solicita uma nova escolha
            printf("OPCAO INVALIDA!\n");
            printf("DIGITE O NUMERO DA MATERIA NOVAMENTE :\n");
            continue; // Continua o loop para solicitar uma nova opção
        }

        break; // Sai do loop se a opção for válida
    }
    while (1);


    // Solicita ao usuário as notas da matéria escolhida e armazena nas variáveis 'nota1', 'nota2', 'nota3' e 'nota4'
    printf("DIGITE A 1a NOTA DA %s: ", materia);
    scanf("%f", &nota1);
    printf("DIGITE A 2a NOTA DA %s: ", materia);
    scanf("%f", &nota2);
    printf("DIGITE A 3a NOTA DA %s: ", materia);
    scanf("%f", &nota3);
    printf("DIGITE A 4a NOTA DA %s: ", materia);
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\n--- RESULTADO ---\n");
    printf("ALUNO: %s\n", nome);
    printf("MATRICULA: %d\n", matricula);
    printf("MATERIA: %s\n", materia);
    printf("MEDIA DO ALUNO FOI: %.2f\n", media);

    if (media >= 6.0)
    {
        printf("RESULTADO: Aprovado!\n");
    }
    else
    {
        printf("RESULTADO: Reprovado!\n");
    }

    return 0;
}
