#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[100], nome2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Leitura dos dados da primeira carta
    printf("Informe o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Informe o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade da Carta 1: ");
    scanf("%s", nome1);
    printf("Informe a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade da Carta 1 em km²: ");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade da Carta 1 em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &pontos_turisticos1);
    
    // Leitura dos dados da segunda carta
    printf("\nInforme o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o código da Carta 2 (ex: A01): ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade da Carta 2: ");
    scanf("%s", nome2);
    printf("Informe a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade da Carta 2 em km²: ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade da Carta 2 em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição das informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}