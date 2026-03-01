#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    void nivelNovato() {

    const int BISPO = 4;
    const int TORRE = 5;
    const int RAINHA = 6;

    printf("\n=== NIVEL NOVATO ===\n");

    /* Movimento do BISPO (Diagonal) */
    printf("\nBispo (Diagonal Direita):\n");
    for(int i = 1; i <= BISPO; i++) {
        printf("(%d,%d)\n", i, i);
    }

    /* Movimento da TORRE (Direita) */
    printf("\nTorre (Direita):\n");
    for(int i = 1; i <= TORRE; i++) {
        printf("(0,%d)\n", i);
    }

    /* Movimento da RAINHA (Esquerda) */
    printf("\nRainha (Esquerda):\n");
    for(int i = 1; i <= RAINHA; i++) {
        printf("(0,%d)\n", -i);
    }
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    void nivelAventureiro() {

    printf("\n=== NIVEL AVENTUREIRO ===\n");

    printf("\nMovimento do Cavalo (em L):\n");

    // Movimento em L → 2 horizontal + 1 vertical
    for(int horizontal = -2; horizontal <= 2; horizontal++) {
        for(int vertical = -2; vertical <= 2; vertical++) {

            if((horizontal*horizontal + vertical*vertical) == 5) {
                printf("(%d,%d)\n", horizontal, vertical);
            }
        }
    }
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
