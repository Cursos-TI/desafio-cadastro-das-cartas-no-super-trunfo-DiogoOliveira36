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
    int populacao1, polulacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
printf("Ola!");
    // Carta 1
    printf("Informe o estado da Carta 1 (A-H): \n");
    scanf("%s", &estado1);
    
    printf("Informe o código da Carta 1 (ex. A01): \n");
    scanf("%s", &codigo1);
    
    printf("Informe o nome da cidade da Carta 1: \n");
    scanf("%s", &cidade1);
    
    printf("Informe a população da cidade da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade da Carta 1: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade da Carta 1: \n");
    scanf("%f", &pib1); 

    printf("Informe o Ponto Turístico da cidade da Carta 1: \n");
    scanf("%d", &pontos_turisticos1);




    return 0;
}
