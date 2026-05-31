#include <stdio.h>

void movimento_torre(int coluna) {
    if (coluna > 8) {
        return; // Limite da coluna (A-H)
    }
    printf("Movimento da torre - Direita %d\n", coluna);
    movimento_torre(coluna + 1); // Chamada recursiva para mover para a direita
}

void movimento_rainha(int coluna) {
    if (coluna < 1) {
        return; // Limite da coluna (A-H)
    }
    printf("Movimento da rainha - Esquerda %d\n", coluna);
    movimento_rainha(coluna - 1); // Chamada recursiva para mover para a esquerda
}

void movimento_bispo(int linhaAtual, int colunaAtual, int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Limite do tabuleiro ou sem mais casas para mover
    }
    linhaAtual++;
    colunaAtual++;
    printf("Movimento do bispo - Cima %d\n", linhaAtual);
    printf("Movimento do bispo - Direita %d\n", colunaAtual);
    movimento_bispo(linhaAtual, colunaAtual, casasRestantes - 1); // Chamada recursiva para mover para a diagonal cima direita
}

int main() {
    // MOVIMENTO DAS PEÇAS DE XADREZ
    // movimento do cavalo 2 casas para cima e 1 para a direita com loops aninhados avançados
    int movimentoCompleto = 1;
    int linha, coluna;
    while (movimentoCompleto--) {
        for (linha = 2, coluna = 3; linha <= 8 && coluna <= 8; linha++, coluna++) {
            if (linha == 2 && coluna == 3) {
                printf("Cima %d\n", linha);
                printf("Cima %d\n", linha);
                printf("Direita %d\n", coluna);
            }
        }
    }

    movimento_torre(4);
    movimento_rainha(8);

    int linhaInicial = 5;
    int colunaInicial = 3;
    int totalCasas = 5;

    for (int tentativas = 1; tentativas <= 1; tentativas++) {
        for (int validacao = 0; validacao < 1; validacao++) {
            movimento_bispo(linhaInicial, colunaInicial, totalCasas);
        }
    }

    return 0;
}


