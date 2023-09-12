#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void limpar_Tela() {
    system("cls"); // Limpa a tela no Windows
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("              ____________ \n");
    printf("             //        / /\\ \n");
    printf("            //        / /  \\ \n");
    printf("           //________/ /    \\ \n");
    printf("          //        / /      \\ \n");
    printf("         //        / /        \\ \n");
    printf("        //________/ /          \\ \n");
    printf("       //        / /            \\ \n");
    printf("      //        / /              \\ \n");
    printf("     //________/ /                \\ \n");
    printf("    //        / /__________________\\ \n");
    printf("   //        / /       ________     \\ \n");
    printf("  //        / /       /       /\\     \\ \n");
    printf(" //________/ /_______/_______/__\\_____\\ \n");
    printf(" | |    | |  _______  _____           _ \n");
    printf(" | |    | | |  ___  ||_   _| ______  | | \n");
    printf(" | |____| | | |   | |  | |  |   ___| | | \n");
    printf(" |  ____  | | |   | |  | |  |  |___  | | \n");
    printf(" | |    | | | |   | |  | |  |   ___| | | \n");
    printf(" | |    | | | |___| |  | |  |  |___  | |______\n");
    printf(" |_|    |_| |_______|  |_|  |______| |________|\n\n");

    // Desenho que vai aparecer na tela inicial antes de iniciar o projeto
    printf("Pressione Enter para continuar...");
    getchar();

   int senha;
    int senha_correta = false;

    do {
        limpar_Tela();
        printf("Digite sua senha de acesso:");
        scanf("%d", &senha);

        if (senha == 123) {
            senha_correta = true;
        } else {
            printf("Senha incorreta !\n\n");
            printf("Pressione Enter para continuar...");
            getch();
        }
    } while (!senha_correta);

    // Aqui fiz uma verifica��o antes de acessar o projeto, ele pede uma senha
    // no caso a 123, caso nao seja digitada ele vai exibir a mensagem que esta incorretaa

    int selecione;

    // Matriz para representar os quartos em cada andar (5 andares x 10 quartos)
    int quartos[5][10];

    // Inicialize todos os quartos como dispon�veis (true)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            quartos[i][j] = true;
        }
    }

    do {
        limpar_Tela();
        printf("Menu de Op��es:\n\n");
        printf("1 - Quartos Dispon�veis\n");
        printf("2 - Reservar um Quarto\n");
        printf("3 - Cancelar a Reserva\n");
        printf("4 - Consultar a Reserva\n");
        printf("5 - Sair\n\n");
        printf("Escolha uma op��o para prosseguir: ");
        scanf("%d", &selecione);

        // menu com as op��es disponiveis

        switch (selecione) {
            case 1: // cada case � uma das op��es a cima
                limpar_Tela(); //limpa a tela
                printf("Voc� selecionou a Op��o 1 - Quartos Dispon�veis\n\n"); //exibe essa mensagem e mostra as op��es disponiveis

                int andar; // aqui come�a as op��es das op��es, por exemplo os andar do predio
                printf("Selecione o andar (1�, 2�, 3�, 4�, 5�): ");
                scanf("%d", &andar);

                if (andar >= 1 && andar <= 5) { // aqui vai fazer uma verifica��o para exibir a lista no for
                    printf("\nQuartos dispon�veis no %d� andar:\n\n", andar);

                    // Exibir os quartos dispon�veis no andar selecionado
                    for (int quarto = 0; quarto < 10; quarto++) {
                        if (quartos[andar - 1][quarto]) {
                            printf("Quarto %d\n\n", quarto + 1);
                            // Para continuar, decidir qual a melhor forma de colocar os pre�os
                            // Por exemplo pre�o fixo por andar
                            // Quanto mais alto mais caro
                        }
                    }
                } else {
                    printf("Andar inv�lido !\n");
                }

                printf("Pressione Enter para voltar ao menu...");
                getchar();
                break;

		case 2:
                limpar_Tela();
                printf("Voc� selecionou a Op��o 2 - Reservar um Quarto\n\n");

                // continuar o c�digo

                printf("Pressione Enter para voltar ao menu...");
                getch();
                break;

            case 3:
                limpar_Tela();
                printf("Voc� selecionou a Op��o 3 - Cancelar a Reserva\n\n");

                // continuar o c�digo

                printf("Pressione Enter para voltar ao menu...");
                getch();
                break;

            case 4:
                limpar_Tela();
                printf("Voc� selecionou a Op��o 4 - Consultar a Reserva\n\n");

                // continuar o c�digo

                printf("Pressione Enter para voltar ao menu...");
                getch();
                break;
            case 5:

                printf("Saindo do programa!\n\n");
                break;
            default:
                limpar_Tela();
                printf("Op��o inv�lida. Tente novamente.\n\n");
                printf("Pressione Enter para continuar...");
                getch();
        }

        // Limpar o menu de entrada
        while (getchar() != '\n');

    } while (selecione != 5);

        }
