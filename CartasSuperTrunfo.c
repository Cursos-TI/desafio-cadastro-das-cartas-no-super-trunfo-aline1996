#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densiPop1, densiPop2, pibPerCap1, pibPerCap2;
    int qtdPontoTuristico1, qtdPontoTuristico2;

    printf("Insira as informações da primeira carta\n");

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Insira a área: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &qtdPontoTuristico1);

    printf("\nInsira as informações da segunda carta\n");

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &qtdPontoTuristico2);

    densiPop1 = populacao1 / area1;
    pibPerCap1 = pib1 / populacao1;

    densiPop2 = populacao2 / area2;
    pibPerCap2 = pib2 / populacao2;

    printf("\nPAÍSES\n");
    printf("Carta A01\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", qtdPontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB Per Capita: %.2f reais \n\n", pibPerCap1);

    printf("Carta B02\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qtdPontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB Per Capita: %.2f reais", pibPerCap2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}