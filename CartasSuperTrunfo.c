#include <stdio.h>

int main() {
    // Carta 1 - Ceará
    char codigoCarta[4] = "A01";
    char estado[20] = "Ceará";
    char cidade[30] = "Fortaleza";
    float populacao = 12300000;
    float areaKm2 = 1521;
    float pib = 750;
    int pontosTuristicos = 20;

    printf("=== Carta Super Trunfo ===\n");
    printf("Código da carta: %s\n", codigoCarta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.0f habitantes\n", populacao);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de R$\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
