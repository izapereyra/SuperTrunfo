#include <stdio.h>

int main (void){
    char estado1, estado2;
    // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char - "Para char simples você usa %c"
    char codigocarta1 [4], codigocarta2 [4];
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string) - "Para char[] (string) você usa %s"
    char cidade1 [50], cidade2 [50];
    // O nome da cidade. Tipo: char[] (string)
    int populacao1, populacao2;
    // O número de habitantes da cidade. Tipo: int
    float area1, area2;
    // A área da cidade em quilômetros quadrados. Tipo: float
    float pib1, pib2;
    // O Produto Interno Bruto da cidade. Tipo: float
    int ptur1, ptur2;
    // A quantidade de pontos turísticos na cidade. Tipo: int
    float densidade1, densidade2;
    // Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    float pibcapita1, pibcapita2;
    // Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.


    printf ("SUPER TRUNFO EM C - Desafio: nível aventureiro\n");

        // CARTA 1
    printf ("Digite uma letra de 'A' a 'H' para a primeira carta: ");
    scanf (" %c", &estado1);
    // Dar espaço antes do %c porque %d, %f, %s → ignoram automaticamente espaços e ENTER - %c → NÃO ignora

    printf ("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf ("%s", codigocarta1);

    printf ("Digite o nome da cidade para a primeira carta: ");
    scanf ("%s", cidade1);

    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao1);

    printf ("Digite a área da cidade em quilômetros quadrados: ");
    scanf ("%f", &area1);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turísticos na cidade: ");
    scanf ("%d", &ptur1);
    
    // Calculando densidade e pib per capita - Carta 1
    densidade1 = (float) populacao1 / area1;
    pibcapita1 = (float) pib1 / populacao1;

        // CARTA 2
    printf ("\nDigite uma letra de 'A' a 'H' para a segunda carta: ");
    scanf (" %c", &estado2);

    printf ("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf ("%s", codigocarta2);

    printf ("Digite o nome da cidade para a segunda carta: ");
    scanf ("%s", cidade2);

    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao2);

    printf ("Digite a área da cidade em quilômetros quadrados: ");
    scanf ("%f", &area2);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib2);

    printf ("Digite a quantidade de pontos turísticos na cidade: ");
    scanf ("%d", &ptur2);

    // Calculando densidade e pib per capita - Carta 2
    densidade2 = (float) populacao2 / area2;
    pibcapita2 = (float) pib2 / populacao2;


    // MOSTRANDO AS INFORMAÇÕES DIGITADAS:
    printf ("\n\nCarta 1\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigocarta1);
    printf ("Nome da Cidadade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", ptur1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf ("PIB per Capita: %.2f reais\n", pibcapita1);

    printf ("\nCarta 2\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigocarta2);
    printf ("Nome da Cidadade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", ptur2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf ("PIB per Capita: %.2f reais", pibcapita2);

    return 0;
}