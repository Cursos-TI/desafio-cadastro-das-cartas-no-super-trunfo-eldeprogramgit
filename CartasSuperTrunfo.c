#include <stdio.h>

int main() {

    int pontos_turisticos1;
    unsigned long int populacao1;
    float area1, pib1;
    char estado1;
    char nome_da_cidade1 [50];
    char codigo1 [4];
    float densidade_populacional1;
    float pib_percapta1;
    float super_poder1;

    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2;
    char estado2;
    char nome_da_cidade2 [50];
    char codigo2 [4];
    float densidade_populacional2;
    float pib_percapta2;
    float super_poder2;

    int vencedor_populacao;
    float vencedor_area;
    float vencedor_pib;
    int vencedor_pontos_turisticos;
    float vencedor_densidade_populacional;
    float vencedor_pib_percapta;
    float vencedor_super_poder;


    printf ("Carta 1: \n");

    printf ("Digite o nome do estado com uma letra de 'A' a 'H': \n");
    scanf ("%s", &estado1);

    printf ("Digite o código da area - letra do estado seguida de um numero de 01 a 04: \n");
    scanf ("%s", &codigo1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_da_cidade1);

    printf ("Digite a populacao: \n");
    scanf ("%lu", &populacao1);

    printf ("Digite a area em Km2: \n");
    scanf ("%f", &area1);

    printf ("Digite o pib em bilhoes de reais: \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%ld", &pontos_turisticos1);
   
    densidade_populacional1 = populacao1/area1;

    pib_percapta1 = pib1/populacao1;

    //população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapta1 + (1 / densidade_populacional1);
        
    printf ("\n");

    printf ("Carta 2: \n");

    printf ("Digite o nome do estado com uma letra de 'A' a 'H': \n");
    scanf ("%s", &estado2);

    printf ("Digite o codigo da area - letra do estado seguida de um numero de 01 a 04: \n");
    scanf ("%s", &codigo2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_da_cidade2);

    printf ("Digite a populacao: \n");
    scanf ("%lu", &populacao2);

    printf ("Digite a area em Km2: \n");
    scanf ("%f", &area2);

    printf ("Digite o pib em bilhoes de reais: \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2/area2;

    pib_percapta2 = pib2/populacao2;

    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapta2  + (1 / densidade_populacional2);
    
    printf ("\n");

    printf ("Carta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Codigo: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", nome_da_cidade1);
    printf ("Populacao: %ld\n", populacao1);
    printf ("Area: %.2f km2\n",area1);
    printf ("PIB: %.2f bilhoes de reais\n", pib1);
    printf ("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf ("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per capta: %.2f reais\n", pib_percapta1);
    printf ("Super Poder: %.2f \n", super_poder1);

    printf ("\n");

    printf ("Carta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Codigo: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", nome_da_cidade2);
    printf ("Populacao: %ld\n", populacao2);
    printf ("Area: %.2f Km2\n",area2);
    printf ("PIB: %.2f bilhoes de reais\n", pib2);
    printf ("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per capta: %.2f reais\n", pib_percapta2);
    printf ("Super Poder: %.2f \n", super_poder2);

     printf ("\n");

    // comparacoes

    if (populacao1 > populacao2) {
        vencedor_populacao = 1;
    } else {
        vencedor_populacao = 0;
    }

    if (area1 > area2) {
            vencedor_area = 1;
    } else {
            vencedor_area = 0;
    }        

    if (pib1 > pib2) {
        vencedor_pib = 1;
    } else {
        vencedor_pib = 0;
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        vencedor_pontos_turisticos = 1;
    } else {
        vencedor_pontos_turisticos = 0;
    }

    if (densidade_populacional1 > densidade_populacional2) {
        vencedor_densidade_populacional = 1;
    } else {
        vencedor_densidade_populacional = 0;
    }

    if (pib_percapta1 > pib_percapta2) {
        vencedor_pib_percapta = 1;
    } else {
        vencedor_pib_percapta = 0;
    }

    if (super_poder1 > super_poder2) {
        vencedor_super_poder = 1;
    } else {
        vencedor_super_poder = 0;
    }

    printf ("Comparação de cartas:\n");

    if (vencedor_populacao == 1) {
        printf("Populacao:Carta 1 venceu (1)\n");
    } else {
        printf("Populacao:Carta 2 venceu (0)\n");
    }

    if (vencedor_area == 1) {
        printf ("Area:Carta 1 venceu (1)\n");
    } else {
        printf ("Area:Carta 2 venceu (0)\n");
    }

    if (vencedor_pib == 1) {
        printf ("PIB:Carta 1 venceu (1)\n");
    } else {
        printf ("PIB:Carta 2 venceu (0)\n");
    }

    if (vencedor_pontos_turisticos == 1) {
        printf ("Pontos Turisticos:Carta 1 venceu (1)\n");
    } else {
        printf ("Pontos Turisticos:Carta 2 venceu (0)\n");
    }

    if (vencedor_densidade_populacional == 1) {
        printf ("Densidade Populacional:Carta 1 venceu (1)\n");
    } else {
        printf ("Densidade Populacional:Carta 2 venceu (0)\n");
    }

    if (vencedor_pib_percapta == 1) {
        printf ("PIB per Capta:Carta 1 venceu (1)\n");
    } else {
        printf ("PIB per Capta:Carta 2 venceu (0)\n");
    }

    if (vencedor_super_poder == 1) {
        printf ("Super Poder:Carta 1 venceu (1)\n");
    } else {
        printf ("Super Poder:Carta 2 venceu (0)\n");
    }

    return 0;
}