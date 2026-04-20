#include <stdio.h>

int main(){
    // Cartas
    char estado[50], estado2[50];
    char codigo[10], codigo2[10];
    char nome_cidade[50], nome_cidade2[50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int num_pontos, num_pontos2;
    float densidade, percapta, densidade2, percapta2;
    float super_poder, super_poder2;

    // Dados da Carta 1
    printf("Digite uma letra para o estado: ");
    scanf("%s", estado);
    printf("Digite um código para esse estado: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);
    printf("Digite a população: ");
    scanf("%lu", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos);

    // Dados da Carta 2
    printf("\nDigite uma letra para o estado: ");
    scanf("%s", estado2);
    printf("Digite um código para esse estado: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    // Calculo da Densidade e do PIB per Capta
    densidade = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;
    percapta = (pib *1000000000) / (float)populacao;
    percapta2 = (pib2 *1000000000) / (float)populacao2;

    // Super Poder
    super_poder= (float)populacao + area + pib + (float)num_pontos + percapta + (1.0f/densidade);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)num_pontos2 + percapta2 + (1.0f/densidade2);


    // Print da Carta 1
    // printf("\n=====Carta 1=====\n");
    // printf("\nEstado: %s\n", estado);
    // printf("Código: %s\n", codigo);
    // printf("Nome da Cidade: %s\n", nome_cidade);
    // printf("População: %d\n", populacao);
    // printf("Área: %.2f km²\n", area);
    // printf("PIB: %.2f bilhões de reais\n", pib);
    // printf("Número de Pontos Turísticos: %d\n", num_pontos);
    // printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    // printf("PIB per Capta: R$%.2f\n", percapta);
    // printf("Super Poder: %.2f\n", super_poder);


    // Print da Carta 2
    // printf("\n=====Carta 2=====\n");
    // printf("\nEstado: %s\n", estado2);
    // printf("Código: %s\n", codigo2);
    // printf("Nome da Cidade: %s\n", nome_cidade2);
    // printf("População: %d\n", populacao2);
    // printf("Área: %.2f km²\n", area2);
    // printf("PIB: %.2f bilhões de reais\n", pib2);
    // printf("Número de Pontos Turísticos: %d\n", num_pontos2);
    // printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    // printf("PIB per Capta: R$%.2f", percapta2);
    // printf("Super Poder: %.2f\n", super_poder2);

    // Comparação entre as populações das cartas
    if (populacao > populacao2){
        printf("Carta 1 (%s): %d\n", nome_cidade, populacao);
        printf("Carta 2 (%s): %d\n", nome_cidade2, populacao2);
        printf("Carta 1 (%s) venceu!\n", nome_cidade);
    } else if (populacao == populacao2)
    {
        printf("Carta 1 (%s): %d\n", nome_cidade, populacao);
        printf("Carta 2 (%s): %d\n", nome_cidade2, populacao2);
        printf("Empate!\n");
    } else {
        printf("Carta 1 (%s): %d\n", nome_cidade, populacao);
        printf("Carta 2 (%s): %d\n", nome_cidade2, populacao2);
        printf("Carta 2 (%s) venceu!\n", nome_cidade2);
    }
    

    return 0;
}