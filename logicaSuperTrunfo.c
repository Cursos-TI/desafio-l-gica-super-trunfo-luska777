#include <stdio.h>

int main(){
    int populacao, turistico, populacao2, turistico2;
    char estado[50], cidade[50], numero[50], numero2[50];
    float area, pib, area2, pib2;

    printf("Digite a letra do estado 1: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade 1: \n");
    scanf(" %s", &cidade);

    printf("Digite o codigo da cidade 1: \n");
    scanf("%s", &numero);

    printf("Digite a area 1: \n");
    scanf("%f", &area);

    printf("Digite o pib 1: \n");
    scanf("%f", &pib);

    printf("Digite a populacao 1: \n");
    scanf("%d", &populacao);

    printf("Quantidade de pontos turisticos 1: \n");
    scanf("%d", &turistico);

    printf("Digite a letra do estado 2: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &cidade);

    printf("Digite o codigo da cidade 2: \n");
    scanf("%s", &numero2);

    printf("Digite a area 2: \n");
    scanf("%f", &area2);

    printf("Digite o pib 2: \n");
    scanf("%f", &pib2);

    printf("Digite a populacao 2: \n");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turisticos 2: \n");
    scanf("%d", &turistico2);

    if(area > area2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
    if(pib > pib2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
    if(populacao > populacao2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
    if(turistico > turistico2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }

    }