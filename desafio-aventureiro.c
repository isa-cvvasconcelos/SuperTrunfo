#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char  estado1;
    char  codigo1[4];
    char  nome1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   turisticos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da carta 2
    char  estado2;
    char  codigo2[4];
    char  nome2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   turisticos2;
    float densidade2;
    float pibPerCapita2;

    printf("=================================\n");
    printf("   SUPER TRUNFO - PAISES\n");
    printf("=================================\n\n");

    // Cadastro da Carta 1
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes R$): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    // Cadastro da carta 2
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B01): ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes R$): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    // Cálculos de densidade e PIB per capita
    densidade1    = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    densidade2    = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Exibição das propriedades da carta 1
    printf("\n=================================\n");
    printf("   CARTA 1: %s - %s\n", codigo1, nome1);
    printf("=================================\n");
    printf("Estado      : %c\n",  estado1);
    printf("Codigo      : %s\n",  codigo1);
    printf("Cidade      : %s\n",  nome1);
    printf("---------------------------------\n");
    printf("PROPRIEDADES BASICAS\n");
    printf("Populacao        : %d hab.\n",    populacao1);
    printf("Area             : %.2f km2\n",   area1);
    printf("PIB              : R$ %.2f bi\n", pib1);
    printf("Pontos turisticos: %d\n",         turisticos1);
    printf("---------------------------------\n");
    printf("PROPRIEDADES CALCULADAS\n");
    printf("Densidade pop.   : %.2f hab/km2\n", densidade1);
    printf("PIB per capita   : R$ %.2f\n",      pibPerCapita1);
    printf("=================================\n");

    // Exibição das propriedades da carta 2
    printf("\n=================================\n");
    printf("   CARTA 2: %s - %s\n", codigo2, nome2);
    printf("=================================\n");
    printf("Estado      : %c\n",  estado2);
    printf("Codigo      : %s\n",  codigo2);
    printf("Cidade      : %s\n",  nome2);
    printf("---------------------------------\n");
    printf("PROPRIEDADES BASICAS\n");
    printf("Populacao        : %d hab.\n",    populacao2);
    printf("Area             : %.2f km2\n",   area2);
    printf("PIB              : R$ %.2f bi\n", pib2);
    printf("Pontos turisticos: %d\n",         turisticos2);
    printf("---------------------------------\n");
    printf("PROPRIEDADES CALCULADAS\n");
    printf("Densidade pop.   : %.2f hab/km2\n", densidade2);
    printf("PIB per capita   : R$ %.2f\n",      pibPerCapita2);
    printf("=================================\n");

    return 0;
}