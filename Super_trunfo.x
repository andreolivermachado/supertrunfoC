#include <stdio.h>
int main() {
    // variaveis
    char estado1[20], estado2[20];
    char codcarta1[5], codcarta2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;


    printf("Digite o estado da primeira carta: \n");
    scanf("%s", estado1);
    printf("Digite o código da primeira carta (Inicial do estado + número da carta. Ex: MG09): \n");
    scanf("%s", codcarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%i", &turisticos1);

    printf("\n Agora você vai digitar os dados da próxima carta. \n\n");

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta (Inicial do estado + número da carta. Ex: MG09): \n");
    scanf("%s", codcarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%i", &turisticos2);

    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita1 = (float) pib1 / populacao1;
    float pibpercapita2 = (float) pib2 / populacao2;

    printf("\n Pronto! Os dados da primeira carta são: \n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f milhões de reais \n\n", pibpercapita1);

    printf("Os dados da segunda carta são: \n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita: %.2f milhões de reais \n\n", pibpercapita2);

printf("Obigado!");
    return 0;
}
