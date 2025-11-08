#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3
#define MAR 0
#define NAVIO 3
#define EFEITO 5
#define TAM_HAB 5  // tamanho das matrizes de habilidade (5x5)

// Função auxiliar para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n🌊 TABULEIRO ATUALIZADO 🌊\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            // Exibe símbolos diferentes para facilitar a visualização
            if (tabuleiro[i][j] == MAR)
                printf("~ ");       // água
            else if (tabuleiro[i][j] == NAVIO)
                printf("🚢 ");      // navio
            else if (tabuleiro[i][j] == EFEITO)
                printf("⭐ ");      // área afetada pela habilidade
        }
        printf("\n");
    }
}

// Função para sobrepor uma matriz de habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[TAM][TAM], int habilidade[TAM_HAB][TAM_HAB], int origem_linha, int origem_coluna) {
    int metade = TAM_HAB / 2;

    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            // Calcula a posição correspondente no tabuleiro
            int linha_t = origem_linha - metade + i;
            int coluna_t = origem_coluna - metade + j;

            // Garante que o efeito fique dentro do tabuleiro
            if (linha_t >= 0 && linha_t < TAM && coluna_t >= 0 && coluna_t < TAM) {
                if (habilidade[i][j] == 1 && tabuleiro[linha_t][coluna_t] == MAR) {
                    tabuleiro[linha_t][coluna_t] = EFEITO;
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // --------------------------------------------
    // 1️⃣ Inicializa o tabuleiro com água
    // --------------------------------------------
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = MAR;
        }
    }

    // --------------------------------------------
    // 2️⃣ Posiciona os navios (do nível anterior)
    // --------------------------------------------
    // Navio horizontal
    int linha_h = 2, coluna_h = 4;
    for (i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha_h][coluna_h + i] = NAVIO;

    // Navio vertical
    int linha_v = 5, coluna_v = 1;
    for (i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha_v + i][coluna_v] = NAVIO;

    // Navio diagonal ↘
    int linha_d1 = 0, coluna_d1 = 0;
    for (i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha_d1 + i][coluna_d1 + i] = NAVIO;

    // Navio diagonal ↙
    int linha_d2 = 0, coluna_d2 = 9;
    for (i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha_d2 + i][coluna_d2 - i] = NAVIO;

    // --------------------------------------------
    // 3️⃣ Cria as matrizes das habilidades (5x5)
    // --------------------------------------------
    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    // Cone apontando para baixo
    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            // A condição abaixo cria o formato do cone:
            // Quanto mais embaixo, mais largo o cone
            if (j >= (TAM_HAB / 2) - i && j <= (TAM_HAB / 2) + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // Cruz
    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            if (i == TAM_HAB / 2 || j == TAM_HAB / 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // Octaedro (formato de losango)
    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            if (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= TAM_HAB / 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // --------------------------------------------
    // 4️⃣ Define as origens das habilidades
    // --------------------------------------------
    int origem_cone_l = 1, origem_cone_c = 2;
    int origem_cruz_l = 5, origem_cruz_c = 5;
    int origem_octa_l = 8, origem_octa_c = 8;

    // --------------------------------------------
    // 5️⃣ Aplica as habilidades no tabuleiro
    // --------------------------------------------
    aplicarHabilidade(tabuleiro, cone, origem_cone_l, origem_cone_c);
    aplicarHabilidade(tabuleiro, cruz, origem_cruz_l, origem_cruz_c);
    aplicarHabilidade(tabuleiro, octaedro, origem_octa_l, origem_octa_c);

    // --------------------------------------------
    // 6️⃣ Exibe o tabuleiro final
    // --------------------------------------------
    exibirTabuleiro(tabuleiro);

    return 0;
}
