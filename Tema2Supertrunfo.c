#include <stdio.h>

int main () {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turistico1, turistico2;

    // ===== Carta 1 =====
    printf("Insira as informações da Carta 1\n");

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

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    float densidade1 = populacao1 / area1;
    float PIBper1 = PIB1 / populacao1;

    // ===== Carta 2 =====
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

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);

    float densidade2 = populacao2 / area2;
    float PIBper2 = PIB2 / populacao2;

    float superpodercarta1 , superpodercarta2;

   // Calculo do Super poder de cada carta 

    superpodercarta1 = (float) populacao1 + area1 + PIB1 + (float) turistico1 + PIBper1 + (1.0f/densidade1);
    superpodercarta2 = (float) populacao2 + area2 + PIB2 + (float) turistico2 + PIBper2 + (1.0f/densidade2);


    // ===== Exibição =====
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBper1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBper2);

    // Comparação das cartas

    printf("Comparação de Cartas:\n");

// População: maior vence
int resultado = populacao1 > populacao2;
printf("População = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

// Área: maior vence
resultado = area1 > area2;
printf("Área = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

// PIB: maior vence
resultado = PIB1 > PIB2;
printf("PIB = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

// Pontos turísticos: maior vence
resultado = turistico1 > turistico2;
printf("Pontos Turísticos = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

// Densidade populacional: menor vence
resultado = densidade1 < densidade2;
printf("Densidade Populacional = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

// PIB per capita: maior vence
resultado = PIBper1 > PIBper2;
printf("PIB per Capita = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

// Super Poder: maior vence
resultado = superpodercarta1 > superpodercarta2;
printf("Super Poder = %d\n", resultado);
printf("Carta vencedora: Carta %d\n", 1 * resultado + 2 * (1 - resultado));

return 0;
}
