#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int qtdPontoTuristico1, qtdPontoTuristico2;

    printf("Insira as informacoes da carta 1\n");

    printf("Insira o estado: ");
    scanf("%s", &estado1);

    printf("Insira o codigo da carta: ");
    scanf("%s", &codigo1);

    printf("Insira a cidade: ");
    scanf("%s", &cidade1);

    printf("Insira a populacao: ");
    scanf("%d", &populacao1);

    printf("Insira a area: ");
    scanf("%f", &area1);

    printf("Insira o pib: ");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &qtdPontoTuristico1);

    printf("\nInsira as informacoes da carta 2\n");

    printf("Insira o estado: ");
    scanf("%s", &estado2);

    printf("Insira o codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Insira a cidade: ");
    scanf("%s", &cidade2);

    printf("Insira a populacao: ");
    scanf("%d", &populacao2);

    printf("Insira a area: ");
    scanf("%f", &area2);

    printf("Insira o pib: ");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &qtdPontoTuristico2);

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %S\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.3f km²\n", area1);
    printf("pib: %.2f bilhoes de reais\n", pib1);
    printf("Numeros de pontos turisticos: %d\n\n", qtdPontoTuristico1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %S\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.3f km²\n", area2);
    printf("pib: %.2f bilhoes de reais\n", pib2);
    printf("Numeros de pontos turisticos: %d\n", qtdPontoTuristico2);
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
