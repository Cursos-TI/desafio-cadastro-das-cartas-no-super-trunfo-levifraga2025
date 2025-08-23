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
    printf("--- Carta 1 ---\n");
    printf("Insira o código da Carta 1): ");
    scanf(" %s", codigo1);
    printf("Digite o nome do Estado: ");
    scanf(" %c", &estado1);    
    scanf(" %s", codigo1);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Densidade Populacional: ");
    scanf(" %f", &populacao1);
    printf("Digite a área em km2: ");
    scanf(" %f", &area1);
    printf("Digite o PIB per Capita: ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // --- CÁLCULO PARA A CARTA 1 ---
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // --- DADOS DA CARTA 2 ---
    printf("--- Carta 2 ---\n");
    printf("Insira o código da Carta 2): ");
    scanf(" %s", codigo2);
    printf("Digite o nome do Estado: ");
    scanf(" %c", &estado2);    
    scanf(" %s", codigo2);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Densidade Populacional: ");
    scanf(" %f", &populacao2);
    printf("Digite a área em km2: ");
    scanf(" %f", &area2);
    printf("Digite o PIB per Capita: ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // --- CÁLCULO PARA A CARTA 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // --- RESULTADOS ---
    printf("\n\n--- CARTAS CADASTRADAS ---\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado Brasília: %c\n", estado1);
    printf("Codigo A01: %s\n", codigo1);
    printf("Nome da Cidade Distrito Federal: %s\n", nomeCidade1);
    printf("Populacao: %.0f\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado Paraná: %c\n", estado2);
    printf("Codigo B02: %s\n", codigo2);
    printf("Nome da Cidade Curitiba: %s\n", nomeCidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}