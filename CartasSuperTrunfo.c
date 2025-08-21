#include <stdio.h>

int main() {
    // Carta 1 - Ceará
    char codigoCarta1[1] = "A01";
    char estado1[20] = "Ceará";
    char cidade1[30] = "Fortaleza";
    float populacao1 = 12300000;
    float areaKm21 = 1521;
    float pib = 750;
    int pontosTuristicos1 = 20;

    printf("=== Carta Super Trunfo ===\n");
    printf("Carta 1: %s\n", codigoCarta1);
    printf("Estado A: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.0f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", areaKm21);
    printf("PIB: %.2f bilhões de R$\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);


    // Carta 2 - Piauí
    char codigoCarta2[4] = "B02";
    char estado2[20] = "Piauí";
    char cidade2[30] = "Teresina";
    float populacao2 = 550000;
    float areaKm22 = 5998;
    float pib2 = 26;
    int pontosTuristicos2 = 8;

    printf("=== Carta Super Trunfo ===\n");
    printf("Carta 2: %s\n", codigoCarta2);
    printf("Estado B: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.0f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", areaKm22);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    
    

    return 0;
}
