#include <stdio.h> 
#include <string.h> 


typedef struct {
    char estado;                      
    char codigo_carta[10];            
    char nome_cidade[50];             
    unsigned long int populacao;      
    float area_km2;                   
    float pib;                        
    int pontos_turisticos;            
    float densidade_populacional;     
    float pib_per_capita;             
    float super_poder;                
} Carta;


void calcularAtributos(Carta *carta) {
    
    if (carta->area_km2 > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area_km2;
    } else {
        carta->densidade_populacional = 0.0f; 
    }

    
    if (carta->populacao > 0) {
        
        carta->pib_per_capita = (carta->pib * 1000000000.0f) / (float)carta->populacao;
    } else {
        carta->pib_per_capita = 0.0f; 
    }

    // Cálculo do Super Poder
    
    carta->super_poder = (float)carta->populacao + carta->area_km2 + carta->pib +
                         (float)carta->pontos_turisticos + carta->pib_per_capita;

    // Adiciona o inverso da densidade populacional, se válido
    if (carta->densidade_populacional > 0) {
        carta->super_poder += (1.0f / carta->densidade_populacional);
    }
}

// Função para exibir os dados de uma carta
void exibirCarta(const Carta *carta, int numero_carta) {
    printf("\n--- Dados da Carta %d ---\n", numero_carta);
    printf("Estado: %c\n", carta->estado);
    printf("Codigo: %s\n", carta->codigo_carta);
    printf("Cidade: %s\n", carta->nome_cidade);
    printf("Populacao: %lu habitantes\n", carta->populacao);
    printf("Area (km2): %.2f km²\n", carta->area_km2);
    printf("PIB: %.2f bilhoes de R$\n", carta->pib);
    printf("Pontos Turisticos: %d\n", carta->pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta->densidade_populacional);
    printf("PIB per Capita: %.2f R$\n", carta->pib_per_capita);
    printf("Super Poder: %.2f\n", carta->super_poder);
}

// Função para comparar as cartas e exibir os resultados
void compararCartas(const Carta *carta1, const Carta *carta2) {
    printf("\nComparacao de Cartas:\n");

    // População (maior valor vence)
    printf("Populacao: Carta %d venceu (%d)\n", (carta1->populacao > carta2->populacao ? 1 : 2), (carta1->populacao > carta2->populacao ? 1 : 0));

    // Área (maior valor vence)
    printf("Area: Carta %d venceu (%d)\n", (carta1->area_km2 > carta2->area_km2 ? 1 : 2), (carta1->area_km2 > carta2->area_km2 ? 1 : 0));

    // PIB (maior valor vence)
    printf("PIB: Carta %d venceu (%d)\n", (carta1->pib > carta2->pib ? 1 : 2), (carta1->pib > carta2->pib ? 1 : 0));

    // Pontos Turisticos (maior valor vence)
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (carta1->pontos_turisticos > carta2->pontos_turisticos ? 1 : 2), (carta1->pontos_turisticos > carta2->pontos_turisticos ? 1 : 0));

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1->densidade_populacional < carta2->densidade_populacional ? 1 : 2), (carta1->densidade_populacional < carta2->densidade_populacional ? 1 : 0));

    // PIB per Capita (maior valor vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1->pib_per_capita > carta2->pib_per_capita ? 1 : 2), (carta1->pib_per_capita > carta2->pib_per_capita ? 1 : 0));

    // Super Poder (maior valor vence)
    printf("Super Poder: Carta %d venceu (%d)\n", (carta1->super_poder > carta2->super_poder ? 1 : 2), (carta1->super_poder > carta2->super_poder ? 1 : 0));
}

int main() {
    Carta carta1, carta2; 

    // --- CARTA 1 ---
    carta1.estado = 'A';
    strcpy(carta1.codigo_carta, "A01");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12396372UL; 
    carta1.area_km2 = 1521.11f;
    carta1.pib = 828.9f;
    carta1.pontos_turisticos = 50;

    // --- CARTA 2 ---
    carta2.estado = 'B';
    strcpy(carta2.codigo_carta, "B02");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6775561UL; 
    carta2.area_km2 = 1200.27f;
    carta2.pib = 359.8f;
    carta2.pontos_turisticos = 45;

    // Cálculo para ambas as cartas
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Exibição dos dados das cartas
    exibirCarta(&carta1, 1);
    exibirCarta(&carta2, 2);

    // Comparação das cartas
    compararCartas(&carta1, &carta2);

    return 0; 
}
