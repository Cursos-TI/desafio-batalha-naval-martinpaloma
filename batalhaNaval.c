#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3
#define VAZIO 0

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro com 0 (vazio)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = VAZIO;
        }
    }

    // Posicionamento dos navios

    // Navio 1 - Horizontal (linha 2, colunas 1 a 4)
    for (int j = 1; j <= 4; j++) {
        tabuleiro[2][j] = NAVIO;
    }

    // Navio 2 - Vertical (coluna 6, linhas 3 a 6)
    for (int i = 3; i <= 6; i++) {
        tabuleiro[i][6] = NAVIO;
    }

    // Navio 3 - Diagonal principal (posição: [0][0], [1][1], [2][2], [3][3])
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = NAVIO;
    }

    // Navio 4 - Diagonal secundária (posição: [0][9], [1][8], [2][7], [3][6])
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = NAVIO;
    }

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10 - Batalha Naval (0 = vazio | 3 = navio):\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
