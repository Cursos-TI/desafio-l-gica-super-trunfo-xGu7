#include <stdio.h>
    int main(){

        char pais[20] = "brasil";       
        unsigned long int populacao =  6748000;
        float area = 1182.3;
        float pib = 387.0;
        int ponto = 35;
        float densidade = 0;    
        int opcao;

        char pais2[50] = "Portugal";
        unsigned long int populacao2 = 545923;
        float area2 = 100.05;
        float pib2 = 96.6;
        int ponto2 = 40;
        float densidade2 = 0;

        int atributo1, atributo2, atributo3, atributo4;
        float valor1_atributo1, valor2_atributo1, valor1_atributo2, valor2_atributo2;
        float soma1, soma2;

        //calculos

        densidade = populacao / area;
   
        densidade2 = populacao2 / area2;

        //menu

        printf("Menu principal \n");
        printf("1 - Batalha entre as cartas \n");
        printf("2 - Regras \n");
        printf("3 - Sair \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("Escolha 2 Atributos para a batalha \n");
            printf("escolha o primeiro atributo \n");
            printf("1 - Nome do país \n");
            printf("2 - População \n");
            printf("3 - Área \n");
            printf("4 - PIB \n");
            printf("5 - Número de pontos turísticos \n");
            printf("6 - Densidade demográfica \n");
            printf("Digite uma opção: ");
            scanf("%d", &atributo1);         

            switch (atributo1)
            {
            case 1:
                printf("Carta 1: %s \n", pais);
                printf("Carta 2: %s \n", pais2);
                break;
            case 2:           
                printf("Atributo Escolhido: População \n");
                break;
            case 3: 
                printf("Atributo escolido: Área \n");
                break;
            case 4:
                printf("Atributo escolhido: PIB \n");
                break;
            case 5:
                printf("Atributo escolhido: Número de pontos turísticos \n");
                break;
            case 6:
                printf("Atributo escolhido: Densidade demográfica \n");
                break;
            default:
                printf("Opção invalida \n");
                break;
            }

            printf("escolha o segundo atributo \n");
            printf("1 - Nome do país \n");
            printf("2 - População \n");
            printf("3 - Área \n");
            printf("4 - PIB \n");
            printf("5 - Número de pontos turísticos \n");
            printf("6 - Densidade demográfica \n");
            printf("Digite uma opção: ");
            scanf("%d", &atributo2);

            if (atributo1 == atributo2)
            {
                printf("Voce escolheu o mesmo atributo \n");
            } else {           
            switch (atributo2)
             {
            case 1:
                printf("Carta 1: %s \n", pais);
                printf("Carta 2: %s \n", pais2);
                break;
            case 2:
                printf("Segundo Atributo escolhido: População \n\n");
                break;
            case 3:
                printf("Segundo Atributo escolhido: Área \n\n");
                break;
            case 4:
                printf("Segundo Atributo escolhido: PIB \n\n");
                break;
            case 5:
                printf("Segundo Atributo escolhido: Número de pontos turísticos \n\n");
               break;
            case 6:
                printf("Segundo Atributo escolhido: Densidade demográfica \n\n");
                break;
            default:
                printf("Opção invalida \n");
                break; 
            }
            }
            
            switch (atributo1)
            {
            case 2:
                valor1_atributo1 = populacao; valor2_atributo1 = populacao2;
                break;
            case 3:
                valor1_atributo1 = area; valor2_atributo1 = area2;
                break;
            case 4:
                valor1_atributo1 = pib; valor2_atributo1 = pib2;
                break;
            case 5:
                valor1_atributo1 = ponto; valor2_atributo1 = ponto2;
                break;
            case 6:
                valor1_atributo1 = densidade; valor2_atributo1 = densidade2;
                break;
            default:
                printf("atributo invalido \n");
                break;
            }

            switch (atributo2)
            {
            case 2:
                valor1_atributo2 = populacao; valor2_atributo2 = populacao2;
                break;
            case 3:
                valor1_atributo2 = area; valor2_atributo2 = area2;
                break;
            case 4:
                valor1_atributo2 = pib; valor2_atributo2 = pib2;
                break;
            case 5:
                valor1_atributo2 = ponto; valor2_atributo2 = ponto2;
                break;
            case 6:
                valor1_atributo2 = densidade; valor2_atributo2 = densidade2;
                break;
            default:
                printf("atributo invalido \n");
                break;
            }

            //soma

            soma1 = valor1_atributo1 + valor1_atributo1;
            soma2 = valor2_atributo2 + valor2_atributo2;

            //resultado

            printf("Carta 1: %s // Carta 2: %s \n", pais, pais2);
            switch (atributo1)
            {
            case 2:
                printf("Atributo 1 usado: População \n");
                printf("Valores: %lu x %lu habitantes \n", populacao, populacao2);
                break;
            case 3:
                printf("Atributo 1 usado: Área \n");
                printf("Valores: %.2f km² x %.2f\n \n", area, area2);
                break;
            case 4:
                printf("Atributo 1 usado: PIB \n");
                printf("Valor do Atributo 1: %.2f x  %.2f bilhões \n", pib, pib2);
                break;
            case 5:
                printf("Atributo 1 usado: Número de pontos turísticos \n");
                printf("Valores: %d x %d \n", ponto, ponto2);
                break;
            case 6:
                printf("Atributo 1 usado: Densidade demográfica \n");
                printf("Valores: %.2f x %.2f hab/km² \n", densidade, densidade2);
                break;
            default:
                printf("Atributo invalido \n");
                break;
            }
            switch (atributo2)
            {
            case 2:
                printf("Atributo 2 usado: População \n");
                printf("Valores: %lu x %lu habitantes \n", populacao, populacao2);
                break;
            case 3:
                printf("Atributo 2 usado: Área \n");
                printf("Valores: %.2f km² x %.2f km²\n ", area, area2);
                break;
            case 4:
                printf("Atributo 2 usado: PIB \n");
                printf("Valor do Atributo 1: %.2f x  %.2f bilhões \n", pib, pib2);
                break;
            case 5:
                printf("Atributo 2 usado: Número de pontos turísticos \n");
                printf("Valores: %d x %d \n", ponto, ponto2);
                break;
            case 6:
                printf("Atributo 2 usado: Densidade demográfica \n");
                printf("Valores: %.2f x %.2f hab/km² \n", densidade, densidade2);
                break;
            default:
                printf("Atributo invalido \n");
                break;
            }
            printf("Resultado da soma dos Atributos 1: %.2f \n", soma1);
            printf("Resultado da soma dos Atributos 2: %.2f \n", soma2);

            if (soma1 > soma2)
            {
                printf("Carta 1 venceu! \n");
            } else if (soma1 < soma2)
            {
                printf("Carta 2 venceu! \n");
            } else {
                printf("Empate, tente novamente! \n");
            }
            

            break;
        case 2:
            printf("Escolha uma carta e seja feliz meu amigo! \n");
            break;
        case 3: 
            printf("Sair... \n");
            break;
        default:
            printf("opçao invalida \n");
            break;
        }
        
   
        return 0;
        
    }