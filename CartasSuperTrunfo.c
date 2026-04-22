#include <stdio.h>

int main(){
    // Cartas
    char estado[50], estado2[50];
    char codigo[10], codigo2[10];
    char nome_cidade[50], nome_cidade2[50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int num_pontos, num_pontos2, escolhajogador, escolhaatributo;
    float densidade, percapta, densidade2, percapta2;
    float super_poder, super_poder2;

    // Menu do Jogo
    printf("\n===Menu do Jogo===\n");
    printf("Escolha uma das opções:\n");
    printf("1. Jogar\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma oção: ");
    scanf("%d", &escolhajogador);

    switch (escolhajogador)
    {
    case 1:
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

        // Pedir o atributo para comparação
        printf("\n=== Escolha um atributo para comparar ===\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Escolha: ");
        scanf("%d", &escolhaatributo);

        switch (escolhaatributo)
        {
        case 1:
            printf("Carta 1 (%s) | População: %lu\n", nome_cidade, populacao);
            printf("Carta 2 (%s) | População: %lu\n", nome_cidade2, populacao2);    

            if (populacao > populacao2){
                printf("Carta 1 (%s) venceu!\n", nome_cidade);
            } else if (populacao == populacao2)
            {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            }
            break;
        case 2:
            printf("Carta 1 (%s) | Área: %d\n", nome_cidade, area);
            printf("Carta 2 (%s) | Área: %d\n", nome_cidade2, area2);    

            if (area > area2){
                printf("Carta 1 (%s) venceu!\n", nome_cidade);
            } else if (area == area2)
            {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            }
            break;
        case 3:
            printf("Carta 1 (%s) | PIB: %.2f\n", nome_cidade, pib);
            printf("Carta 2 (%s) | PIB: %.2f\n", nome_cidade2, pib2);    

            if (pib > pib2){
                printf("Carta 1 (%s) venceu!\n", nome_cidade);
            } else if (pib == pib2)
            {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            }
            break;
        case 4:
            printf("Carta 1 (%s) | Número de Pontos Turísticos: %d\n", nome_cidade, num_pontos);
            printf("Carta 2 (%s) | Número de Pontos Turísticos: %d\n", nome_cidade2, num_pontos2);    

            if (num_pontos > num_pontos2){
                printf("Carta 1 (%s) venceu!\n", nome_cidade);
            } else if (num_pontos == num_pontos2)
            {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            }
            break;
        case 5:
            printf("Carta 1 (%s) | Densidade Demográfica: %.2f\n", nome_cidade, densidade);
            printf("Carta 2 (%s) | Densidade Demográfica: %.2f\n", nome_cidade2, densidade2);    

            if (densidade < densidade2){
                printf("Carta 1 (%s) venceu!\n", nome_cidade);
            } else if (densidade == densidade2)
            {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            }
            break;
        
        default:
            printf("Digite uma opção válida");
            break;
        }
        break;
    case 2:
        printf("=== Regras do Jogo Super Trunfo ===\n\n");
        printf("1. Cada jogador recebe um conjunto de cartas.\n");
        printf("2. Em cada rodada, um jogador escolhe uma categoria da carta.\n");
        printf("3. Os valores da categoria escolhida são comparados.\n");
        printf("4. Quem tiver o maior valor vence a rodada e ganha as cartas.\n");
        printf("5. O jogo continua até que um jogador fique com todas as cartas.\n");
        printf("===================================\n");
        break;
    case 3:
        printf("\nSaindo...");
        break;
    default:
        printf("Escolha uma opção válida!");
        break;
    }
    return 0;
}