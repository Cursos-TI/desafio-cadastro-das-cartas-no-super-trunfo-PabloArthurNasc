#include <stdio.h>

// Função recursiva da Torre
void moverTorre(int passo, int total) {
    if (passo > total) {
        return; // condição de parada
    }
    printf("Direita (%d casa)\n", passo);
    moverTorre(passo + 1, total); // chamada recursiva
}

// Função recursiva da Rainha
void moverRainha(int passo, int total) {
    if (passo > total) {
        return;
    }
    printf("Esquerda (%d casa)\n", passo);
    moverRainha(passo + 1, total);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int vertical, int horizontal, int limite) {
    if (vertical > limite) {
        return;
    }

    int j;
    for (j = 1; j <= limite; j++) {
        printf("Cima, Direita (V%d, H%d)\n", vertical, j);
    }

    moverBispo(vertical + 1, horizontal, limite);
}

int main() {

    printf("==== Movimentos Complexos no Xadrez ====\n\n");

    // ===============================
    // Torre com recursividade
    // ===============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(1, casasTorre);

    printf("\n-----------------------------\n\n");

    // ===============================
    // Bispo com recursividade + loops aninhados
    // ===============================
    int casasBispo = 3;
    printf("Movimento do Bispo:\n");
    moverBispo(1, 1, casasBispo);

    printf("\n-----------------------------\n\n");

    // ===============================
    // Rainha com recursividade
    // ===============================
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(1, casasRainha);

    printf("\n-----------------------------\n\n");

    // ===============================
    // Cavalo com loops complexos
    // ===============================
    printf("Movimento do Cavalo:\n");

    int i, j;
    int movVertical = 2;  // duas casas para cima
    int movHorizontal = 1; // uma para a direita

    for (i = 1; i <= movVertical; i++) {
        for (j = 1; j <= movHorizontal + 1; j++) {

            if (i == 2 && j == 2) {
                printf("Direita (1 casa)\n");
                break; // fim do movimento em L
            }

            if (i > movVertical) {
                continue;
            }

            printf("Cima (%d casa)\n", i);
        }
    }

    printf("\n-----------------------------\n");
    printf("Fim da simulacao de movimentos!\n");

    return 0;
}
