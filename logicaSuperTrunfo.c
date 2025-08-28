#include <stdio.h>
#include <string.h>

int main()
{
    char estado1;
    char codigoCarta1[4];
    char nomeDaCidade1[11];
    float populacao1;
    float area1, pib1;
    int NumPontosTuristicos1;
    float densidadePopulacional1;
    float PIBPerCapita1;
    char estado2;
    char codigoCarta2[4];
    char nomeDaCidade2[11];
    float populacao2;
    float area2, pib2;
    int NumPontosTuristicos2;
    float densidadePopulacional2;
    float PIBPerCapita2;
    float superPoder1, superPoder2;
    int opcao;

    printf("******************************\n");
    printf("* Bem-vindo ao Super Trunfo! *\n");
    printf("******************************\n");

    printf("Menu de opções:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Instruções\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Executando o Jogo\n");

        printf("Vamos começar cadastrando a primeira carta. \n\n");

        printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
        scanf(" %c", &estado1);

        printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03): ");
        scanf("%3s", codigoCarta1);

        getchar();
        printf("Nome da cidade (máximo de 10 caracteres): ");
        fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
        nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0;

        printf("O numero de habitantes (número real): ");
        scanf("%f", &populacao1);

        printf("A área em km² (número real): ");
        scanf("%f", &area1);

        printf("O PIB em bilhões (número real): ");
        scanf("%f", &pib1);

        printf("O número de pontos turísticos (número inteiro): ");
        scanf("%d", &NumPontosTuristicos1);

        printf("\nAgora vamos cadastrar a segunda carta. \n\n");

        printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
        scanf(" %c", &estado2);

        printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03): ");
        scanf("%3s", codigoCarta2);

        getchar();
        printf("Nome da cidade (máximo de 10 caracteres): ");
        fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
        nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;

        printf("O numero de habitantes (número real): ");
        scanf("%f", &populacao2);

        printf("A área em km² (número real): ");
        scanf("%f", &area2);

        printf("O PIB em bilhões (número real): ");
        scanf("%f", &pib2);

        printf("O número de pontos turísticos (número inteiro): ");
        scanf("%d", &NumPontosTuristicos2);

        if (area1 > 0) {
            densidadePopulacional1 = populacao1 / area1;
        }
        else {
            densidadePopulacional1 = 0;
        }
        if (populacao1 > 0) {
            PIBPerCapita1 = (pib1 * 1000000000) / populacao1;
        }
        else {
            PIBPerCapita1 = 0;
        }

        if (area2 > 0) {
            densidadePopulacional2 = populacao2 / area2;
        }
        else {
            densidadePopulacional2 = 0;
        }
        if (populacao2 > 0) {
            PIBPerCapita2 = (pib2 * 1000000000) / populacao2;
        }
        else {
            PIBPerCapita2 = 0;
        }


        int opcaoVisual;

        printf("\nDeseja visualizar os dados cadastrados? (1 para Sim, 2 para Não): \n");
        scanf("%d", &opcaoVisual);

        if (opcaoVisual == 1)
        {
            printf("******************************\n");
            printf("*** Dados Cadastrados:\n ***");
            printf("******************************\n");

            printf("\n\nCarta 1:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigoCarta1);
            printf("Nome da Cidade: %s\n", nomeDaCidade1);
            printf("População: %.2f\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
            printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);

            printf("\nCarta 2:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigoCarta2);
            printf("Nome da Cidade: %s\n", nomeDaCidade2);
            printf("População: %.2f\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
            printf("PIB per Capita: %.2f reais\n\n", PIBPerCapita2);
        }
        else if (opcaoVisual == 2)
        {
            printf("Você escolheu não visualizar os dados cadastrados.\n\n");
        }
        else
        {
            printf("Opção inválida. Prosseguindo sem visualizar os dados.\n\n");
        }

        superPoder1 = populacao1 + area1 + pib1 + NumPontosTuristicos1 + PIBPerCapita1 + (1.0 / densidadePopulacional1);
        superPoder2 = populacao2 + area2 + pib2 + NumPontosTuristicos2 + PIBPerCapita2 + (1.0 / densidadePopulacional2);

        char atributoVencedor1[200];
        char atributoVencedor2[200];
        int atributo1;
        int atributo2;
        int vencedor1;
        int vencedor2;


        printf("***************************************\n");
        printf("***Escolha 2 atributos para comparar***\n");
        printf("***************************************\n");
        printf("\nEscolha o 1° atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. Super Poder\n");
        scanf("%d", &atributo1);
        printf("Atributo 1 escolhido com sucesso!\n");


        switch (atributo1)
        {
        case 1:
            if (populacao1 > populacao2) {
                vencedor1 = 1;
                sprintf(atributoVencedor1, "Carta 1: %s - População: %.0f", nomeDaCidade1, populacao1);
            }
            else if (populacao2 > populacao1) {
                vencedor1 = 2;
                sprintf(atributoVencedor1, "Carta 2: %s - População: %.0f", nomeDaCidade2, populacao2);
            }
            else {
                vencedor1 = 0;
                sprintf(atributoVencedor1, "Houve um empate no atributo População: %.0f vs %.0f", populacao1, populacao2);
            }
            break;
        case 2:
            if (area1 > area2) {
                vencedor1 = 1;
                sprintf(atributoVencedor1, "Carta 1: %s - Área: %.2f km²", nomeDaCidade1, area1);
            }
            else if (area2 > area1) {
                vencedor1 = 2;
                sprintf(atributoVencedor1, "Carta 2: %s - Área: %.2f km²", nomeDaCidade2, area2);
            }
            else {
                vencedor1 = 0;
                sprintf(atributoVencedor1, "Houve um empate no atributo Área: %.2f km² vs %.2f km²", area1, area2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                vencedor1 = 1;
                sprintf(atributoVencedor1, "Carta 1: %s - PIB: %.2f bilhões", nomeDaCidade1, pib1);
            }
            else if (pib2 > pib1) {
                vencedor1 = 2;
                sprintf(atributoVencedor1, "Carta 2: %s - PIB: %.2f bilhões", nomeDaCidade2, pib2);
            }
            else {
                vencedor1 = 0;
                sprintf(atributoVencedor1, "Houve um empate no atributo PIB: %.2f bi vs %.2f bi", pib1, pib2);
            }
            break;
        case 4:
            if (NumPontosTuristicos1 > NumPontosTuristicos2) {
                vencedor1 = 1;
                sprintf(atributoVencedor1, "Carta 1: %s - Pontos Turísticos: %d", nomeDaCidade1, NumPontosTuristicos1);
            }
            else if (NumPontosTuristicos2 > NumPontosTuristicos1) {
                vencedor1 = 2;
                sprintf(atributoVencedor1, "Carta 2: %s - Pontos Turísticos: %d", nomeDaCidade2, NumPontosTuristicos2);
            }
            else {
                vencedor1 = 0;
                sprintf(atributoVencedor1, "Houve um empate nos Pontos Turísticos: %d vs %d", NumPontosTuristicos1, NumPontosTuristicos2);
            }
            break;
        case 5:
            if (densidadePopulacional1 < densidadePopulacional2) {
                vencedor1 = 1;
                sprintf(atributoVencedor1, "Carta 1: %s - Densidade Populacional: %.2f hab/km²", nomeDaCidade1, densidadePopulacional1);
            }
            else if (densidadePopulacional2 < densidadePopulacional1) {
                vencedor1 = 2;
                sprintf(atributoVencedor1, "Carta 2: %s - Densidade Populacional: %.2f hab/km²", nomeDaCidade2, densidadePopulacional2);
            }
            else {
                vencedor1 = 0;
                sprintf(atributoVencedor1, "Houve um empate na Densidade Populacional: %.2f vs %.2f", densidadePopulacional1, densidadePopulacional2);
            }
            break;
        case 6:
            if (superPoder1 > superPoder2) {
                vencedor1 = 1;
                sprintf(atributoVencedor1, "Carta 1: %s - Super Poder: %.2f", nomeDaCidade1, superPoder1);
            }
            else if (superPoder2 > superPoder1) {
                vencedor1 = 2;
                sprintf(atributoVencedor1, "Carta 2: %s - Super Poder: %.2f", nomeDaCidade2, superPoder2);
            }
            else {
                vencedor1 = 0;
                sprintf(atributoVencedor1, "Houve um empate no Super Poder: %.2f vs %.2f", superPoder1, superPoder2);
            }
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            break;
        }

        printf("\nEscolha o 2° atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. Super Poder\n");
        scanf("%d", &atributo2);

        switch (atributo2)
        {
        case 1:
            if (populacao1 > populacao2) {
                vencedor2 = 1;
                sprintf(atributoVencedor2, "Carta 1: %s - População: %.0f", nomeDaCidade1, populacao1);
            }
            else if (populacao2 > populacao1) {
                vencedor2 = 2;
                sprintf(atributoVencedor2, "Carta 2: %s - População: %.0f", nomeDaCidade2, populacao2);
            }
            else {
                vencedor2 = 0;
                sprintf(atributoVencedor2, "Houve um empate no atributo População: %.0f vs %.0f", populacao1, populacao2);
            }
            break;
        case 2:
            if (area1 > area2) {
                vencedor2 = 1;
                sprintf(atributoVencedor2, "Carta 1: %s - Área: %.2f km²", nomeDaCidade1, area1);
            }
            else if (area2 > area1) {
                vencedor2 = 2;
                sprintf(atributoVencedor2, "Carta 2: %s - Área: %.2f km²", nomeDaCidade2, area2);
            }
            else {
                vencedor2 = 0;
                sprintf(atributoVencedor2, "Houve um empate no atributo Área: %.2f km² vs %.2f km²", area1, area2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                vencedor2 = 1;
                sprintf(atributoVencedor2, "Carta 1: %s - PIB: %.2f bilhões", nomeDaCidade1, pib1);
            }
            else if (pib2 > pib1) {
                vencedor2 = 2;
                sprintf(atributoVencedor2, "Carta 2: %s - PIB: %.2f bilhões", nomeDaCidade2, pib2);
            }
            else {
                vencedor2 = 0;
                sprintf(atributoVencedor2, "Houve um empate no atributo PIB: %.2f bi vs %.2f bi", pib1, pib2);
            }
            break;
        case 4:
            if (NumPontosTuristicos1 > NumPontosTuristicos2) {
                vencedor2 = 1;
                sprintf(atributoVencedor2, "Carta 1: %s - Pontos Turísticos: %d", nomeDaCidade1, NumPontosTuristicos1);
            }
            else if (NumPontosTuristicos2 > NumPontosTuristicos1) {
                vencedor2 = 2;
                sprintf(atributoVencedor2, "Carta 2: %s - Pontos Turísticos: %d", nomeDaCidade2, NumPontosTuristicos2);
            }
            else {
                vencedor2 = 0;
                sprintf(atributoVencedor2, "Houve um empate nos Pontos Turísticos: %d vs %d", NumPontosTuristicos1, NumPontosTuristicos2);
            }
            break;
        case 5:
            if (densidadePopulacional1 < densidadePopulacional2) {
                vencedor2 = 1;
                sprintf(atributoVencedor2, "Carta 1: %s - Densidade Populacional: %.2f hab/km²", nomeDaCidade1, densidadePopulacional1);
            }
            else if (densidadePopulacional2 < densidadePopulacional1) {
                vencedor2 = 2;
                sprintf(atributoVencedor2, "Carta 2: %s - Densidade Populacional: %.2f hab/km²", nomeDaCidade2, densidadePopulacional2);
            }
            else {
                vencedor2 = 0;
                sprintf(atributoVencedor2, "Houve um empate na Densidade Populacional: %.2f vs %.2f", densidadePopulacional1, densidadePopulacional2);
            }
            break;
        case 6:
            if (superPoder1 > superPoder2) {
                vencedor2 = 1;
                sprintf(atributoVencedor2, "Carta 1: %s - Super Poder: %.2f", nomeDaCidade1, superPoder1);
            }
            else if (superPoder2 > superPoder1) {
                vencedor2 = 2;
                sprintf(atributoVencedor2, "Carta 2: %s - Super Poder: %.2f", nomeDaCidade2, superPoder2);
            }
            else {
                vencedor2 = 0;
                sprintf(atributoVencedor2, "Houve um empate no Super Poder: %.2f vs %.2f", superPoder1, superPoder2);
            }
            break;
        default:
            printf("Opção inválida para o segundo atributo.\n");
            break;
        }

        if (atributo1 == atributo2)
        {
            printf("Atributos iguais selecionados. Por favor, escolha atributos diferentes.\n");
            return 0;
        }

        if (vencedor1 == 1)
        {
            printf("*******************************************************");
            printf("\nO vencedor do primeiro atributo é: %s\n", nomeDaCidade1);
            printf("%s\n", atributoVencedor1);
            printf("*******************************************************\n\n");
        }
        else if (vencedor1 == 2)
        {
            printf("*******************************************************");
            printf("\nO vencedor do primeiro atributo é: %s\n", nomeDaCidade2);
            printf("%s\n", atributoVencedor1);
            printf("*******************************************************\n\n");
        }
        else
        {
            printf("*******************************************************");
            printf("%s\n\n", atributoVencedor1);
            printf("*******************************************************\n\n");
        }


        if (vencedor2 == 1)
        {
            printf("*******************************************************");
            printf("\nO vencedor do segundo atributo é: %s\n", nomeDaCidade1);
            printf("%s\n", atributoVencedor2);
            printf("*******************************************************\n\n");

        }
        else if (vencedor2 == 2)
        {
            printf("*******************************************************");
            printf("\nO vencedor do segundo atributo é: %s\n", nomeDaCidade2);
            printf("%s\n", atributoVencedor2);
            printf("*******************************************************\n\n");
        }
        else
        {
            printf("*******************************************************");
            printf("%s\n\n", atributoVencedor2);
            printf("*******************************************************\n\n");
        }

        break;

    case 2:
        int regra;
        printf("Escolha uma opção:\n");
        printf("1. Como jogar?:\n");
        printf("2. Quem ganha?:\n");
        printf("3. Sair\n");
        scanf("%d", &regra);
        switch (regra)
        {
        case 1:
            printf("Você vai preencher duas cartas com informações aleatorias sobre uma cidade,\n");
            printf("Depois de preencher as cartas você podera comparar 2 atributos para saber qual das cartas é a vencedora!\n");
            break;
        case 2:
            printf("A carta vencedora é aquela que tiver os atributos maiores que a outra carta.\n");
            printf("No caso da densidade populacional, a carta com o menor valor vence esse atributo.\n");
            break;
        case 3:
            printf("Saindo das Instruções...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    case 3:
        printf("Saindo do Jogo .....\n");
        break;
    default:
        printf("Opção inválida, tente novamente!\n");
        break;
    }
    return 0;
}