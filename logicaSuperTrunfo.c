#include <stdio.h>

int main() {
    //Variáveis de controle
    int opcao;
    char continuar;
    
    // Variáveis da primeira carta
    char codigo1[4];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float superPoder1;
    float area1;
    float pib1;
    float densidadePopulacional1;
    float pibPerCapita1;


    // Variáveis da segunda carta
    char codigo2[4];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float superPoder2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n______________________________________________________________\n");

    // Registro da Densidade Populacional e Pib per Capita das duas cartas

    // Carta 1 
    densidadePopulacional1 = (float) populacao1/area1;
    pibPerCapita1 = (pib1 * 1e9)/((float) populacao1);

    // Carta 2
    densidadePopulacional2 = (float) populacao2/area2;
    pibPerCapita2 = (pib2 * 1e9)/((float) populacao2);

    // Registro do Super Poder das duas cartas

    superPoder1 = (float) populacao1 + area1 + pib1 + (float)pontosTuristicos1 + 1/densidadePopulacional1 + pibPerCapita1;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float)pontosTuristicos2 + 1/densidadePopulacional2 + pibPerCapita2;

    // Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.0f Pessoas/Km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.0f \n", pibPerCapita1);
    printf("Super Poder: %.0f \n", superPoder1);
    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.0f Pessoas/Km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.0f \n", pibPerCapita2);
    printf("Super Poder: %.0f \n", superPoder2);

    printf("\n______________________________________________________________\n");

    // Comparações
    do {
        printf("\n--- Menu de Comparação ---\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha um atributo para comparar (1-7): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ((int) populacao1 == (int) populacao2)
                    ? printf("As cartas possuem o mesmo valor de População. Resultado: Empate.\n")
                    : printf("Vencedor da População: Carta %s\n", (populacao1 > populacao2) ? codigo1 : codigo2);
                break;
            case 2:
                (area1 == area2)
                    ? printf("As cartas possuem o mesmo valor de Área. Resultado: Empate.\n")
                    : printf("Vencedor da Área: Carta %s\n", (area1 > area2) ? codigo1 : codigo2);
                break;
            case 3:
                (pib1 == pib2)
                    ? printf("As cartas possuem o mesmo valor de PIB. Resultado: Empate.\n")
                    : printf("Vencedor do PIB: Carta %s\n", (pib1 > pib2) ? codigo1 : codigo2);
                break;
            case 4:
                (pontosTuristicos1 == pontosTuristicos2)
                    ? printf("As cartas possuem o mesmo número de Pontos Turísticos. Resultado: Empate.\n")
                    : printf("Vencedor dos Pontos Turísticos: Carta %s\n", (pontosTuristicos1 > pontosTuristicos2) ? codigo1 : codigo2);
                break;
            case 5:
                (densidadePopulacional1 == densidadePopulacional2)
                    ? printf("As cartas possuem a mesma Densidade Populacional. Resultado: Empate.\n")
                    : printf("Vencedor da Densidade Populacional: Carta %s\n", (densidadePopulacional1 < densidadePopulacional2) ? codigo1 : codigo2);
                break;
            case 6:
                (pibPerCapita1 == pibPerCapita2)
                    ? printf("As cartas possuem o mesmo PIB per Capita. Resultado: Empate.\n")
                    : printf("Vencedor do PIB per Capita: Carta %s\n", (pibPerCapita1 > pibPerCapita2) ? codigo1 : codigo2);
                break;
            case 7:
                (superPoder1 ==  superPoder2)
                    ? printf("As cartas possuem o mesmo valor de Super Poder. Resultado: Empate.\n")
                    : printf("Vencedor do Super Poder: Carta %s\n", (superPoder1 > superPoder2) ? codigo1 : codigo2);
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
        

        printf("\nDeseja comparar outro atributo? (s/n): ");
        scanf(" %c", &continuar); // Espaço antes do %c para limpar buffer

    } while (continuar == 's' || continuar == 'S');

    return 0;
}