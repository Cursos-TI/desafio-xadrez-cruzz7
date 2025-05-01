#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Movimento da Torre (loop for)
    printf("Movimento da Torre:\n");
    int torre_x = 0, torre_y = 0; // Posição inicial da Torre
    printf("Posição inicial da Torre: x = %d, y = %d\n", torre_x, torre_y);
    for (int i = 0; i < 5; i++) {
        torre_x++; // Move a Torre para a direita
        printf("Direita: x = %d, y = %d\n", torre_x, torre_y);
    }
    printf("\n");

    // 2. Movimento do Bispo (loop while)
    printf("Movimento do Bispo:\n");
    int bispo_x = 0, bispo_y = 0; // Posição inicial do Bispo
    printf("Posição inicial do Bispo: x = %d, y = %d\n", bispo_x, bispo_y);
    int i = 0;
    while (i < 5) {
        bispo_x++; // Move o Bispo para a direita
        bispo_y++; // Move o Bispo para cima
        printf("Cima, Direita: x = %d, y = %d\n", bispo_x, bispo_y);
        i++;
    }
    printf("\n");

    // 3. Movimento da Rainha (loop do-while)
    printf("Movimento da Rainha:\n");
    int rainha_x = 8, rainha_y = 0; // Posição inicial da Rainha (considerando um tabuleiro 8x8)
     printf("Posição inicial da Rainha: x = %d, y = %d\n", rainha_x, rainha_y);
    int j = 0;
    do {
        rainha_x--; // Move a Rainha para a esquerda
        printf("Esquerda: x = %d, y = %d\n", rainha_x, rainha_y);
        j++;
    } while (j < 8);
    printf("\n");

    return 0;
}
