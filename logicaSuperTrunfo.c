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

    printf("***Agora vamos comparar os atributo das duas cartas:*** \n\n");

      if (populacao1 > populacao2){
        printf("A carta 1 venceu! (População da carta 1: %lu | População da carta 2: %lu)\n", populacao1, populacao2);
    } else {
        printf("A carta 2 venceu! (População da carta 2: %lu | População da carta 1: %lu)\n", populacao2, populacao1);
    }
    if (area1 > area2){
        printf("A carta 1 venceu! (Área da carta 1: %.2f | Área da carta 2: %.2f)\n", area1, area2);
    } else {
        printf("A carta 2 venceu! (Área da carta 2: %.2f | Área da carta 1: %.2f)\n", area2, area1);
    }

    if (pib1 > pib2){
        printf("A carta 1 venceu! (PIB da carta 1: %.2f | PIB da carta 2: %.2f)\n", pib1, pib2);
    } else {
        printf("A carta 2 venceu! (PIB da carta 2: %.2f | PIB da carta 1: %.2f)\n", pib2, pib1);
    }
    if (turisticos1 > turisticos2){
        printf("A carta 1 venceu! (Pontos Turísticos da carta 1: %d | Pontos Turísticos da carta 2: %d)\n", turisticos1, turisticos2);
    } else {
        printf("A carta 2 venceu! (Pontos Turísticos da carta 2: %d | Pontos Turísticos da carta 1: %d)\n", turisticos2, turisticos1);
    }
    if (densidade1 < densidade2){
        printf("A carta 1 venceu! (Densidade Populacional da carta 1: %.2f | Densidade Populacional da carta 2: %.2f)\n", densidade1, densidade2);
    } else {
        printf("A carta 2 venceu! (Densidade Populacional da carta 2: %.2f | Densidade Populacional da carta 1: %.2f)\n", densidade2, densidade1);
    }
    if (pibpercapita1 > pibpercapita2){
        printf("A carta 1 venceu! (PIB per Capita da carta 1: %.2f | PIB per Capita da carta 2: %.2f)\n", pibpercapita1, pibpercapita2);
    } else {
        printf("A carta 2 venceu! (PIB per Capita da carta 2: %.2f | PIB per Capita da carta 1: %.2f)\n", pibpercapita2, pibpercapita1);
    }

printf("Obigado!");
    return 0;
}
