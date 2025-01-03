#include <stdio.h>

//Este script tem a função de cadastrar as cartas A de super trunfo

int main(){
    char estado[20];
    char codigo[3];
    char cidade[25];
    unsigned long int populacao;
    float area;
    float pib;
    int ponto;
    float densidade;
    float capita;

    char estado2[20];
    char codigo2[3];
    char cidade2[25];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int ponto2;
    float densidade2;
    float capita2;

//Aqui o player irá insirir as informações das cartas
    printf("Insira as informações da sua carta A\n");
    printf("Estado:\n");
    scanf("%s", &estado);
    printf("Código(exemplo:A01, B02):\n");
    scanf("%s", &codigo);
    printf("Cidade:\n");
    scanf("%s", &cidade);
    printf("População total:\n");
    scanf("%ld", &populacao);
    printf("Área total:\n");
    scanf("%f", &area);
    printf("PIB de sua cidade:\n");
    scanf("%f", &pib);
    printf("Número total de pontos túristicos:\n");
    scanf("%d", &ponto);
    
    printf("Insira as informações da sua carta B\n");
    printf("Estado:\n");
    scanf("%s", &estado2);
    printf("Código(exemplo:A01, B02):\n");
    scanf("%s", &codigo2);
    printf("Cidade:\n");
    scanf("%s", &cidade2);
    printf("População total:\n");
    scanf("%ld", &populacao2);
    printf("Área total:\n");
    scanf("%f", &area2);
    printf("PIB de sua cidade:\n");
    scanf("%f", &pib2);
    printf("Número total de pontos túristicos:\n");
    scanf("%d", &ponto2);

//Abaixo será calculado a densidade populacional e o pib per capita da carta A
    densidade = populacao / area;
    capita = pib / populacao;
    
//Abaixo será calculado a densidade populacional e o pib per capita da carta B
    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2;

//As informações serão exibidas ao player
    printf("informações de sua carta A:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População total: %ld\n", populacao);
    printf("Área total: %.2f km²\n", area);
    printf("PIB %.2f bilhões de reais\n", pib);
    printf("Número total de pontos túristicos: %d\n", ponto);
    printf("Densidade populacional: %.1f\n", densidade);
    printf("PIB per capita: %f\n", capita);
    
    printf("informações de sua carta B:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População total: %ld\n", populacao2);
    printf("Área total: %.2f km²\n", area2);
    printf("PIB %.2f bilhões de reais\n", pib2);
    printf("Número total de pontos túristicos: %d\n", ponto2);
    printf("Densidade populacional: %.1f\n", densidade2);
    printf("PIB per capita: %f\n", capita2);
    
    return 0;
}
