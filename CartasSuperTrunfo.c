#include <stdio.h>

int main(){
    // Cartas
    char estado[50], estado2[50];
    char codigo[10], codigo2[10];
    char nome_cidade[50], nome_cidade2[50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int num_pontos, num_pontos2, escolhajogador, escolhaatributo1, escolhaatributo2;
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
        printf("Escolha o 1º atributo: \n");
        scanf("%d", &escolhaatributo1);
        
        switch (escolhaatributo1)
        {
        case 1:
            printf("\n=== Escolha um 2º atributo para comparar ===\n");
            printf("1. Área\n");
            printf("2. PIB\n");
            printf("3. Número de Pontos Turísticos\n");
            printf("4. Densidade Demográfica\n");
            printf("Escolha o 2º atributo: \n");
            scanf("%d", &escolhaatributo2);

            switch (escolhaatributo2)
            {
            case 1:
                printf("Carta 1 (%s) | População: %lu | Área: %.2f\n", nome_cidade, populacao, area);
                printf("Carta 2 (%s) | População: %lu | Área: %.2f\n", nome_cidade2, populacao2, area2);
                
                printf("%s\n", (populacao > populacao2) ? "Carta 1 venceu no atributo População!" : 
               (populacao == populacao2) ? "Empate no atributo População!" : 
               "Carta 2 venceu no atributo População!");

                if (((float)populacao + area) > ((float)populacao2 + area2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)populacao + area) == ((float)populacao2 + area2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 2:
                printf("Carta 1 (%s) | População: %lu | PIB: %.2f\n", nome_cidade, populacao, pib);
                printf("Carta 2 (%s) | População: %lu | PIB: %.2f\n", nome_cidade2, populacao2, pib2);
                
                printf("%s\n", (populacao > populacao2) ? "Carta 1 venceu no atributo População!" : 
               (populacao == populacao2) ? "Empate no atributo População!" : 
               "Carta 2 venceu no atributo População!");

                if (((float)populacao + pib) > ((float)populacao2 + pib2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)populacao + pib) == ((float)populacao2 + pib2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 3:
                printf("Carta 1 (%s) | População: %lu | Número de Pontos Turísticos: %d\n", nome_cidade, populacao, num_pontos);
                printf("Carta 2 (%s) | População: %lu | Número de Pontos Turísticos: %d\n", nome_cidade2, populacao2, num_pontos2);
                
                printf("%s\n", (populacao > populacao2) ? "Carta 1 venceu no atributo População!" : 
               (populacao == populacao2) ? "Empate no atributo População!" : 
               "Carta 2 venceu no atributo População!");

                if ((populacao + num_pontos) > (populacao2 + num_pontos2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((populacao + num_pontos) == (populacao2 + num_pontos2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            
            case 4:
                printf("Carta 1 (%s) | População: %lu | Densidade Demográfica: %.2f\n", nome_cidade, populacao, densidade);
                printf("Carta 2 (%s) | População: %lu | Densidade Demográfica: %.2f\n", nome_cidade2, populacao2, densidade2);
                
                printf("%s\n", (populacao > populacao2) ? "Carta 1 venceu no atributo População!" : 
               (populacao == populacao2) ? "Empate no atributo População!" : 
               "Carta 2 venceu no atributo População!");

                if (((float)populacao + densidade) < ((float)populacao2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)populacao + densidade) == ((float)populacao2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            
            default:
                printf("Digite uma opção válida");
                break;
            }
            break;            
        case 2:
            printf("\n=== Escolha um 2º atributo para comparar ===\n");
            printf("1. População\n");
            printf("2. PIB\n");
            printf("3. Número de Pontos Turísticos\n");
            printf("4. Densidade Demográfica\n");
            printf("Escolha o 2º atributo: \n");
            scanf("%d", &escolhaatributo2);

            switch (escolhaatributo2)
            {
            case 1:
                printf("Carta 1 (%s) | Área: %.2f | População: %lu\n", nome_cidade, area, populacao);
                printf("Carta 2 (%s) | Área: %.2f | População: %lu\n", nome_cidade2, area2, populacao2);
                
                printf("%s\n", (area > area2) ? "Carta 1 venceu no atributo Área!" : 
               (area == area2) ? "Empate no atributo Área!" : 
               "Carta 2 venceu no atributo Área!");

                if (((float)populacao + area) > ((float)populacao2 + area2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)populacao + area) == ((float)populacao2 + area2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 2:
                printf("Carta 1 (%s) | Área: %.2f | PIB: %.2f\n", nome_cidade, area, pib);
                printf("Carta 2 (%s) | Área: %.2f | PIB: %.2f\n", nome_cidade2, area2, pib2);
                
                printf("%s\n", (area > area2) ? "Carta 1 venceu no atributo Área!" : 
               (area == area2) ? "Empate no atributo Área!" : 
               "Carta 2 venceu no atributo Área!");

                if ((area + pib) > (area2 + pib2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((area + pib) == (area2 + pib2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 3:
                printf("Carta 1 (%s) | Área: %.2f | Número de Pontos Turísticos: %d\n", nome_cidade, area, num_pontos);
                printf("Carta 2 (%s) | Área: %.2f | Número de Pontos Turísticos: %d\n", nome_cidade2, area2, num_pontos2);
                
                printf("%s\n", (area > area2) ? "Carta 1 venceu no atributo Área!" : 
               (area == area2) ? "Empate no atributo Área!" : 
               "Carta 2 venceu no atributo Área!");

                if (((float)num_pontos + area) > ((float)num_pontos2 + area2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)num_pontos + area) == ((float)num_pontos2 + area2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 4:
                printf("Carta 1 (%s) | Área: %.2f | Densidade Demográfica: %.2f\n", nome_cidade, area, densidade);
                printf("Carta 2 (%s) | Área: %.2f | Densidade Demográfica: %.2f\n", nome_cidade2, area2, densidade2);
                
                printf("%s\n", (area > area2) ? "Carta 1 venceu no atributo Área!" : 
               (area == area2) ? "Empate no atributo Área!" : 
               "Carta 2 venceu no atributo Área!");

                if ((densidade + area) > (densidade2 + area2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((densidade + area) == (densidade2 + area2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            default:
                printf("Digite uma opção válida");
                break;
            }
            break;
        case 3:
            printf("\n=== Escolha um 2º atributo para comparar ===\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. Número de Pontos Turísticos\n");
            printf("4. Densidade Demográfica\n");
            printf("Escolha o 2º atributo: \n");
            scanf("%d", &escolhaatributo2);

            switch (escolhaatributo2)
            {
            case 1:
                printf("Carta 1 (%s) | PIB: %.2f | População: %lu\n", nome_cidade, pib, populacao);
                printf("Carta 2 (%s) | PIB: %.2f | População: %lu\n", nome_cidade2, pib2, populacao2);
                
                printf("%s\n", (pib > pib2) ? "Carta 1 venceu no atributo PIB!" : 
               (pib == pib2) ? "Empate no atributo PIB!" : 
               "Carta 2 venceu no atributo PIB!");

                if (((float)populacao + pib) > ((float)populacao2 + pib2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)populacao + pib) == ((float)populacao2 + pib2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 2:
                printf("Carta 1 (%s) | PIB: %.2f | Área: %.2f\n", nome_cidade, pib, area);
                printf("Carta 2 (%s) | PIB: %.2f | Área: %.2f\n", nome_cidade2, pib2, area2);
                
                printf("%s\n", (pib > pib2) ? "Carta 1 venceu no atributo PIB!" : 
               (pib == pib2) ? "Empate no atributo PIB!" : 
               "Carta 2 venceu no atributo PIB!");

                if ((pib + area) > (pib2 + area2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((pib + area) == (pib2 + area2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 3:
                printf("Carta 1 (%s) | PIB: %.2f | Número de Pontos Turísticos: %d\n", nome_cidade, pib, num_pontos);
                printf("Carta 2 (%s) | PIB: %.2f | Número de Pontos Turísticos: %d\n", nome_cidade2, pib2, num_pontos2);
                
                printf("%s\n", (pib > pib2) ? "Carta 1 venceu no atributo PIB!" : 
               (pib == pib2) ? "Empate no atributo PIB!" : 
               "Carta 2 venceu no atributo PIB!");

                if (((float)num_pontos + pib) > ((float)num_pontos2 + pib2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)num_pontos + pib) == ((float)num_pontos2 + pib2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 4:
                printf("Carta 1 (%s) | PIB: %.2f | Densidade Demográfica: %.2f\n", nome_cidade, pib, densidade);
                printf("Carta 2 (%s) | PIB: %.2f | Densidade Demográfica: %.2f\n", nome_cidade2, pib2, densidade2);
                
                printf("%s\n", (pib > pib2) ? "Carta 1 venceu no atributo PIB!" : 
               (pib == pib2) ? "Empate no atributo PIB!" : 
               "Carta 2 venceu no atributo PIB!");

                if ((pib + densidade) > (pib2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((pib + densidade) == (pib2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            default:
                printf("Digite uma opção válida");
                break;
            }
            break;
        case 4:
            printf("\n=== Escolha um 2º atributo para comparar ===\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Densidade Demográfica\n");
            printf("Escolha o 2º atributo: \n");
            scanf("%d", &escolhaatributo2);

            switch (escolhaatributo2)
            {
            case 1:
                printf("Carta 1 (%s) | Número de Pontos Turísticos: %d | População: %lu\n", nome_cidade, num_pontos, populacao);
                printf("Carta 2 (%s) | Número de Pontos Turísticos: %d | População: %lu\n", nome_cidade2, num_pontos2, populacao2);
                
                printf("%s\n", (num_pontos > num_pontos2) ? "Carta 1 venceu no atributo Número de Pontos Turísticos!" : 
               (num_pontos == num_pontos2) ? "Empate no atributo Número de Pontos Turísticos!" : 
               "Carta 2 venceu no atributo Número de Pontos Turísticos!");

                if ((num_pontos + populacao) > (num_pontos2 + populacao2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((num_pontos + populacao) == (num_pontos2 + populacao2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 2:
                printf("Carta 1 (%s) | Número de Pontos Turísticos: %d | Área: %.2f\n", nome_cidade, num_pontos, area);
                printf("Carta 2 (%s) | Número de Pontos Turísticos: %d | Área: %.2f\n", nome_cidade2, num_pontos2, area2);
                
                printf("%s\n", (num_pontos > num_pontos2) ? "Carta 1 venceu no atributo Número de Pontos Turísticos!" : 
               (num_pontos == num_pontos2) ? "Empate no atributo Número de Pontos Turísticos!" : 
               "Carta 2 venceu no atributo Número de Pontos Turísticos!");

                if (((float)num_pontos + area) > ((float)num_pontos2 + area2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)num_pontos + area) == ((float)num_pontos2 + area2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 3:
                printf("Carta 1 (%s) | Número de Pontos Turísticos: %d | PIB: %.2f\n", nome_cidade, num_pontos, pib);
                printf("Carta 2 (%s) | Número de Pontos Turísticos: %d | PIB: %.2f\n", nome_cidade2, num_pontos2, pib2);
                
                printf("%s\n", (num_pontos > num_pontos2) ? "Carta 1 venceu no atributo Número de Pontos Turísticos!" : 
               (num_pontos == num_pontos2) ? "Empate no atributo Número de Pontos Turísticos!" : 
               "Carta 2 venceu no atributo Número de Pontos Turísticos!");

                if (((float)num_pontos + pib) > ((float)num_pontos2 + pib2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)num_pontos + pib) == ((float)num_pontos2 + pib2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 4:
                printf("Carta 1 (%s) | Número de Pontos Turísticos: %d | Densidade Demográfica: %.2f\n", nome_cidade, num_pontos, densidade);
                printf("Carta 2 (%s) | Número de Pontos Turísticos: %d | Densidade Demográfica: %.2f\n", nome_cidade2, num_pontos2, densidade2);
                
                printf("%s\n", (num_pontos > num_pontos2) ? "Carta 1 venceu no atributo Número de Pontos Turísticos!" : 
               (num_pontos == num_pontos2) ? "Empate no atributo Número de Pontos Turísticos!" : 
               "Carta 2 venceu no atributo Número de Pontos Turísticos!");

                if (((float)num_pontos + densidade) > ((float)num_pontos2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)num_pontos + densidade) == ((float)num_pontos2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            default:
                printf("Digite uma opção válida");
                break;
            }
            break;
        case 5:
            printf("\n=== Escolha um 2º atributo para comparar ===\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de Pontos Turísticos\n");
            printf("Escolha o 2º atributo: \n");
            scanf("%d", &escolhaatributo2);

            switch (escolhaatributo2)
            {
            case 1:
                printf("Carta 1 (%s) | Densidade Demográfica: %.2f | População: %lu\n", nome_cidade, densidade, populacao);
                printf("Carta 2 (%s) | Densidade Demográfica: %.2f | População: %lu\n", nome_cidade2, densidade2, populacao2);
                
                printf("%s\n", (densidade < densidade2) ? "Carta 1 venceu no atributo Densidade Demográfica!" : 
               (densidade == densidade2) ? "Empate no atributo Densidade Demográfica!" : 
               "Carta 2 venceu no atributo Densidade Demográfica!");

                if (((float)populacao + densidade) < ((float)populacao2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)populacao + densidade) == ((float)populacao2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 2:
                printf("Carta 1 (%s) | Densidade Demográfica: %.2f | Área: %.2f\n", nome_cidade, densidade, area);
                printf("Carta 2 (%s) | Densidade Demográfica: %.2f | Área: %.2f\n", nome_cidade2, densidade2, area2);
                
                printf("%s\n", (densidade < densidade2) ? "Carta 1 venceu no atributo Densidade Demográfica!" : 
               (densidade == densidade2) ? "Empate no atributo Densidade Demográfica!" : 
               "Carta 2 venceu no atributo Densidade Demográfica!");


                if ((area + densidade) < (area2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((area + densidade) == (area2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 3:
                printf("Carta 1 (%s) | Densidade Demográfica: %.2f | PIB: %.2f\n", nome_cidade, densidade, pib);
                printf("Carta 2 (%s) | Densidade Demográfica: %.2f | PIB: %.2f\n", nome_cidade2, densidade2, pib2);
                
                printf("%s\n", (densidade < densidade2) ? "Carta 1 venceu no atributo Densidade Demográfica!" : 
               (densidade == densidade2) ? "Empate no atributo Densidade Demográfica!" : 
               "Carta 2 venceu no atributo Densidade Demográfica!");


                if ((pib + densidade) < (pib2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if ((pib + densidade) == (pib2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            case 4:
                printf("Carta 1 (%s) | Densidade Demográfica: %.2f | Número de Pontos Turísticos: %d\n", nome_cidade, densidade, num_pontos);
                printf("Carta 2 (%s) | Densidade Demográfica: %.2f | Número de Pontos Turísticos: %d\n", nome_cidade2, densidade2, num_pontos2);
                
                printf("%s\n", (densidade < densidade2) ? "Carta 1 venceu no atributo Densidade Demográfica!" : 
               (densidade == densidade2) ? "Empate no atributo Densidade Demográfica!" : 
               "Carta 2 venceu no atributo Densidade Demográfica!");


                if (((float)num_pontos + densidade) < ((float)num_pontos2 + densidade2)){
                    printf("Soma dos Atributos: Carta 1 (%s) venceu!\n", nome_cidade);
                } else if (((float)num_pontos + densidade) == ((float)num_pontos2 + densidade2))
                {
                    printf("Empate!\n");
                } else {
                    printf("Soma dos Atributos: Carta 2 (%s) venceu!\n", nome_cidade2);
                }
                break;
            default:
                printf("Digite uma opção válida");
                break;
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