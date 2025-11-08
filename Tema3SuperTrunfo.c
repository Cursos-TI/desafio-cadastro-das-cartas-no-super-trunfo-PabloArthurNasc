#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turistico1, turistico2;

    // ===== Cadastro das Cartas =====
    printf("=== Cadastro das Cartas ===\n");

    // Carta 1
    printf("\nInsira as informações da Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em reais): ");
    scanf("%f", &PIB1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    // Carta 2
    printf("\nInsira as informações da Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em reais): ");
    scanf("%f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);

    // ===== Cálculos =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // ===== Menus Interativos =====
    int atributo1, atributo2;
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o PRIMEIRO atributo para comparar: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Encerrando o programa.\n");
        return 0;
    }

    // Segundo menu dinâmico (remove o atributo escolhido)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue; // pula o já escolhido
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida! Você deve escolher dois atributos diferentes.\n");
        return 0;
    }

    // ===== Comparação =====
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;

    // Função interna para pegar o valor de cada atributo
    float getValor(int atributo, int carta, unsigned long int pop, float area, float PIB, int pontos, float dens) {
        switch (atributo) {
            case 1: return (float)pop;
            case 2: return area;
            case 3: return PIB;
            case 4: return (float)pontos;
            case 5: return dens;
            default: return 0;
        }
    }

    // Obtém valores das cartas
    valor1_attr1 = getValor(atributo1, 1, populacao1, area1, PIB1, turistico1, densidade1);
    valor2_attr1 = getValor(atributo1, 2, populacao2, area2, PIB2, turistico2, densidade2);
    valor1_attr2 = getValor(atributo2, 1, populacao1, area1, PIB1, turistico1, densidade1);
    valor2_attr2 = getValor(atributo2, 2, populacao2, area2, PIB2, turistico2, densidade2);

    // Comparação de cada atributo
    float pontos_carta1 = 0, pontos_carta2 = 0;

    // Primeiro atributo
    int venceu1 = (atributo1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    venceu1 ? (pontos_carta1 += valor1_attr1) : (pontos_carta2 += valor2_attr1);

    // Segundo atributo
    int venceu2 = (atributo2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    venceu2 ? (pontos_carta1 += valor1_attr2) : (pontos_carta2 += valor2_attr2);

    // ===== Exibição do Resultado =====
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Cartas: %s (1) vs %s (2)\n", cidade1, cidade2);
    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);
    printf("\nValores:\n");
    printf("%s - Atributo %d: %.2f | Atributo %d: %.2f\n", cidade1, atributo1, valor1_attr1, atributo2, valor1_attr2);
    printf("%s - Atributo %d: %.2f | Atributo %d: %.2f\n", cidade2, atributo1, valor2_attr1, atributo2, valor2_attr2);

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", cidade1, pontos_carta1);
    printf("%s: %.2f\n", cidade2, pontos_carta2);

    // Resultado final com operador ternário
    (pontos_carta1 > pontos_carta2)
        ? printf("\nVencedora: %s!\n", cidade1)
        : (pontos_carta2 > pontos_carta1)
            ? printf("\nVencedora: %s!\n", cidade2)
            : printf("\nEmpate!\n");

    printf("\n=== Fim do jogo ===\n");
    return 0;
}

