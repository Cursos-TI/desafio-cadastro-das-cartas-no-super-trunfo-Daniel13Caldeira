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


    //printa a carta 1
    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f",estado1,codigo1,nomeCidade1,populacao1,area1,pib1,nPontosTuristicos1,densidadePopulacional1,pibPerCapto1);

    //Printa a carta 2
    printf("\n\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f",estado2,codigo2,nomeCidade2,populacao2,area2,pib2,nPontosTuristicos2,densidadePopulacional2,pibPerCapto2);

    return 0;
}
