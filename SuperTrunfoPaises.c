#include <stdio.h>

int main (){

// Declaração das variáveis
char pais1[20], pais2[20];
float area1, area2, pib1, pib2;
int populacao1, populacao2, turisticos1, turisticos2, opcao1, opcao2, resultado1, resultado2, total;

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

printf(" *** Agora você vai escolhe o primeiro atributo para comparar os países ***\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao1);

// Verificação da opção escolhida e comparação dos atributos
switch (opcao1){
    case 1:
        if (populacao1 > populacao2){
            resultado1 = 1;
        } else {
           resultado2 = 1;
        }
        break;
    case 2:
        if (area1 > area2){
            resultado1 = 1;
        } else {
           resultado2 = 1;
        }
        break;
    case 3:
        if (pib1 > pib2){
            resultado1 = 1;
        } else {
           resultado2 = 1;
        }
        break;
    case 4:
        if (turisticos1 > turisticos2){
            resultado1 = 1;
        } else {
           resultado2 = 1;
        }
        break;
    case 5: 
        if (densidade1 < densidade2){
            resultado1 = 1;
        } else {
           resultado2 = 1;
        }
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }
    printf("Agora você vai escolher o segundo atributo para comparar os países.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao2);

if (opcao1 == opcao2) {
    printf("Você escolheu o mesmo atributo duas vezes. Por favor, escolha atributos diferentes.\n");
    printf("Escolha novamente o segundo atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao2);
}

else {

    switch (opcao2)
    {
        case 1:
        if (populacao1 > populacao2){
            resultado1 = resultado1 + 1;
        } else {
           resultado2 = resultado2 + 1;
        }
        break;
    case 2:
        if (area1 > area2){
            resultado1 = resultado1 + 1;
        } else {
           resultado2 = resultado2 + 1;
        }
        break;
    case 3:
        if (pib1 > pib2){
            resultado1 = resultado1 + 1;
        } else {
           resultado2 = resultado2 + 1;
        }
        break;
    case 4:
        if (turisticos1 > turisticos2){
            resultado1 = resultado1 + 1;
        } else {
           resultado2 = resultado2 + 1;
        }
        break;
    case 5: 
        if (densidade1 < densidade2){
            resultado1 = resultado1 + 1;
        } else {
           resultado2 = resultado2 + 1;
        }
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }}

printf("\n### Resultados da comparação ###\n");
if (resultado1 > resultado2) {
    printf("O país %s venceu!\n", pais1);
} else if (resultado2 > resultado1) {
    printf("O país %s venceu!\n", pais2);
} else {
    printf("Empate! Ambos os países têm %d pontos.\n", resultado1);
}

    printf("Obrigado por jogar!\n");
return 0;
}
