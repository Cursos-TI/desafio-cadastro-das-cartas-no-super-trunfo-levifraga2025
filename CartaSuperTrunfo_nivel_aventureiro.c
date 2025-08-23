#include <stdio.h>

int main() {
    //  Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    float populacao1, area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    //  Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    float populacao2, area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    // --- DADOS DA CARTA 1 ---
    printf("--- Carta 1 Brasília ---\n");
    printf("Estado (ex: A): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade (Distrito Federal): ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao (ex: 12325000): ");
    scanf(" %f", &populacao1);
    printf("Area em km^2 (ex: 1521.11): ");
    scanf(" %f", &area1);
    printf("PIB em bilhoes de reais (ex: 699.28): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos (ex: 50): ");
    scanf(" %d", &pontosTuristicos1);

    // --- CÁLCULO PARA A CARTA 1 ---
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // --- DADOS DA CARTA 2 ---
    printf("\n--- Carta 2 Paraná ---\n");
    printf("Estado (ex: B): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade (Curitiba): ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao (ex: 6748000): ");
    scanf(" %f", &populacao2);
    printf("Area em km^2 (ex: 1200.25): ");
    scanf(" %f", &area2);
    printf("PIB em bilhoes de reais (ex: 300.50): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos (ex: 30): ");
    scanf(" %d", &pontosTuristicos2);

    // --- CÁLCULO PARA A CARTA 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // --- RESULTADOS ---
    printf("\n\n--- CARTAS CADASTRADAS ---\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %.0f\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %.0f\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}