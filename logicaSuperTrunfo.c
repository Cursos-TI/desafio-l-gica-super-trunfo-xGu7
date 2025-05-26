#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int opcao, atributo, selecionar;
    //carta numero 1
    char pais1[50];
    int turismo1;
    float area1, pib1, densidade1, densidadeinv1;
    unsigned long int populacao1;

    //carta numero 2
    char pais2[50];
    int turismo2;
    float area2, pib2, densidade2, densidadeinv2;
    unsigned long int populacao2;

    //menu interativo:
    printf ("Menu Principal\n\n");
    printf ("1-Sair\n");
    printf ("2-Ver regras\n");
    printf ("3-Iniciar jogo\n");
    printf ("Escolha uma opção: \n");
    scanf ("%d", &opcao);

    //menu respostas:
    switch (opcao)
    {
    case 1:
        printf("Voce saiu do jogo.");
    break;
    case 2:
        printf("Voce precisa fornecer os dados necessarios para cada carta, depois iremos\n");
        printf("calcular e a carta com maior valor (exeto densidade), vence.");
    break;
    case 3:
    //gravando o pais:
        printf("Escreva qual o pais da carta 1: \n");
        scanf("%s", pais1);
        printf("Escreva qual o pais da carta 2: \n");
        scanf("%s", pais2);
        printf("Selecione a opção de jogo: \n");
    //calcular atributo junto ou separado:
        printf("1-Calcular todos os atributos \n");
        printf("2-Calcular apenas um atributo por vez \n");
        scanf("%d", &atributo);
    break;
    default:
        printf("Opcao invalida!");
    break;
    }

//calculos dos atributos juntos:
    switch (atributo)
    {
    case 1:
    //dados carta numero 1
        printf("Carta 1:\n\n");
        printf("Qual o valor da população da sua cidade? \n");
        scanf("%lu", &populacao1);

        printf("Quantos pontos turisticos exitem na sua cidade? \n");
        scanf("%d", &turismo1);

        printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
        scanf("%f", &area1);

        printf("Qual o valor do PIB da sua cidade? \n");
        scanf("%f", &pib1);
    
    //dados carta numero 2
        printf("Carta 2:\n\n");
        printf("Qual o valor da população da sua cidade? \n");
        scanf("%lu", &populacao2);

        printf("Quantos pontos turisticos exitem na sua cidade? \n");
        scanf("%d", &turismo2);

        printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
        scanf("%f", &area2);

        printf("Qual o valor do PIB da sua cidade? \n");
        scanf("%f", &pib2);

    // Comparação de Cartas: 

    //imprimir a comparaçao das cartas
    printf("Comparação de Cartas:\n");

    //população
    if(populacao1 > populacao2)
    {
        printf("População: %s venceu com: %lu pessoas.\n", pais1, populacao1);
    }else if (populacao1 < populacao2) {
        printf("População: %s venceu com: %lu pessoas.\n", pais2, populacao2);
    }else {
        printf ("População: empate.\n");
    }
    //area
    if(area1 > area2){
        printf("Area:  %s venceu com: %.2f km².\n", pais1, area1);
    }else if (area1 < area2){
        printf("Area:  %s venceu com: %.2f km².\n", pais2, area2);
    }else {
        printf ("Area: empate.\n");
    }
    //pib
    if(pib1 > pib2){
        printf("PIB:  %s venceu com: %.2f bilhoes de reais.\n", pais1 , pib1);
    }else if (pib1 < pib2){
        printf("PIB:  %s venceu com: %.2f bilhoes de reais.\n", pais2, pib2);
    }else {
        printf ("Pib: empate.\n");
    }
    //pontos de turismo
    if(turismo1 > turismo2){
        printf("Pontos turisticos:  %s venceu com: %d pontos.\n", pais1, turismo1);
    }else if (turismo1 < turismo2) {
        printf("Pontos turisticos:  %s venceu com: %d pontos.\n", pais2, turismo2);
    }else {
        printf ("Turismo: empate.\n");
    }
    //densidade populacional
    //calculos densidade carta 1 
    densidade1 = (float)populacao1 / area1;
//calculos densidade carta 2 
    densidade2 = (float)populacao2 / area2;
    if(densidade1 < densidade2){
        printf("Densidade:  %s venceu com: %.2f hab/km².\n", pais1, densidade1);
    }else if (densidade1 > densidade2) {
        printf("Densidade:  %s venceu com: %.2f hab/km².\n", pais2, densidade2);
    }else {
        printf ("Densidade: empate.\n");
    }
break;
    
case 2:
    printf("1-População \n");
    printf("2-Turismo \n");
    printf("3-Area \n");
    printf("4-Pib \n");
    printf("5-densidade \n");
    scanf("%d", &selecionar);
break;
default:
    printf("Opcao invalida!\n");
break;
}
switch (selecionar)
{
case 1:
//população
    printf("Digite a populaçao da carta 1:\n");
    scanf("%lu", &populacao1);
    printf("Digite a populaçao da carta 2:\n");
    scanf("%lu", &populacao2);
//população vencedor
if(populacao1 > populacao2){
    printf("População: %s venceu com: %lu pessoas.\n", pais1, populacao1);
}else if (populacao1 < populacao2) {
    printf("População: %s venceu com: %lu pessoas.\n", pais2, populacao2);
} else {
    printf ("População: empate.\n");
}
break;
case 2:
//turismo
    printf("Digite a quantidade de pontos turisticos da carta 1:\n");
    scanf("%d", &turismo1);
    printf("Digite a quantidade de pontos turisticos da carta 2:\n");
    scanf("%d", &turismo2);
//turismo vencedor
if(turismo1 > turismo2){
    printf("Pontos turisticos:  %s venceu com: %d pontos.\n", pais1, turismo1);
}else if (turismo1 < turismo2) {
    printf("Pontos turisticos:  %s venceu com: %d pontos.\n", pais2, turismo2);
}else {
    printf ("Pontos turisticos: empate.\n");
}
break;
case 3:
//area
    printf("Digite a area em km² da carta 1:\n");
    scanf("%f", &area1);
    printf("Digite a area em km² da carta 2:\n");
    scanf("%f", &area2);
//area vencedor
if(area1 > area2){
    printf("Area:  %s venceu com: %.2f km².\n", pais1, area1);
}else if (area1 < area2){
    printf("Area:  %s venceu com: %.2f km².\n", pais2, area2);
}else {
    printf ("Area: empate.\n");
}
break;
case 4:
//area
    printf("Digite o valor PIB da carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite o valor PIB da carta 2:\n");
    scanf("%f", &pib2);
//pib vencedor
if(pib1 > pib2){
    printf("PIB:  %s venceu com: %.2f bilhoes de reais.\n", pais1 , pib1);
}else if (pib1 < pib2){
    printf("PIB:  %s venceu com: %.2f bilhoes de reais.\n", pais2, pib2);
}else {
    printf ("Pib: empate.\n");
}
break;
case 5:
//densidade
    printf("Digite o valor população da carta 1:\n");
    scanf("%lu", &populacao1);
    printf("Digite o valor área em km² da carta 1:\n");
    scanf("%f", &area1);

    printf("Digite o valor população da carta 2:\n");
    scanf("%lu", &populacao2);
    printf("Digite o valor área em km² da carta 2:\n");
    scanf("%f", &area2);
//calculo densidade
densidade1 = (float)populacao1 / area1;
densidade2 = (float)populacao2 / area2;
//densidade vencedor
if(densidade1 < densidade2){
    printf("Densidade: %s venceu com: %.2f hab/km².\n", pais1, densidade1);
} else if (densidade1 > densidade2) {
    printf("Densidade: %s venceu com: %.2f hab/km².\n", pais2, densidade2);
} else {
    printf("Densidade: empate.\n");
}
break;
default:
    printf("Opção invalida\n");
break;
}

return 0;
}
