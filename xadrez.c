// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
#include <stdio.h>
//MOVIMENTO DAS PEÇAS BRANCAS DE XADREZ
int main() {
//movimento da torre 5 casas para a direita
    // Representar colunas como números (1 = coluna A, 6 = coluna F)
    int torre_posicao = 1; // posição inicial da torre (A1 -> coluna 1)
    for (torre_posicao = 1; torre_posicao <= 6; torre_posicao++) { // mover até coluna 6 (A->F)
        printf("Direita: Torre na coluna %d\n", torre_posicao);
    }
//movimento do bispo 5 casas para a diagonal cima direita
    int bispo_coluna = 3; // posição inicial do bispo (C3 -> coluna 3)
    do {
        printf("Direita: Bispo na coluna ( %d)\n", bispo_coluna);
        bispo_coluna++; // mover para a coluna  (coluna +1)
    } while (bispo_coluna <= 8); // mover até coluna 8 (C->H)

    int bispo_linha = 1; // posição inicial do bispo (C1 -> linha 1)
    do {
        printf("Cima: Bispo na linha ( %d)\n", bispo_linha);
        bispo_linha++; // mover para a linha (linha +1)
    } while (bispo_linha <= 6); // mover até linha 6 (1->6)
//movimento da rainha 8 casas para a esquerda
    int rainha_coluna = 8; // posição inicial da rainha (H1 -> coluna 8)
    while (rainha_coluna >= 1) { // mover até coluna 1 (H->A)
        printf("Esquerda: Rainha na coluna %d\n", rainha_coluna);
        rainha_coluna--; // mover para a coluna (coluna -1)
    }
//movimento do cavalo 2 casas para baixo e 1 para a esquerda
    int movimentoCompleto = 2; // número de movimentos completos
    while (movimentoCompleto--) {
        for(int i = 0; i < 2; i++) { // mover 2 casas para baixo
            printf("Baixo: Cavalo na linha %d\n", i + 1); // exemplo de linha
        }
        printf("Esquerda: Cavalo na coluna %d\n", 2); // exemplo de coluna (B)
        break; // interrompe o loop após um movimento completo
    }
    return 0;
}
