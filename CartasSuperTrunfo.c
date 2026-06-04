#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Porto";
    unsigned long int populacao1 = 231800;
    float area1 = 41.42;
    float pib1 = 18.0;
    int pontosTuristicos1 = 25;

    // =========================
    // CARTA 2
    // =========================
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[] = "Madrid";
    unsigned long int populacao2 = 3332000;
    float area2 = 604.30;
    float pib2 = 230.0;
    int pontosTuristicos2 = 40;

    // =========================
    // CÁLCULOS
    // =========================

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    float superPoder1 =
        populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0 / densidade1);

    float superPoder2 =
        populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0 / densidade2);

    // =========================
    // EXIBIÇÃO CARTA 1
    // =========================

    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.8f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // =========================
    // EXIBIÇÃO CARTA 2
    // =========================

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.8f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =========================
    // COMPARAÇÕES
    // =========================

    printf("\n=== RESULTADO DAS COMPARACOES ===\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);

    // Menor densidade vence
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);

    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}