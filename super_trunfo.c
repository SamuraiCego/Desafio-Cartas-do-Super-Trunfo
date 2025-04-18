#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// Variaveis dos atributos
    char estado1, estado2;
    char cidade1[20], cidade2[20], codigo1[4], codigo2[4];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, PIB1, PIB2;

// Solicitando o usuário que insira os atributos da Carta 1

// Solicitação do Estado da Carta
    
    printf("Insira o Estado da Carta 1: \n");
    scanf("%c", &estado1);

// Solicitação do Código da Carta

    printf("Insira o Código da Carta 1: \n");
    scanf(" %s", codigo1);

// Solicitação do Nome da Cidade

    printf("Insira o Nome da Cidade da Carta 1: \n");
    scanf("%s", cidade1);

// Solicitação da população da cidade

    printf("Insira a população da cidade da Carta 1: \n");
    scanf("%d", &populacao1);

// Solicitação da Área em Km²

    printf("Insira a Área da Cidade em quilômetros quadrados da Carta 1: \n");
    scanf("%f", &area1);

// Solicitação do PIB da cidade

    printf("Insira o PIB da cidade da Carta 1: \n");
    scanf("%f", &PIB1);

// Solicitação de Quantidade de Pontos Turisticos

    printf("Insira a quantidade de pontos turisticos na cidade da Carta 1: \n");
    scanf("%d", &pontos1);

// Dividindo a população pela área e armazenando na variavel densidade1

float densidade1 = (float) populacao1 / area1;

// Dividindo o PIB pela população e armazenando na variavel densidade1

float capita1 =  (PIB1*1e9) / (float) populacao1;

// Solicitando o usuário que insira os atributos da Carta 2

// Solicitação do Estado da Carta

    printf("Insira o Estado da Carta 2: \n");
    scanf(" %c", &estado2);

// Solicitação do Código da Carta

    printf("Insira o Código da Carta 2: \n");
    scanf("%s", codigo2);

// Solicitação do Nome da Cidade

    printf("Insira o Nome da Cidade da Carta 2: \n");
    scanf("%s", cidade2);

// Solicitação da população da cidade

    printf("Insira a população da cidade da Carta 2: \n");
    scanf("%d", &populacao2);

// Solicitação da Área em Km²

    printf("Insira a Área da Cidade em quilômetros quadrados da Carta 2: \n");
    scanf("%f", &area2);

// Solicitação do PIB da cidade

    printf("Insira o PIB da cidade da Carta 2: \n");
    scanf("%f", &PIB2);

// Solicitação de Quantidade de Pontos Turisticos

    printf("Insira a quantidade de pontos turisticos na cidade da Carta 2: \n");
    scanf("%d", &pontos2);

// Dividindo a população pela área e armazenando o resultado na variaval densidade2

float densidade2 = (float) populacao2 / area2;

// Dividindo a o PIB da cidade pela sua população e armazenando o resultado na variavel capita2

float capita2 =  (PIB2*1e9) / (float) populacao2;


// Exibindo os resultados da Carta 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", capita1);

// Exibindo os resultados da Carta 2

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", capita2);

    return 0;
    
}
