#include <stdio.h>

int main() {

    //Dados da cidade 1
    char estado1;
    char codigo1[3];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Dados da cidade 2
    char estado2;   
    char codigo2[3];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    //Leitura dos dados da cidade 1
    printf("Digite o estado da cidade 1:\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Código (Até 3 caracteres):");
    scanf("%s", codigo1);
    printf("Nome da Cidade");
    scanf("%s", nomeCidade1);
    printf("População:");
    scanf("%d", &populacao1);
    printf("Área (em km²):");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib1);
    printf ("Número de pontos turísticos:");
    scanf("%d", &pontosturisticos1);

    //Leitura dos dados da cidade 2
    printf("Digite o estado da cidade 2:\n");
    printf("Estado (uma letra): ");
    scanf("%C", &estado2);
    printf("Código (Até 3 caracteres):");
    scanf("%s", codigo2);
    printf("Nome da Cidade");
    scanf("%s", nomeCidade2);
    printf("População:");
    scanf("%d", &populacao2);
    printf("Área (em km²):");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib2);
    printf ("Número de pontos turísticos:");
    scanf("%d", &pontosturisticos2);
    

    

}
