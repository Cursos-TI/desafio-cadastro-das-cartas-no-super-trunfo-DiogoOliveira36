#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
 
    // Carta 1
    printf("Informe o estado da Carta 1 (A-Z): ");
    scanf(" %c", &estado1);
    
    printf("Informe o código da Carta 1 (ex. A01): ");
    scanf("%3s", &codigo1);
    
    getchar(); // Consome a quebra de linha antes de fgets

    printf("Informe o nome da cidade da Carta 1: ");
    fgets(cidade1, 50, stdin);
    
    printf("Informe a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade da Carta 1 em Km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade da Carta 1 em bilhões de reais: ");
    scanf("%f", &pib1); 

    printf("Informe o número de Pontos Turísticos da cidade da Carta 1: ");
    scanf("%d", &pontos_turisticos1);


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n\n", cidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números Pontos Turísticos: %d\n", pontos_turisticos1);

    //Carta 2
    printf("Informe o estado da Carta 2 (A-Z): ");
    scanf("%s", &estado2);

    printf("Informe o código da Carta 2 (ex. A01): ");
    scanf("%s", &codigo2);    
   
    getchar(); // Consome a quebra de linha antes de fgets

    printf("Informe o nome da cidade da Carta 2: ");
    fgets(cidade2, 50, stdin);

    printf("Informe a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade da Carta 2 em Km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade da Carta 2 em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Informe o número de Pontos Turísticos da cidade da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n\n", cidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %f Km²\n",area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Ponto Turístico: %d\n", pontos_turisticos1);

    return 0;
}
