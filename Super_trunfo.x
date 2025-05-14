#include <stdio.h>
int main() {
    // variaveis
    char estado1[20], estado2[20];
    char codcarta1[5], codcarta2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
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
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
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

    //Super Poder:
    float superpoder1 = (float) populacao1 + (float) pib1 + (float) area1 + (float) turisticos1 + ((float) densidade1 * -1) + (float) pibpercapita1;
    float superpoder2 = (float) populacao2 + (float) pib2 + (float) area2 + (float) turisticos2 + ((float) densidade2 * -1) + (float) pibpercapita2;

    printf("\n Pronto! Os dados da primeira carta são: \n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f milhões de reais \n\n", pibpercapita1);

    printf("Os dados da segunda carta são: \n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita: %.2f milhões de reais \n\n", pibpercapita2);

    /*Comparação entre as cartas
    float compArea = area1 > area2;
    float compPopulacao = populacao1 > populacao2; 
    float compPib = pib1 > pib2;
    float compTuristicos = turisticos1 > turisticos2;
    float compDensidade = densidade1 < densidade2;
    float compPibpercapita = pibpercapita1 > pibpercapita2;
    float compSuperpoder = superpoder1 > superpoder2; */

    printf("***Agora vamos comparar as cartas:*** \n\n");
    //printf("a > b: %d\n", a > b);

    printf("População: Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu: %d\"n", area1 > area2);
    printf("PIB: Carta 1 venceu: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu: %d\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta 1 venceu: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu: %d\n", superpoder1 > superpoder2);


printf("Obigado!");
    return 0;
}
