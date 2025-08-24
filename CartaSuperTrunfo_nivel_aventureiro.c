    #include <stdio.h>

int main() {
    //  Carta 1
    char estado1_letra = 'A'; 
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "São Paulo";
    float populacao1 = 12396372; 
    float area1 = 1521.11;     
    float pib1 = 828.9;       
    int pontosTuristicos1 = 50; 

    // Carta 2 
    char estado2_letra = 'B'; 
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    float populacao2 = 6775561; 
    float area2 = 1200.27;     
    float pib2 = 359.8;       
    int pontosTuristicos2 = 45; 

    // Variáveis para cálculos
    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;

    // --- CÁLCULO PARA A CARTA 1 ---
    densidade1 = populacao1 / area1;
    // O PIB per capita calculado com o PIB 
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 

    // --- CÁLCULO PARA A CARTA 2 ---
    densidade2 = populacao2 / area2;
    // O PIB per capita calculado com o PIB 
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c (São Paulo)\n", estado1_letra);
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
    printf("Estado: %c (Rio de Janeiro)\n", estado2_letra);
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


    
    