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

    //printa a carta 1
    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f",estado1,codigo1,nomeCidade1,populacao1,area1,pib1,nPontosTuristicos1,densidadePopulacional1,pibPerCapto1);

    //Printa a carta 2
    printf("\n\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f",estado2,codigo2,nomeCidade2,populacao2,area2,pib2,nPontosTuristicos2,densidadePopulacional2,pibPerCapto2);

    //compara as cartas
    printf("Comparacao de cartas:\nEscolha o atributo que quer comparar\n1 - Nome\n2 - Populacao\n3 - Area\n4 - PIB\n5 - Numero de pontos turisticos\n6 - Densidade demografica");
    int opcao;
    scanf("%d",&opcao);

    switch(opcao){
        case 1:{
            printf("Carta 1: %s\nCarta 2: %s",nomeCidade1,nomeCidade2);
        }
        break
        case 2:{
            printf("\n\nComparacao de Cartas: (atributo: Populacao)\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: ",nomeCidade1,populacao1,nomeCidade2,populacao2);
            if(populacao1>populacao2){
                printf("Carta 1 (%s) venceu!",nomeCidade1);
            }else{
                if(populacao2 > populacao1){
                    printf("Carta 2 (%s) venceu!",nomeCidade2);
                }else{
                    printf("Empate!");
                }
            }
        }
        break;
        case 3:{
            printf("\n\nComparacao de Cartas: (atributo: Area)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: ",nomeCidade1,area1,nomeCidade2,area2);
            if(area1>area2){
                printf("Carta 1 (%s) venceu!",nomeCidade1);
            }else{
                if(area2 > area1){
                    printf("Carta 2 (%s) venceu!",nomeCidade2);
                }else{
                    printf("Empate!");
                }
            }
        }
        break;
        case 4:{
            printf("\n\nComparacao de Cartas: (atributo: PIB)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: ",nomeCidade1,pib1,nomeCidade2,pib2);
            if(pib1>pib2){
                printf("Carta 1 (%s) venceu!",nomeCidade1);
            }else{
                if(pib2 > pib1){
                    printf("Carta 2 (%s) venceu!",nomeCidade2);
                }else{
                    printf("Empate!");
                }
            }
        }
        break;
        case 5:{
            printf("\n\nComparacao de Cartas: (atributo: Numero de pontos turisticos)\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: ",nomeCidade1,nPontosTuristicos1,nomeCidade2,nPontosTuristicos2);
            if(nPontosTuristicos1>nPontosTuristicos2){
                printf("Carta 1 (%s) venceu!",nomeCidade1);
            }else{
                if(nPontosTuristicos2 > nPontosTuristicos1){
                    printf("Carta 2 (%s) venceu!",nomeCidade2);
                }else{
                    printf("Empate!");
                }
            }
        }
        break;
        case 6:{
            printf("\n\nComparacao de Cartas: (atributo: Densidade populacional)\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: ",nomeCidade1,densidadePopulacional1,nomeCidade2,densidadePopulacional2);
            if(densidadePopulacional2>densidadePopulacional1){
                printf("Carta 1 (%s) venceu!",nomeCidade1);
            }else{
                if(densidadePopulacional1 > densidadePopulacional2){
                    printf("Carta 2 (%s) venceu!",nomeCidade2);
                }else{
                    printf("Empate!");
                }
            }
        }
        break;
        default:{
            printf("Opcao invalida");
        }
    }
    return 0;
}
