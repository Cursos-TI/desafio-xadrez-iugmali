#include <stdio.h>

void movimentarTorre(int casas, char *direcao) {
    if (casas > 0) {
        printf("%s\n", direcao);
        movimentarTorre(casas - 1, direcao);
    }
}

void movimentarBispo(int casas, char *direcao1, char *direcao2) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {
            printf("%s\n", direcao1);
            for (int j = 0; j < 1; j++) {
                printf("%s\n", direcao2);
            }
        }
        movimentarBispo(casas - 1, direcao1, direcao2);
    }
}

void movimentarRainha(int casas, char *direcao) {
    if (casas > 0) {
        printf("%s\n", direcao);
        movimentarRainha(casas - 1, direcao);
    }
}

int main() {
    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre (cinco casas para a direita):\n");
    movimentarTorre(5, "Direita");

    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo (cinco casas para cima e direita):\n");
    movimentarBispo(5, "Cima", "Direita");

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha (oito casas para a esquerda):\n");
    movimentarRainha(8, "Esquerda");

    // Implementação de Movimentação do Cavalo
    printf("\nMovimentação do Cavalo (duas casas para cima e uma para a direita):\n");
    for (int i = 0, j = 0; i < 2 && j < 2; i++, j++) {
        printf("Cima\n");
        if (j == 1) printf("Direita\n");
    }
    return 0;
}
