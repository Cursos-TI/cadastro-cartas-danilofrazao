#include <stdio.h>

int main() {

    // Carta 1 - Porto
    char estado1 = 'A';
    char codigo1[] = "P01";
    char cidade1[] = "Porto";
    unsigned long int populacao1 = 231800;
    float area1 = 41.42;
    float pib1 = 18.0;
    int pontosTuristicos1 = 25;

    
    char estado2 = 'B';
    char codigo2[] = "M01";
    char cidade2[] = "Madrid";
    unsigned long int populacao2 = 3332000;
    float area2 = 604.30;
    float pib2 = 230.0;
    int pontosTuristicos2 = 40;

    
    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}