#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado_1, estado_2;
    char codigo_1[3], codigo_2[3];
    char nome_1[20], nome_2[20];
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_1, densidade_2;
    float pib_per_capita_1, pib_per_capita_2;

    printf("Super Trunfo - Jogo de cartas\n");

    printf("Digite os dados das cartas:\n");

    // Entrada de dados para a carta 1
    printf("Carta 1:\n");
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado_1);
    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo_1);
    printf("Digite o nome da Cidade 1: ");
    scanf(" %[^\n]", nome_1);
    printf("Digite a populacao da Cidade 1: ");
    scanf("%ld", &populacao_1);
    printf("Digite a area da Cidade 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da Cidade 1: ");
    scanf("%f", &pib_1);
    printf("Digite o numero de pontos turisticos da Cidade 1: ");
    scanf("%d", &pontos_turisticos_1);
    densidade_1 = (float) populacao_1 / area_1;
    pib_per_capita_1 = (float) (pib_1 * 1000000000) / populacao_1;
   

    // Entrada de dados para a carta 2
    printf("Carta 2:\n");
    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado_2);
    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo_2);
    printf("Digite o nome da Cidade 2: ");
    scanf(" %[^\n]", nome_2);
    printf("Digite a populacao da Cidade 2: ");
    scanf("%ld", &populacao_2);
    printf("Digite a area da Cidade 2: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da Cidade 2: ");
    scanf("%f", &pib_2);
    printf("Digite o numero de pontos turisticos da Cidade 2: ");
    scanf("%d", &pontos_turisticos_2);
    densidade_2 = (float) populacao_2 / area_2;
    pib_per_capita_2 = (float) (pib_2 * 1000000000) / populacao_2;

    float super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_per_capita_1 + (1/ densidade_1);
    float super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_per_capita_2 + (1/ densidade_2);
    
    // Exibindo os dados das cartas
    printf("\n********Cartas Cadastradas********\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %c%s\n", estado_1, codigo_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %ld\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_1);
    printf("Densidade: %.2f habitantes/km²\n", densidade_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
    printf("\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %c%s\n", estado_2, codigo_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %ld\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_2);
    printf("Densidade: %.2f habitantes/km²\n", densidade_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
    printf("\n");

    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao_1 > populacao_2) ? 1 : 2, (populacao_1 > populacao_2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area_1 > area_2) ? 1 : 2, (area_1 > area_2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib_1 > pib_2) ? 1 : 2, (pib_1 > pib_2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos_1 > pontos_turisticos_2) ? 1 : 2, (pontos_turisticos_1 > pontos_turisticos_2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_1 < densidade_2) ? 1 : 2, (densidade_1 < densidade_2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita_1 > pib_per_capita_2) ? 1 : 2, (pib_per_capita_1 > pib_per_capita_2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder_1 > super_poder_2) ? 1 : 2, (super_poder_1 > super_poder_2) ? 1 : 0);

    return 0;
}