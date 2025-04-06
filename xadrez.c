#include <stdio.h>

int main() {

    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre (cinco casas para a direita):\n");
    int i = 1;
    while (i <= 5) {
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo (cinco casas para cima e direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Cima Direita\n");
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha (oito casas para a esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    // Implementação de Movimentação do Cavalo
    printf("\nMovimentação do Cavalo (duas casas para baixo e uma para a esquerda):\n");
    i = 1;
    while (i--) {
        for (int j = 1; j <= 2; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    return 0;
}
