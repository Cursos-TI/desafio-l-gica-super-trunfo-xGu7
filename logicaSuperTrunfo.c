#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    //carta numero 1
    char estado1[50], cidade1[50], codigo1[10];
    int turismo1;
    float area1, pib1, densidade1, pibpc1, poder1, densidadeinv1;
    unsigned long int populacao1;

    //carta numero 2
    char estado2[50], cidade2[50], codigo2[10];
    int turismo2;
    float area2, pib2, densidade2, pibpc2, poder2, densidadeinv2;
    unsigned long int populacao2;
    
    // Cadastro das Cartas:

    //dados carta numero 1
    printf("CARTA NUMERO 1 \n\nEscreva qual o nome do seu estado: \n");
    scanf("%s", estado1);

    printf("Qual o nome da sua cidade? \n");
    scanf("%s", cidade1);

    printf("Digite o seu codigo formado pela inicial do seu estado seguindo de 01 numero: \n");
    scanf("%s", codigo1);

    printf("Qual o valor da população da sua cidade? \n");
    scanf("%lo", &populacao1);

    printf("Quantos pontos turisticos exitem na sua cidade? \n");
    scanf("%d", &turismo1);

    printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
    scanf("%f", &area1);

    printf("Qual o valor do PIB da sua cidade? \n");
    scanf("%f", &pib1);
    
    //dados carta numero 2
    printf("CARTA NUMERO 2 \n\nEscreva qual o nome do seu estado: \n");
    scanf("%s", estado2);

    printf("Qual o nome da sua cidade? \n");
    scanf("%s", cidade2);

    printf("Digite o seu codigo formado pela inicial do seu estado seguindo de 01 numero: \n");
    scanf("%s", codigo2);

    printf("Qual o valor da população da sua cidade? \n");
    scanf("%lo", &populacao2);

    printf("Quantos pontos turisticos exitem na sua cidade? \n");
    scanf("%d", &turismo2);

    printf("Qual o tamanho da area da sua cidade em kilometros quadrados? \n");
    scanf("%f", &area2);

    printf("Qual o valor do PIB da sua cidade? \n");
    scanf("%f", &pib2);

    //calculos carta 1 
    densidade1 = (float)populacao1 / area1;
    pibpc1 = (float)pib1 / populacao1;

    //calculos carta 2 
    densidade2 = (float)populacao2 / area2;
    pibpc2 = (float)pib2 / populacao2;

    //super poder carta 1
    densidadeinv1 = 1 / densidade1;
    poder1 = (populacao1 + area1 + pib1 + turismo1 + pibpc2 + densidadeinv1);

    //superpoder carta 2
    densidadeinv2 = 1 / densidade2;
    poder2 = (populacao2 + area2 + pib2 + turismo2 + pibpc2 + densidadeinv2);

    // Comparação de Cartas: 

    //imprimir a comparaçao das cartas
    printf("Comparação de Cartas:\n");

    //população
    if(populacao1 > populacao2){
        printf("População: %s %s venceu com: %lo pessoas.\n", cidade1, estado1, populacao1);
    } else {
        printf("População: %s %s venceu com: %lo pessoas.\n", cidade2, estado2, populacao2);
    }
    //area
    if(area1 > area2){
        printf("Area:  %s %s venceu com: %.2f km².\n", cidade2, estado2, area1);
    } else {
        printf("Area:  %s %s venceu com: %.2f km².\n", cidade1, estado1, area2);
    }
    //pib
     if(pib1 > pib2){
        printf("PIB:  %s %s venceu com: %.2f bilhoes de reais.\n", cidade1, estado1, pib1);
    } else {
        printf("PIB:  %s %s venceu com: %.2f bilhoes de reais.\n", cidade2, estado2, pib2);
    }
    //pontos de turismo
    if(turismo1 > turismo2){
        printf("Pontos turisticos:  %s %s venceu com: %d pontos.\n", cidade1, estado1, turismo1);
    } else {
        printf("Pontos turisticos:  %s %s venceu com: %d pontos.\n", cidade2, estado2, turismo2);
    }
    //densidade populacional
    if(densidade1 < densidade2){
        printf("Densidade:  %s %s venceu com: %.2f hab/km².\n", cidade1, estado1, densidade1);
    } else {
        printf("Densidade:  %s %s venceu com: %.2f hab/km².\n", cidade2, estado2, densidade2);
    }
    //pib per capita
     if(pibpc1 > pibpc2){
        printf("PIB per capita:  %s %s venceu com: %.2f reais.\n", cidade1, estado1, pibpc1);
    } else {
        printf("PIB per capita:  %s %s venceu com: %.2f reais.\n", cidade2, estado2, pibpc2);
    }
    //super poder
    if(poder1 > poder2){
        printf("Super poder:  %s %s venceu com: %.2f pontos.\n", cidade1, estado1, poder1);
    } else {
        printf("Super poder:  %s %s venceu com: %.2f pontos.\n", cidade1, estado1, poder2);
    }
    

    return 0;
}
