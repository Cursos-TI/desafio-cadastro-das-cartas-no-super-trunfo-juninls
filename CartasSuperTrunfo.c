#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    // Variáveis da carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos2);

    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
