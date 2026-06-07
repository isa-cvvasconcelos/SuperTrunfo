#include <stdio.h>

int main() {
    // Definição das variáveis da carta 
    char estado;
    char codigo[4];   // Ex: A01 //
    char nome[50];
    int  populacao;
    float area;
    float pib;
    int  turisticos;

    printf("=================================\n");
    printf("   SUPER TRUNFO - PAISES\n");
    printf("=================================\n\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %s", codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km2): ");
    scanf("%f", &area);

    printf("PIB (em bilhoes R$): ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos);

    // Exibição da carta cadastrada
    printf("\n=================================\n");
    printf("   CARTA CADASTRADA\n");
    printf("=================================\n");
    printf("Estado      : %c\n",  estado);
    printf("Codigo      : %s\n",  codigo);
    printf("Cidade      : %s\n",  nome);
    printf("Populacao        : %d hab.\n",    populacao);
    printf("Area             : %.2f km2\n",   area);
    printf("PIB              : R$ %.2f bi\n", pib);
    printf("Pontos turisticos: %d\n",         turisticos);
    printf("=================================\n");

    return 0;
}