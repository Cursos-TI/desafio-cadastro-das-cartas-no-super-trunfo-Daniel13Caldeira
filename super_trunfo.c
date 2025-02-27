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
    printf("\n\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2)*-1+2,populacao1 > populacao2);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2)*-1+2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2)*-1+2,pib1 > pib2);
    printf("Pontos turisticos: Carta %d venceu (%d)\n",(nPontosTuristicos1 > nPontosTuristicos2)*-1+2,nPontosTuristicos1 > nPontosTuristicos2);
    printf("Densidade populacional: Carta %d venceu (%d)\n",(densidadePopulacional1 < densidadePopulacional2)*-1+2,densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per capta: Carta %d venceu (%d)\n",(pibPerCapto1 > pibPerCapto2)*-1+2,pibPerCapto1 > pibPerCapto2);
    printf("Super Poder: Carta %d venceu (%d)\n",(superPoder1 > superPoder2)*-1+2,superPoder1 > superPoder2);

    return 0;
}
