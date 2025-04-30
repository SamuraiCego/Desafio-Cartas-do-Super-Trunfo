#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
// Declaração de Variaveis
    char estado1, estado2;
    char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
    int populacao1, populacao2, pontos1, pontos2, atributo1, atributo2;
    float area1, area2, PIB1, PIB2, resultado1, resultado2;

// Solicitando o usuário que insira os atributos da Carta 1

// Solicitação do Estado da Carta
    
    printf("Insira o Estado da Carta 1: \n");
    scanf("%c", &estado1);

// Solicitação do Código da Carta

    printf("Insira o Código da Carta 1: \n");
    scanf("%s", codigo1);

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

 //Dividindo a população pela área e armazenando na variavel densidade1

float densidade1 = (float) populacao1 / area1;

// Dividindo o PIB pela população e armazenando na variavel densidade1

float capita1 =  (PIB1*1e9) / (float) populacao1;

// Calculando o Super Poder da Carta 1 e armazenando na variavel poder1

float poder1 = (float) populacao1 + area1 + PIB1 + pontos1 + capita1 + (1/densidade1);

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

//Dividindo a população pela área e armazenando o resultado na variaval densidade2 

float densidade2 = (float) populacao2 / area2;

// Dividindo a o PIB da cidade pela sua população e armazenando o resultado na variavel capita2

float capita2 =  (PIB2*1e9) / (float) populacao2;

// Calculando o Super Poder da Carta 2 e armazenando na variavel poder1

float poder2 = (float) populacao2 + area2 + PIB2 + pontos2 + capita2 + (1/densidade2);

// Exibindo os resultados da Carta 1

printf("Carta 1\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
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
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f\n", densidade2);
printf("PIB per Capita: %.2f\n", capita2);

// Mostrando as opções de escolha para o usuário e solicitando a entrada da escolha

    printf("Agora vamos comparar as cartas\n");
    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &atributo1);
    printf("Agora escolha o segundo atributo da comparação: \n");

// Criando um if else para remover a opção que o usuário já escolheu
    
    if (atributo1 == 1){
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turisticos\n");
        printf("5. Densidade Demográfica\n");
        } else if(atributo1 == 2){
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turisticos\n");
        printf("5. Densidade Demográfica\n");
        } else if(atributo1==3){
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Número de pontos turisticos\n");
        printf("5. Densidade Demográfica\n");
        } else if(atributo1==4){
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade Demográfica\n");
        } else if(atributo1==5){
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turisticos\n");
        }
    scanf("%d", &atributo2);
    

// Criando um if else para garantir que o usuario não escolha o mesmo numero

    if (atributo1 != atributo2){

// Criando um switch para comparar o primeiro atributo
        switch (atributo1){

// Criando uma case para cada possivel escolha de usuario

        
        case 1:
            printf("Comparação do primeiro atributo\n");
            printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
            printf("Atributo utilizado: População\n");
            printf("Valores de cada carta: %d - %d\n", populacao1, populacao2);
            if (populacao1 > populacao2){
                printf("Vencedor da primeira comparação de atributos: Carta 1\n");
            } else if (populacao2 > populacao1){
                    printf("Vencedor da primeira comparação de atributos: Carta 2\n");
                } else{
                    printf("Vencedor da primeira comparação de atributos: Empate\n");
                }
            

        break;

        case 2:
            printf("Comparação do primeiro atributo\n");
            printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
            printf("Atributo utilizado: Área\n");
            printf("Valores de cada carta: %.2f - %.2f\n", area1, area2);
            if (area1 > area2){
                printf("Vencedor da primeira comparação de atributos: Carta 1\n");
            } else if (area2 > area1){
                    printf("Vencedor da primeira comparação de atributos: Carta 2\n");
                } else{
                    printf("Vencedor da primeira comparação de atributos: Empate\n");
                }
        break;

        case 3:
        printf("Comparação do primeiro atributo\n");
        printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo utilizado: PIB\n");
        printf("Valores de cada carta: %.2f - %.2f\n", PIB1, PIB2);
        if (PIB1 > PIB2){
            printf("Vencedor da primeira comparação de atributos: Carta 1\n");
        } else if (PIB2 > PIB1){
                printf("Vencedor da primeira comparação de atributos: Carta 2\n");
            } else{
                printf("Vencedor da primeira comparação de atributos: Empate\n");
            }
        break;
        case 4:
        printf("Comparação do primeiro atributo\n");
        printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo utilizado: Número de Pontos Turisticos\n");
        printf("Valores de cada carta: %d - %d\n", pontos1, pontos2);
        if (pontos1 > pontos2){
            printf("Vencedor da primeira comparação de atributos: Carta 1\n");
        } else if (pontos1 < pontos2){
                printf("Vencedor da primeira comparação de atributos: Carta 2\n");
            } else{
                printf("Vencedor da primeira comparação de atributos: Empate\n");
            }
        break;
        case 5:
        printf("Comparação do primeiro atributo\n");
        printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo utilizado: Densidade Demográfican");
        printf("Valores de cada carta: %.2f - %.2f\n", densidade1, densidade2);
        if (densidade1 < densidade2){
            printf("Vencedor da primeira comparação de atributos: Carta 1\n");
        } else if (densidade1 > densidade2){
                printf("Vencedor da primeira comparação de atributos: Carta 2\n");
            } else{
                printf("Vencedor da primeira comparação de atributos: Empate\n");
            }
        break;
        default:
        printf("Valor Invalido\n");
    }

    
// criando um switch para comparação do atributo 2

        switch (atributo2)
    {
        case 1:
        printf("Comparação do segundo atributo\n");
        printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo utilizado: População\n");
        printf("Valores de cada carta: %d - %d\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("Vencedor da segunda comparação de atributos: Carta 1\n");
        } else if (populacao2 > populacao1){
                printf("Vencedor da segunda comparação de atributos: Carta 2\n");
            } else{
                printf("Vencedor da segunda comparação de atributos: Empate\n");
            }
        

        break;

        case 2:
            printf("Comparação do segundo atributo\n");
            printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
            printf("Atributo utilizado: Área\n");
            printf("Valores de cada carta: %.2f - %.2f\n", area1, area2);
            if (area1 > area2){
                printf("Vencedor da segunda comparação de atributos: Carta 1\n");
            } else if (area2 > area1){
                    printf("Vencedor da segunda comparação de atributos: Carta 2\n");
                } else{
                    printf("Vencedor da segunda comparação de atributos: Empate\n");
                }
        break;

        case 3:
            printf("Comparação do segundo atributo\n");
            printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
            printf("Atributo utilizado: PIB\n");
            printf("Valores de cada carta: %.2f - %.2f\n", PIB1, PIB2);
            if (PIB1 > PIB2){
            printf("Vencedor da segunda comparação de atributos: Carta 1\n");
            } else if (PIB2 > PIB1){
                printf("Vencedor da segunda comparação de atributos: Carta 2\n");
            } else{
                printf("Vencedor da segunda comparação de atributos: Empate\n");
        }
        break;
        case 4:
            printf("Comparação do segundo atributo\n");
            printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
            printf("Atributo utilizado: Número de Pontos Turisticos\n");
            printf("Valores de cada carta: %d - %d\n", pontos1, pontos2);
            if (pontos1 > pontos2){
            printf("Vencedor da primeira comparação de atributos: Carta 1\n");
            } else if (pontos1 < pontos2){
                printf("Vencedor da segunda comparação de atributos: Carta 2\n");
            } else{
                printf("Vencedor da segunda comparação de atributos: Empate\n");
        }
        break;
        case 5:
            printf("Comparação do segundo atributo\n");
            printf("Nome das cidades: %s - %s\n", cidade1, cidade2);
            printf("Atributo utilizado: Densidade Demográfica\n");
            printf("Valores de cada carta: %.2f - %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2){
                printf("Vencedor da segunda comparação de atributos: Carta 1\n");
            } else if (densidade1 > densidade2){
                    printf("Vencedor da segunda comparação de atributos: Carta 2\n");
                } else{
                    printf("Vencedor da segunda comparação de atributos: Empate\n");
                }
        
        break;
    
        default:
                printf("Valor Invalido\n");
        break;
    }
    
// Somando os atributos e mostrando o vencedor utilizando o if para verificar cada possivel combinação de escolhas do usuário

        printf("Soma dos Atributos\n");
        if ((atributo1 == 1) && (atributo2 == 2) || (atributo1 == 2) && (atributo2 == 1)){
            resultado1 = populacao1 + area1;
            resultado2 = populacao2 + area2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
            
        } else if ((atributo1 == 1) && (atributo2 == 3) || (atributo1 == 3) && (atributo2 == 1)){
            resultado1 = populacao1 + PIB1;
            resultado2 = populacao2 + PIB2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        } else if ((atributo1 == 1) && (atributo2 == 4)|| (atributo1 == 4) && (atributo2 == 1)){
            resultado1 = populacao1 + pontos1;
            resultado2 = populacao2 + pontos2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        } else if ((atributo1 == 1) && (atributo2 == 5) || (atributo1 == 5) && (atributo2 == 1)){
            resultado1 = populacao1 + densidade1;
            resultado2 = populacao2 + densidade2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        }  else if ((atributo1 == 2) && (atributo2 == 3) || (atributo1 == 3) && (atributo2 == 2)){
            resultado1 = area1 + PIB1;
            resultado2 = area2 + PIB2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        }  else if ((atributo1 == 2) && (atributo2 == 4) || (atributo1 == 4) && (atributo2 == 2)){
            resultado1 = area1 + pontos1;
            resultado2 = area2 + pontos2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        } else if ((atributo1 == 2) && (atributo2 == 5) || (atributo1 == 5) && (atributo2 == 2)){
            resultado1 = area1 + densidade1;
            resultado2 = area2 + densidade2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        
        }  else if ((atributo1 == 3) && (atributo2 == 4) || (atributo1 == 4) && (atributo2 == 3)){
            resultado1 = PIB1 + pontos1;
            resultado2 = PIB2 + pontos2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        } else if ((atributo1 == 3) && (atributo2 == 5) || (atributo1 == 5) && (atributo2 == 3)){
            resultado1 = PIB1 + densidade1;
            resultado2 = PIB2 + densidade2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        } else if ((atributo1 == 4) && (atributo2 == 5) || (atributo1 == 5) && (atributo2 == 3)){
            resultado1 = pontos1 + densidade1;
            resultado2 = pontos1 + densidade2;
            printf("A  soma dos atributos: %.2f - %.2f\n", resultado1, resultado2);
            if (resultado1 > resultado2){
                printf("A carta 1 venceu a soma dos atributos\n");
            } else if(resultado2 > resultado1){
                printf("A carta 2 venceu a soma dos atributos\n");
            } else{
                printf("Houve um empate na soma dos atributos\n");
            }
        }   
        
        } else{
        printf("Dois atributos iguais não podem ser selecionados\n");
    }

    return 0;
    
}
