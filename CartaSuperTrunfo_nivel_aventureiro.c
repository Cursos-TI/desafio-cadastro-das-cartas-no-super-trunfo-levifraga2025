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
    printf("Dgite o código da Carta: ");
    scanf(" %3s", codigo1);

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População (em habitantes): ");
    scanf(" %f", &populacao1);

    printf("Digite a área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // --- CÁLCULO PARA A CARTA 1 ---
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // PIB convertido para reais

    // --- DADOS DA CARTA 2 ---
    printf("\n--- Carta 2 ---\n");
    printf("Digite o código da Carta: ");
    scanf(" %3s", codigo2);

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População (em habitantes): ");
    scanf(" %f", &populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
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
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %.0f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f R$\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %.0f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f R$\n", pibPerCapita2);

    return 0;
}