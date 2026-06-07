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
    float superPoder1;

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
    float superPoder2;

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

    // Cadastro da Carta 2
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

    // Cálculos referentes à carta 1
    densidade1    = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1   = (float)populacao1 + area1 + pib1
                    + (float)turisticos1 + densidade1 + pibPerCapita1;

    // Cálculos referentes à carta 2
    densidade2    = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2   = (float)populacao2 + area2 + pib2
                    + (float)turisticos2 + densidade2 + pibPerCapita2;

    // Exibição das propriedades da carta 1
    printf("\n=================================\n");
    printf("   CARTA 1: %s - %s\n", codigo1, nome1);
    printf("=================================\n");
    printf("Estado      : %c\n",  estado1);
    printf("Populacao        : %d hab.\n",       populacao1);
    printf("Area             : %.2f km2\n",      area1);
    printf("PIB              : R$ %.2f bi\n",    pib1);
    printf("Pontos turisticos: %d\n",            turisticos1);
    printf("Densidade pop.   : %.2f hab/km2\n",  densidade1);
    printf("PIB per capita   : R$ %.2f\n",       pibPerCapita1);
    printf("Super poder      : %.2f\n",          superPoder1);

    // Exibição das propriedades da carta 2
    printf("\n=================================\n");
    printf("   CARTA 2: %s - %s\n", codigo2, nome2);
    printf("=================================\n");
    printf("Estado      : %c\n",  estado2);
    printf("Populacao        : %d hab.\n",       populacao2);
    printf("Area             : %.2f km2\n",      area2);
    printf("PIB              : R$ %.2f bi\n",    pib2);
    printf("Pontos turisticos: %d\n",            turisticos2);
    printf("Densidade pop.   : %.2f hab/km2\n",  densidade2);
    printf("PIB per capita   : R$ %.2f\n",       pibPerCapita2);
    printf("Super poder      : %.2f\n",          superPoder2);

    // Comparação das cartas
    printf("\n=================================\n");
    printf("   RESULTADO DA COMPARACAO\n");
    printf("=================================\n");

    printf("Populacao        : ");
    if (populacao1 > populacao2)
        printf("Carta 1 (%s) vence! Eh gente demais!\n", codigo1);
    else if (populacao2 > populacao1)
        printf("Carta 2 (%s) vence! Eh gente demais!\n", codigo2);
    else
        printf("Empate! Tem gente demais nos dois lados!\n");

    printf("Area             : ");
    if (area1 > area2)
        printf("Carta 1 (%s) vence! Da pra se perder, neh?\n", codigo1);
    else if (area2 > area1)
        printf("Carta 2 (%s) vence! Da pra se perder, neh?\n", codigo2);
    else
        printf("Empate! As duas sao muito grandes, melhor andar com GPS.\n");

    printf("PIB              : ");
    if (pib1 > pib2)
        printf("Carta 1 (%s) vence! Sera que da pra trazer o Iron Maiden agora?\n", codigo1);
    else if (pib2 > pib1)
        printf("Carta 2 (%s) vence! Sera que da pra trazer o Coldplay agora?\n", codigo2);
    else
        printf("Empate! Ambas as cidades têm o mesmo PIB.\n");

    printf("Pontos turisticos: ");
    if (turisticos1 > turisticos2)
        printf("Carta 1 (%s) vence! Lugar demais pra ir, se prepare nao pra ver so\n", codigo1);
    else if (turisticos2 > turisticos1)
        printf("Carta 2 (%s) vence! Lugar demais pra ir, se prepare nao pra ver so\n", codigo2);
    else
        printf("Empate! Nao tem como dizer que nao tem nada pra fazer.\n");

    // Densidade: menor vence 
    printf("Densidade pop.   : ");
    if (densidade1 < densidade2)
        printf("Carta 1 (%s) vence! Quem diria... da ate pra andar sem pisarem na chinela\n", codigo1);
    else if (densidade2 < densidade1)
        printf("Carta 2 (%s) vence! Quem diria... da ate pra andar sem pisarem na chinela\n", codigo2);
    else
        printf("Empate! Foi na trave!\n");

    printf("PIB per capita   : ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 (%s) vence!\n", codigo1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("Carta 2 (%s) vence!\n", codigo2);
    else
        printf("Empate!\n");

    printf("Super poder      : ");
    if (superPoder1 > superPoder2)
        printf("Carta 1 (%s) vence! Seria ela o Goku das cidades?\n", codigo1);
    else if (superPoder2 > superPoder1)
        printf("Carta 2 (%s) vence! Seria ela o Naruto das cidades?\n", codigo2);
    else
        printf("Empate! Ambas sao incriveis!\n");

    printf("=================================\n");

    return 0;
}