#include <stdio.h>

int main (){

// Declaração das variáveis
char pais1[20], pais2[20];
float area1, area2, pib1, pib2;
int populacao1, populacao2, turisticos1, turisticos2, opcao;

printf(" ### Novo Super Trunfo ###\n\n");
printf("Digite o nome do primeiro país: ");
scanf("%s", pais1);
printf("Digite a população do primeiro país: ");
scanf("%d", &populacao1);
printf("Digite a área do primeiro país: ");
scanf("%f", &area1);
printf("Digite o PIB do primeiro país: ");
scanf("%f", &pib1);
printf("Digite o número de pontos turísticos do primeiro país: ");
scanf("%d", &turisticos1);
printf("\n");
// Cadastro do segundo país
printf("Agora, vamos cadastrar o segundo país.\n\n");
printf("Digite o nome do segundo país: ");
scanf("%s", pais2);
printf("Digite a população do segundo país: ");
scanf("%d", &populacao2);
printf("Digite a área do segundo país: ");
scanf("%f", &area2);
printf("Digite o PIB do segundo país: ");
scanf("%f", &pib2);
printf("Digite o número de pontos turísticos do segundo país: ");
scanf("%d", &turisticos2);

//Cálculo da densidade demográfica

float densidade1 = (float) populacao1 / area1;
float densidade2 = (float) populacao2 / area2;

printf(" *** Agora você vai escolhar um atributo para comparar os países ***\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

// Verificação da opção escolhida e comparação dos atributos
switch (opcao){
    case 1:
        if (populacao1 > populacao2){
            printf("%s venceu com %d habitantes.\n", pais1, populacao1);
        } else if (populacao2 > populacao1){
            printf("%s venceu com %d habitantes.\n", pais2, populacao2);
        } else {
            printf("Empate! Ambos os países têm %d habitantes.\n", populacao1);
        }
        break;
    case 2:
        if (area1 > area2){
            printf("%s venceu com %.2f km².\n", pais1, area1);
        } else if (area2 > area1){
            printf("%s venceu com %.2f km².\n", pais2, area2);
        } else {
            printf("Empate! Ambos os países têm %.2f km².\n", area1);
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("%s venceu com R$ %.2f bilhões.\n", pais1, pib1);
        } else if (pib2 > pib1){
            printf("%s venceu com R$ %.2f bilhões.\n", pais2, pib2);
        } else {
            printf("Empate! Ambos os países têm R$ %.2f bilhões.\n", pib1);
        }
        break;
    case 4:
        if (turisticos1 > turisticos2){
            printf("%s venceu com %d pontos turísticos.\n", pais1, turisticos1);
        } else if (turisticos2 > turisticos1){
            printf("%s venceu com %d pontos turísticos.\n", pais2, turisticos2);
        } else {
            printf("Empate! Ambos os países têm %d pontos turísticos.\n", turisticos1);
        }
        break;
    case 5: 
        if (densidade1 < densidade2){
            printf("%s venceu com %.2f habitantes/km².\n", pais1, densidade1);
        } else if (densidade2 < densidade1){
            printf("%s venceu com %.2f habitantes/km².\n", pais2, densidade2);
        } else {
            printf("Empate! Ambos os países têm %.2f habitantes/km².\n", densidade1);
        }
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }
printf("Obrigado por jogar!\n");
return 0;
}
