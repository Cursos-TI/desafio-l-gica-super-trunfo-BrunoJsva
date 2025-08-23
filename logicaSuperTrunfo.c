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

    // Menu de opções para o jogo Super Trunfo
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

        densidadePopulacional1 = (float)populacao1 / area1;
        PIBPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

        densidadePopulacional2 = (float)populacao2 / area2;
        PIBPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

        int opcaoVisual;

        printf("\nDeseja visualizar os dados cadastrados? (1 para Sim, 2 para Não): ");
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
        } else if (opcaoVisual == 2) {
            printf("Você escolheu não visualizar os dados cadastrados.\n");
        }else {
            printf("Opção inválida. Prosseguindo sem visualizar os dados.\n");
        }

        superPoder1 = populacao1 + area1 + pib1 + NumPontosTuristicos1 + PIBPerCapita1 + (1.0 / densidadePopulacional1);
        superPoder2 = populacao2 + area2 + pib2 + NumPontosTuristicos2 + PIBPerCapita2 + (1.0 / densidadePopulacional2);

        int opcaoComparacao;
        printf("******************************\n");
        printf("Qual campo você quer comparar?\n");
        printf("******************************\n\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional (menor é melhor)\n");
        printf("6. Super Poder (soma de todos os atributos)\n");

        scanf("%d", &opcaoComparacao);

        switch (opcaoComparacao)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                printf("%s vence!\n", nomeDaCidade1);
                printf("Populaçao de %s: %.2f é maior que a de %s: %.2f\n", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2);
            }
            else if (populacao2 > populacao1)
            {
                printf("%s vence!\n", nomeDaCidade2);
                printf("Populaçao de %s: %.2f é maior que a de %s: %.2f\n", nomeDaCidade2, populacao2, nomeDaCidade1, populacao1);
            }
            else
            {
                printf("Empate na População!\n");
                printf("Populaçao de %s: %.2f é igual a de %s: %.2f\n", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2);
            }
            break;
        case 2:
            if (area1 > area2)
            {
                printf("%s vence!\n", nomeDaCidade1);
                printf("Área de %s: %.2f km² é maior que a de %s: %.2f km²\n", nomeDaCidade1, area1, nomeDaCidade2, area2);
            }
            else if (area2 > area1)
            {
                printf("%s vence!\n", nomeDaCidade2);
                printf("Área de %s: %.2f km² é maior que a de %s: %.2f km²\n", nomeDaCidade2, area2, nomeDaCidade1, area1);
            }
            else
            {
                printf("Empate na Área!\n");
                printf("Área de %s: %.2f km² é igual a de %s: %.2f km²\n", nomeDaCidade1, area1, nomeDaCidade2, area2);
            }
            break;
        case 3:
            if (pib1 > pib2)
            {
                printf("%s vence!\n", nomeDaCidade1);
                printf("PIB de %s: %.2f bilhões é maior que o de %s: %.2f bilhões\n", nomeDaCidade1, pib1, nomeDaCidade2, pib2);
            }
            else if (pib2 > pib1)
            {
                printf("%s vence!\n", nomeDaCidade2);
                printf("PIB de %s: %.2f bilhões é maior que o de %s: %.2f bilhões\n", nomeDaCidade2, pib2, nomeDaCidade1, pib1);
            }
            else
            {
                printf("Empate no PIB!\n");
                printf("PIB de %s: %.2f bilhões é igual ao de %s: %.2f bilhões\n", nomeDaCidade1, pib1, nomeDaCidade2, pib2);
            }
            break;
        case 4:
            if (NumPontosTuristicos1 > NumPontosTuristicos2)
            {
                printf("%s vence!\n", nomeDaCidade1);
                printf("Número de Pontos Turísticos de %s: %d é maior que o de %s: %d\n", nomeDaCidade1, NumPontosTuristicos1, nomeDaCidade2, NumPontosTuristicos2);
            }
            else if (NumPontosTuristicos2 > NumPontosTuristicos1)
            {
                printf("%s vence!\n", nomeDaCidade2);
                printf("Número de Pontos Turísticos de %s: %d é maior que o de %s: %d\n", nomeDaCidade2, NumPontosTuristicos2, nomeDaCidade1, NumPontosTuristicos1);
            }
            else
            {
                printf("Empate no Número de Pontos Turísticos!\n");
                printf("Número de Pontos Turísticos de %s: %d é igual ao de %s: %d\n", nomeDaCidade1, NumPontosTuristicos1, nomeDaCidade2, NumPontosTuristicos2);
            }
            break;
        case 5:
            if (densidadePopulacional1 < densidadePopulacional2)
            {
                printf("%s vence!\n", nomeDaCidade1);
                printf("Densidade Populacional de %s: %.2f hab/km² é menor que a de %s: %.2f hab/km²\n", nomeDaCidade1, densidadePopulacional1, nomeDaCidade2, densidadePopulacional2);
            }
            else if (densidadePopulacional2 < densidadePopulacional1)
            {
                printf("%s vence!\n", nomeDaCidade2);
                printf("Densidade Populacional de %s: %.2f hab/km² é menor que a de %s: %.2f hab/km²\n", nomeDaCidade2, densidadePopulacional2, nomeDaCidade1, densidadePopulacional1);
            }
            else
            {
                printf("Empate na Densidade Populacional!\n");
                printf("Densidade Populacional de %s: %.2f hab/km² é igual a de %s: %.2f hab/km²\n", nomeDaCidade1, densidadePopulacional1, nomeDaCidade2, densidadePopulacional2);
            }
            break;
        case 6:
            if (superPoder1 > superPoder2)
            {
                printf("%s vence!\n", nomeDaCidade1);
                printf("Super Poder de %s: %.2f é maior que o de %s: %.2f\n", nomeDaCidade1, superPoder1, nomeDaCidade2, superPoder2);
            }
            else if (superPoder2 > superPoder1)
            {
                printf("%s vence!\n", nomeDaCidade2);
                printf("Super Poder de %s: %.2f é maior que o de %s: %.2f\n", nomeDaCidade2, superPoder2, nomeDaCidade1, superPoder1);
            }
            else
            {
                printf("Empate no Super Poder!\n");
                printf("Super Poder de %s: %.2f é igual ao de %s: %.2f\n", nomeDaCidade1, superPoder1, nomeDaCidade2, superPoder2);
            }
            break;
        default:
            printf("Opção inválida para comparação.\n");
            break;
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
            printf("Depois de preencher as cartas você podera comparar qual das cartas é a vencedora!\n");
            break;
        case 2:
            printf("A carta vencedora é aquela que tiver mais atributos maiores que a outra carta.\n");
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
        printf("opção invalida tente novamente!\n");
        break;
    }
    return 0;
}