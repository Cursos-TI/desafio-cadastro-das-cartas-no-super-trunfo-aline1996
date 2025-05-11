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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração de variáveis
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int qtdPontoTuristico1, qtdPontoTuristico2;
    float densiPop1, densiPop2, pibPerCap1, pibPerCap2;
    float superPoder1, superPoder2;

    // Cadastro da Carta 1
    printf("Insira as informações da primeira carta\n");
    printf("Insira a população: ");
    scanf("%lu", &populacao1);
    printf("Insira a área: ");
    scanf("%f", &area1);
    printf("Insira o PIB: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &qtdPontoTuristico1);

    // Cadastro da Carta 2
    printf("\nInsira as informações da segunda carta\n");
    printf("Insira a população: ");
    scanf("%lu", &populacao2);
    printf("Insira a área: ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &qtdPontoTuristico2);

    // Cálculo de atributos derivados
    densiPop1 = (float)populacao1 / area1;
    pibPerCap1 = pib1 * 1000000000.0f / (float)populacao1; // Conversão correta para bilhões
    superPoder1 = populacao1 + area1 + pib1 + qtdPontoTuristico1 + pibPerCap1 + (1.0f / densiPop1);

    densiPop2 = (float)populacao2 / area2;
    pibPerCap2 = pib2 * 1000000000.0f / (float)populacao2; // Conversão correta para bilhões
    superPoder2 = populacao2 + area2 + pib2 + qtdPontoTuristico2 + pibPerCap2 + (1.0f / densiPop2);

    // Exibição dos Dados das Cartas
    printf("\nCARTAS\n");
    
    printf("Carta A01\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", qtdPontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB Per Capita: %.2f reais\n", pibPerCap1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta B02\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qtdPontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCap2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", qtdPontoTuristico1 > qtdPontoTuristico2 ? 1 : 2, qtdPontoTuristico1 > qtdPontoTuristico2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densiPop1 < densiPop2 ? 1 : 2, densiPop1 < densiPop2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCap1 > pibPerCap2 ? 1 : 2, pibPerCap1 > pibPerCap2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}