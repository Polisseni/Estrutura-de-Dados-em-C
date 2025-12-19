#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    int jogador, computador, total;
    int v = 0;           // contador de vitórias
    char tipo;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &jogador);

        computador = rand() % 12; // equivalente a randint(0, 11)
        total = jogador + computador;

        tipo = ' ';
        while (tipo != 'P' && tipo != 'I') {
            printf("Par ou Ímpar? ");
            scanf(" %c", &tipo);
            tipo = toupper(tipo); // converte para maiúsculo
        }

        printf("Você jogou %d e o computador jogou %d, num total de %d\n",
               jogador, computador, total);

        if (total % 2 == 0)
            printf("DEU PAR!!\n");
        else
            printf("DEU ÍMPAR!!\n");

        if (tipo == 'P') {
            if (total % 2 == 0) {
                printf("\033[1;34mVOCÊ VENCEU!!\033[m\n");
                v++;
            } else {
                printf("\033[1;31mVOCÊ PERDEU!!\033[m\n");
                break;
            }
        } else if (tipo == 'I') {
            if (total % 2 == 1) {
                printf("\033[1;34mVOCÊ VENCEU!!\033[m\n");
                v++;
            } else {
                printf("\033[1;31mVOCÊ PERDEU!!\033[m\n");
                break;
            }
        }

        printf("VAMOS JOGAR NOVAMENTE...\n");
    }

    printf("GAME OVER!! Você venceu %d vezes consecutivas\n", v);

    return 0;
}
