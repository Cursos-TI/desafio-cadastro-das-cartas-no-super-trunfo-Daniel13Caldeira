#include <stdio.h>
#include <stdlib.h>

int main()
{
    //cria variáveis
    char estado1, estado2, codigo1[3], nomeCidade1[50], codigo2[3], nomeCidade2[50];
    int populacao1,nPontosTuristicos1, populacao2,nPontosTuristicos2;
    float area1, pib1, area2, pib2;

    //entra com os dados da carta 1
    printf("Cadastro da carta 1\n\n");
    printf("Digite o estado da carta: ");
    scanf("%c",&estado1);
    printf("\nDigite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("\nDigite o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);
    printf("\nDigite a area da cidade: ");
    scanf("%f", &area1);
    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("\nDigite o numero de pontos turisticos da cidade: ");
    scanf("%d", &nPontosTuristicos1);

    //entra com os dados da carta 2
    printf("\nCadastro da carta 2\n\n");
    printf("Digite o estado da carta: ");
    scanf(" %c",&estado2);
    printf("%c",estado2);
    printf("\nDigite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("\nDigite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("\nDigite a area da cidade: ");
    scanf("%f", &area2);
    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("\nDigite o numero de pontos turisticos da cidade: ");
    scanf("%d", &nPontosTuristicos2);

    //calcula densidade populacional e PIB per capto
    float densidadePopulacional1, pibPerCapto1, densidadePopulacional2, pibPerCapto2;
    densidadePopulacional1 =  populacao1/area1;
    densidadePopulacional2 =  populacao2/area2;
    pibPerCapto1 = pib1/populacao1;
    pibPerCapto2 = pib2/populacao2;

    //calcula super poder
    float superPoder1, superPoder2;
    superPoder1 = populacao1 + area1 + pib1 + nPontosTuristicos1 + pibPerCapto1 + (float)(1/densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + nPontosTuristicos2 + pibPerCapto2 + (float)(1/densidadePopulacional2);

    //printa o menu interativo
    printf("\n\nComparacao de cartas:\nEscolha o primeiro atributo que quer comparar:\n1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de pontos turisticos\n5 - Densidade demografica\n6 - PIB per capta\n7 - Super poder\n\n");
    int opcao, opcao2;
    float total1 = 0, total2 = 0;
    const char* menu;
    scanf("%d",&opcao);

    printf("Escolha o segundo atributo que quer comparar:\n");
    menu = opcao != 1 ? "1 - Populacao\n" : ""; //só printa na tela se a opcao não tiver sido escolhida ainda
    printf("%s", menu);
    menu = opcao != 2 ? "2 - Area\n" : "";
    printf("%s", menu);
    menu = opcao != 3 ? "3 - PIB\n" : "";
    printf("%s", menu);
    menu = opcao != 4 ? "4 - Numero de pontos turisticos\n" : "";
    printf("%s", menu);
    menu = opcao != 5 ? "5 - Densidade demografica\n" : "";
    printf("%s", menu);
    menu = opcao != 6 ? "6 - PIB per capta\n" : "";
    printf("%s", menu);
    menu = opcao != 7 ? "7 - Super poder\n" : "";
    printf("%s", menu);

    scanf("%d",&opcao2);

    switch(opcao){
        case 1:{
            total1 += populacao1; //soma o valor numérico à pontuação total da rodada para cada carta
            total2 += populacao2;
            printf("\n\n(atributo: Populacao)\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n",nomeCidade1,populacao1,nomeCidade2,populacao2);
        }
        break;
        case 2:{
            total1 += area1;
            total2 += area2;
            printf("\n\n(atributo: Area)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,area1,nomeCidade2,area2);
        }
        break;
        case 3:{
            total1 += pib1;
            total2 += pib2;
            printf("\n\n(atributo: PIB)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,pib1,nomeCidade2,pib2);
        }
        break;
        case 4:{
            total1 += nPontosTuristicos1;
            total2 += nPontosTuristicos2;
            printf("\n\n(atributo: Numero de pontos turisticos)\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n",nomeCidade1,nPontosTuristicos1,nomeCidade2,nPontosTuristicos2);
        }
        break;
        case 5:{
            total1 += (1/densidadePopulacional1);
            total2 += (1/densidadePopulacional2);
            printf("\n\n(atributo: Densidade populacional)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,1/densidadePopulacional1,nomeCidade2,1/densidadePopulacional2);
        }
        break;
        case 6:{
            total1 += pibPerCapto1;
            total2 += pibPerCapto2;
            printf("\n\n(atributo: PIB per capta)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,pibPerCapto1,nomeCidade2,pibPerCapto2);

        }
        break;
        case 7:{
            total1 += superPoder1;
            total2 += superPoder2;
            printf("\n\n(atributo: Super poder)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,superPoder1,nomeCidade2,superPoder2);
        }
        break;
        default:{
            printf("Opcao invalida");
        }
    }

    if(opcao == opcao2){//verifica se a mesma opcao foi escolhida 2 vezes
        printf("Opcao invalida");
    }else{
        switch(opcao2){
            case 1:{
                total1 += populacao1;
                total2 += populacao2;
                printf("\n\n(atributo: Populacao)\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n",nomeCidade1,populacao1,nomeCidade2,populacao2);
            }
            break;
            case 2:{
                total1 += area1;
                total2 += area2;
                printf("\n\n(atributo: Area)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,area1,nomeCidade2,area2);
            }
            break;
            case 3:{
                total1 += pib1;
                total2 += pib2;
                printf("\n\n(atributo: PIB)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,pib1,nomeCidade2,pib2);
            }
            break;
            case 4:{
                total1 += nPontosTuristicos1;
                total2 += nPontosTuristicos2;
                printf("\n\n(atributo: Numero de pontos turisticos)\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n",nomeCidade1,nPontosTuristicos1,nomeCidade2,nPontosTuristicos2);
            }
            break;
            case 5:{
                total1 += (1/densidadePopulacional1);
                total2 += (1/densidadePopulacional2);
                printf("\n\n(atributo: Densidade populacional)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,1/densidadePopulacional1,nomeCidade2,1/densidadePopulacional2);
            }
            break;
            case 6:{
                total1 += pibPerCapto1;
                total2 += pibPerCapto2;
                printf("\n\n(atributo: PIB per capta)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,pibPerCapto1,nomeCidade2,pibPerCapto2);

            }
            break;
            case 7:{
                total1 += superPoder1;
                total2 += superPoder2;
                printf("\n\n(atributo: Super poder)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n",nomeCidade1,superPoder1,nomeCidade2,superPoder2);
            }
            break;
            default:{
                printf("Opcao invalida\n");
            }
        }
    }

   //comparação das cartas e resultado da rodada
   if(total1 > total2){
        printf ("\nCarta 1 venceu com %.2f pontos contra %.2f pontos da carta 2.",total1,total2);
   }else{
        if(total2 > total1){
            printf ("\nCarta 2 venceu com %.2f pontos contra %.2f pontos da carta 1.",total2,total1);
        }else{
            printf("\nEmpate! Ambas as cartas atingiram %.2f pontos.",total1);
        }
   }

    return 0;
}
