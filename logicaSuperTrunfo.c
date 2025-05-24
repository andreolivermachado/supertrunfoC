#include <stdio.h>
int main() {
    // Variáveis
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

    //Densidade demográfica:
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

    printf("Escolha um atributo para comparar as cartas: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção: ");
    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("%s venceu com %lu habitantes.\n", cidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu com %lu habitantes.\n", cidade2, populacao2);
            } else {
                printf("Empate! Ambos os países têm %lu habitantes.\n", populacao1);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("%s venceu com %.2f km².\n", cidade1, area1);
            } else if (area2 > area1) {
                printf("%s venceu com %.2f km².\n", cidade2, area2);
            } else {
                printf("Empate! Ambos os países têm %.2f km².\n", area1);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("%s venceu com %.2f milhões de reais.\n", cidade1, pib1);
            } else if (pib2 > pib1) {
                printf("%s venceu com %.2f milhões de reais.\n", cidade2, pib2);
            } else {
                printf("Empate! Ambos os países têm %.2f milhões de reais.\n", pib1);
            }
            break;
        case 4:
            if (turisticos1 > turisticos2) {
                printf("%s venceu com %d pontos turísticos.\n", cidade1, turisticos1);
            } else if (turisticos2 > turisticos1) {
                printf("%s venceu com %d pontos turísticos.\n", cidade2, turisticos2);
            } else {
                printf("Empate! Ambos os países têm %d pontos turísticos.\n", turisticos1);
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("%s venceu com %.2f hab/km².\n", cidade1, densidade1);
            } else if (densidade2 < densidade1) {
                printf("%s venceu com %.2f hab/km².\n", cidade2, densidade2);
            } else {
                printf("Empate! Ambos os países têm %.2f hab/km².\n", densidade1);
            }
            break;  
        case 6:
            if (pibpercapita1 > pibpercapita2) {
                printf("%s venceu com %.2f milhões de reais.\n", cidade1, pibpercapita1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("%s venceu com %.2f milhões de reais.\n", cidade2, pibpercapita2);
            } else {
                printf("Empate! Ambos os países têm %.2f milhões de reais.\n", pibpercapita1);
            }
            break;
        case 7:
            if (superpoder1 > superpoder2) {
                printf("%s venceu com %.2f.\n", cidade1, superpoder1);
            } else if (superpoder2 > superpoder1) {
                printf("%s venceu com %.2f.\n", cidade2, superpoder2);
            } else {
                printf("Empate! Ambos os países têm %.2f.\n", superpoder1);
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    printf("\n\n");

printf("Obigado por jogar!");
return 0;
}
