// =====================================================================================
// PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 1
// 
// OBJETIVO DESTA PARTE:
// Implementar o cadastro e a listagem de livros usando um array estático.
// Foco em structs, entrada/saída de dados e organização básica.
//
//
//======================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcspn()

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define TAM_STRING 100

// --- Definição da Estrutura (Struct) ---
struct Livro {
    char nome [TAM_STRING];
    char autor [TAM_STRING];
    char editora [TAM_STRING];
    int ediçao;
};

// --- Função para limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

// --- Função Principal (main) ---
int main () {
    struct Livro biblioteca[MAX_LIVROS];
    int totalivros = 0;
    int opçao;

    // --- Laço principal do Menu ---
    do {

        // Exibe o Menu de Opções.
        printf("==================================\n");
        printf("      BIBLIOTECA - PARTE 1\n");
        printf("==================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Sair\n");
        printf("----------------------------------\n");
        printf("Escolha uma Opçao: ");

        // Lê a opção do usuário.
        scanf("%d", &opçao);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

        // --- Processamento da Opção ---
        switch (opçao) {
            case 1: // CADASTRO DE LIVRO
                printf("--- Cadastro de Novo Livro ---\n\n");

                if (totalivros < MAX_LIVROS) {
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalivros].nome, TAM_STRING, stdin);

                    printf("Digite o nome do autor: ");
                    fgets(biblioteca[totalivros].autor, TAM_STRING, stdin);

                    printf("Digite a editora: ");
                    fgets(biblioteca[totalivros].editora, TAM_STRING, stdin);

                    biblioteca[totalivros].nome[strcspn(biblioteca[totalivros].nome, "\n")] = '\0';
                    biblioteca[totalivros].autor[strcspn(biblioteca[totalivros].autor, "\n")] = '\0';
                    biblioteca[totalivros].editora[strcspn(biblioteca[totalivros].editora, "\n")] = '\0';

                    printf("Digite o número da edição: ");
                    scanf("%d", &biblioteca[totalivros].ediçao);
                    limparBufferEntrada();

                    totalivros++;
                    // totalivros += 1

                    printf("\nLivro cadastrado com sucesso!");
                } else {
                    printf("Biblioteca cheia! Não é possível cadastrar mais Livros!\n");
                }
                

                printf("Pressione ENTER para continuar...");
                getchar(); // Pausa para o usuário ler a mensagem antes de voltar ao MENU.
                break;

            case 2: // LISTAGEM DE LIVROS
                printf("--- Lista de Livros Cadastrados ---\n\n");

                if (totalivros == 0) {
                    printf("Nenhum livro cadastrado ainda.\n");
                } else {
                    for(int i = 0; i < totalivros; i++) {
                        printf("------------------------------------\n");
                        printf("LIVRO %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].ediçao);
                    }
                    printf("------------------------------------\n");
                }   

                // A pausa é crucial para que o usuário veja a lista antes
                // Do próximo loop limpar a tela
                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 3: //sair
                printf("Saindo do SISTEMA...\n");
                break;

            default: // OPÇÃO INVÁLIDA
                printf("\nOpção inválida! Tente novamente.\n");
                printf("\nPressione ENTER para continuar...");
                getchar();
                break;
        }

    } while (opçao != 0);

    return 0; // FIM DO PROGRAMA
}