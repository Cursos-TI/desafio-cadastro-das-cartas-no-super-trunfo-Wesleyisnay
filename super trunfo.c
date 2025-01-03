#include <stdio.h>

//Este script tem a função de cadastrar as cartas de super trunfo

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
    
//Aqui o player irá insirir as informações das cartas
    printf("Insira as informações da sua carta\n");
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
    
//Abaixo será calculado a densidade populacional e o pib per capita
    densidade = populacao / area;
    capita = pib / populacao;

//As informações serão exibidas ao player    
    printf("informações de sua carta:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População total: %ld\n", populacao);
    printf("Área total: %2f km²\n", area);
    printf("PIB %2f bilhões de reais\n", pib);
    printf("Número total de pontos túristicos: %d\n", ponto);
    printf("Densidade populacional: %.1f\n", densidade);
    printf("PIB per capita: %f\n", capita);
}
