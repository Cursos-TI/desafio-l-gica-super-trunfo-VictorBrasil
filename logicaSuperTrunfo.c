#include <stdio.h>
#include <string.h>


int main() {
// Variáveis para as duas cartas
    char estado1, estado2, codigo1[04], codigo2[04], cidade1[50], cidade2[50];
    
    int populacao1, populacao2, pontosT1, pontosT2;
    
    float area1, area2, pib1, pib2;


//Dados da carta 01

    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", &codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosT1);
    
// Dados da carta 02 

    printf("Cadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", &codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %s", &cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosT2);

// Exibição da primeira carta
    
    //printf("Carta 1\n");
    //printf("\n estado: %c", estado1);
    //printf("\n codigo: %s", codigo1);
    //printf("\n cidade: %s", cidade1);
    //printf("\n populacao: %d", populacao1);
    //printf("\n area: %.2f", area1);
    //printf("\n pib: %.2f", pib1);
    //printf("\n pontos turisticos: %d", pontosT1);

// Exibição da segunda carta    
    
    //printf("\nCarta 2\n");
    //printf("\n estado: %c", estado2);
    //printf("\n codigo: %s", codigo2);
    //printf("\n cidade: %s", cidade2);
    //printf("\n populacao: %d", populacao2);
    //printf("\n area: %.2f", area2);
    //printf("\n pib: %.2f", pib2);
    //printf("\n pontos turisticos: %d", pontosT2);

//Calculo de Densidade e PIB per capita das duas cartas  

    float DensidadePCarta1 = populacao1/area1;
    float DensidadePCarta2 = populacao2/area2;
    float PIB_Carta1 = pib1/populacao1;
    float PIB_Carta2 = pib2/populacao2;

//Comparativo de população das cartas

    if(populacao1>populacao2){
        printf("\nPopulacao:n");
        printf("\nCarta 1 - %s (%s): %d", codigo1, cidade1, populacao1);
        printf("\nCarta 2 - %s (%s): %d", codigo2, cidade2, populacao2);
        printf("\nCarta 1 (%s) Venceu\n",cidade1);
    }
    else{
        printf("\nPopulacao:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, populacao1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, populacao2);
        printf("\nCarta 2 (%s) Venceu\n",cidade2);
    }
        
//Comparativo de área das cartas

    if(area1>area2){
        printf("\nArea:\n");
        printf("\nCarta 1 - %s (%s): %.2f", codigo1, cidade1, area1);
        printf("\nCarta 2 - %s (%s): %.2f", codigo2, cidade2, area2);
        printf("\nCarta 1 (%s) Venceu\n",cidade1);
    }
    else{
        printf("\nArea:\n");
        printf("\nCarta 1 - %s (%s): %.2f", codigo1, cidade1, area1);
        printf("\nCarta 2 - %s (%s): %.2f", codigo2, cidade2, area2);
        printf("\nCarta 2 (%s) Venceu\n",cidade2);
    }
    
//Comparativo PIB    

    if(pib1>pib2){
        printf("\nPIB:\n");
        printf("\nCarta 1 - %s (%s): %.2f", codigo1, cidade1, pib1);
        printf("\nCarta 2 - %s (%s): %.2f", codigo2, cidade2, pib2);
        printf("\nCarta 1 (%s) Venceu\n",cidade1);
    }
    else{
        printf("\nPIB:\n");
        printf("\nCarta 1 - %s (%s): %.2f", codigo1, cidade1, pib1);
        printf("\nCarta 2 - %s (%s): %.2f", codigo2, cidade2, pib2);
        printf("\nCarta 2 (%s) Venceu\n",cidade2);
    }    
//Compativo pontos turisticos
    
    if(pontosT1>pontosT2){
        printf("\nPontos Turisticos:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, pontosT1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, pontosT2);
        printf("\nCarta 1 (%s) Venceu\n",cidade1);
    }
    else{
        printf("\nPontos Turisticos:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, pontosT1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, pontosT2);
        printf("\nCarta 2 (%s) Venceu\n",cidade2);
    }    
//Comparitivo densidade populacional
    
    if(DensidadePCarta1<DensidadePCarta2){
        printf("\nDensidade Populacional:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, DensidadePCarta1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, DensidadePCarta2);
        printf("\nCarta 1 (%s) Venceu\n",cidade1);
    }
    else{
        printf("\nDensidade Populacional:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, DensidadePCarta1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, DensidadePCarta2);
        printf("\nCarta 2 (%s) Venceu\n",cidade2);
    }    
    
//Comparativo PIB per capita    
    
    if(PIB_Carta1>PIB_Carta2){
        printf("\nPIB per capta:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, PIB_Carta1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, PIB_Carta2);
        printf("\nCarta 1 (%s) Venceu\n",cidade1);
    }
    else{
        printf("\nPIB per capta:\n");
        printf("\nCarta 1 - %s (%s): %.d", codigo1, cidade1, PIB_Carta1);
        printf("\nCarta 2 - %s (%s): %.d", codigo2, cidade2, PIB_Carta2);
        printf("\nCarta 2 (%s) Venceu\n",cidade2);
    } 
}

