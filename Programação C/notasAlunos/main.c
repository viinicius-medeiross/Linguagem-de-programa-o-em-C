#include <stdio.h>
#include <string.h>
int main()
{
    char nome[100]; // Declara��o da vari�vel para armazenar o nome do aluno
    int matricula; // Declara��o da vari�vel para armazenar a matr�cula do aluno
    char materia[100]; // Declara��o da vari�vel para armazenar a mat�ria escolhida
    float nota1, nota2, nota3, nota4, media; // Declara��o das vari�veis para armazenar as notas e a m�dia

    // Solicita ao usu�rio o nome do aluno e armazena na vari�vel 'nome'
    printf("DIGITE O NOME DO ALUNO(A): ");
    scanf("%s", nome);

    // Solicita ao usu�rio a matr�cula do aluno e armazena na vari�vel 'matricula'
    printf("DIGITE A MATRICULA: ");
    scanf("%d", &matricula);

    // Loop que apresenta as op��es de mat�rias e solicita ao usu�rio a escolha da mat�ria
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

        int opcao; // Declara��o da vari�vel para armazenar a op��o escolhida pelo usu�rio
        scanf("%d", &opcao);

        // Switch case que verifica a op��o escolhida pelo usu�rio e armazena a mat�ria na vari�vel 'materia'
        switch(opcao)
        {
        case 1:
            strcpy(materia, "MATEMATICA");//strcpy pega a vari�vel materia e troca por dado MATEMATICA
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

        default: // Caso a op��o escolhida seja inv�lida, exibe uma mensagem de erro e solicita uma nova escolha
            printf("OPCAO INVALIDA!\n");
            printf("DIGITE O NUMERO DA MATERIA NOVAMENTE :\n");
            continue; // Continua o loop para solicitar uma nova op��o
        }

        break; // Sai do loop se a op��o for v�lida
    }
    while (1);


    // Solicita ao usu�rio as notas da mat�ria escolhida e armazena nas vari�veis 'nota1', 'nota2', 'nota3' e 'nota4'
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
