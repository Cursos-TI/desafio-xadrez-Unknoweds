#include <stdio.h>
int main() {
//MOVIMENTO DAS PEÇAS BRANCAS DE XADREZ
//movimento do cavalo 2 casas para cima e 1 para a  com loops aninhados avançados
    for (int linha = 1, coluna = 2; linha <= 2 && coluna <= 3; linha++, coluna++) {
        if (coluna == 2) {
            linha++; 
        }
        printf("Movimento do cavalo - Cima %d\n", linha);
        printf("Movimento do cavalo - Direita %d\n", coluna);
    }
//movimento da torre 5 casas para a direita com recursividade
void movimento_torre(int coluna) {
    if (coluna > 8) {
        return; // Limite da coluna (A-H)
    }
    printf("Movimento da torre - Direita %d\n", coluna);
    movimento_torre(coluna + 1); // Chamada recursiva para mover para a direita    
} 
    movimento_torre(4);


//movimento da rainha 8 casas para a esquerda com recursividade
void movimento_rainha(int coluna) {
    if (coluna < 1) {
        return; // Limite da coluna (A-H)
    }
    printf("Movimento da rainha - Esquerda %d\n", coluna);
    movimento_rainha(coluna - 1); // Chamada recursiva para mover para a esquerda
}
    movimento_rainha(8);


//movimento do bispo 5 casas para a diagonal cima direita com recursividade e loops aninhados
void movimento_bispo(int linha, int coluna) {
    if (linha > 8 || coluna > 8) {
        return; // Limite do tabuleiro (1-8 para linhas e A-H para colunas)
    }
}
    for (int linha = 1; linha <= 5; linha++) {
        for (int coluna = 1; coluna <= 5; coluna++) {
            movimento_bispo(linha, coluna);
            printf("Movimento do bispo - Cima %d\n", linha);
            printf("Movimento do bispo - Direita %d\n", coluna);
    }
    }
    return 0;
}
   

