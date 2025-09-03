#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Nível Mestre!\n");

    // Carta 1
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Carta 2
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada Carta 1
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);

    // Entrada Carta 2
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite a população da segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibir carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões/hab\n", pib_per_capita1);
    printf("Super Poder: %.6f\n", super_poder1);

    // Exibir carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões/hab\n", pib_per_capita2);
    printf("Super Poder: %.6f\n", super_poder2);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    printf("\n--- Resultados das Comparações ---\n");
    printf("População: %d\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);
    printf("Pontos turísticos: %d\n", (pontos1 > pontos2) ? 1 : 0);
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2) ? 1 : 0); // menor vence
    printf("PIB per Capita: %d\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
    printf("Super Poder: %d\n", (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}