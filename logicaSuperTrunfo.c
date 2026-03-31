#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados 
//e printf para exibir as informações. 

// Variáveis para armazenar os dados da carta 01 , //
  char estado1[25] = "A",
       codigo1[25] = "A01",
       cidade1[25] = "SãoPaulo";
  int populacao1 = 12325000,
      turismo1 = 50;
  float area1 = 1521.11,
        pib1 = 699.28,
        pibpc01,
        densidadep01,
        supercarta1;

  // Variáveis para armazenar os dados da carta 02
  char estado2[25] = "B",
       codigo2[25] = "B02",
       cidade2[25] = "RiodeJaneiro";
  int populacao2 = 6748000,
      turismo2 = 30;
  float area2 = 1200.25,
        pib2 = 300.50,
        pibpc02,
        densidadep02,
        supercarta2;

  void entradadadoscarta01(){ // Área para entrada de dados da carta 01
    printf("** CARTA 01 **\n"); 
    printf("Digite o estado:\n"); 
    scanf("%s", &estado1);

    printf("Digite o código da carta: (Estado + numero da carta)\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turismo1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);
  }

  void entradadadoscarta02(){ // Área para entrada de dados da carta 02
    printf("** CARTA 02 **\n");
    printf("Digite o estado:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: (Estado + numero da carta)\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turismo2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);
  }

 void calculopibpc01(){ // Área para cálculo do PIB per capita da carta 01
    pibpc01 = (float) pib1*1000000000 / populacao1;
 }

  void calculopibpc02(){ // Área para cálculo do PIB per capita da carta 02
    pibpc02 = (float) pib2*1000000000 / populacao2;
 }

void calculodensidadep01(){ // Área para cálculo da densidade populacional da carta 01
    densidadep01 = (float) populacao1 / area1;
}

void calculodensidadep02(){ // Área para cálculo da densidade populacional da carta 02
    densidadep02 = (float) populacao2 / area2;
}

void exibirdadoscarta01(){ // Área para exibição dos dados da carta 01
    printf("** CARTA 01 **\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep01);
    printf("PIB per capita: %.2f reais\n", pibpc01);
    printf("SUPER PODER: %.2f\n\n", supercarta1);
   }

void exibirdadoscarta02(){ // Área para exibição dos dados da carta 02
    printf("** CARTA 02 **\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", turismo2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep02);
    printf("PIB per capita: %.2f reais\n", pibpc02);
    printf("SUPER PODER: %.2f\n\n", supercarta2);
   }

void cauculosupercarta1(){ // Área para cauloculo do Super Poder da carta 01
    supercarta1 = (float) populacao1 + turismo1 + area1 + pib1 + pibpc01 - densidadep01;}

void cauculosupercarta2(){ // Área para cauloculo do Super Poder da carta 02
    supercarta2 = (float) populacao2 + turismo2 + area2 + pib2 + pibpc02 - densidadep02;
  }

void compararcartas(){ // Área para comparação entre as cartas
    printf("-- COMPARAÇÃO ENTRE AS CARTAS --\n");

      
    
      if (populacao1 > populacao2) {
        printf("A carta %s %s Venceu com maior população.\n", codigo1, cidade1);
      } else { // usei %s duas vezes para exibir o código e a cidade da carta vencedora.
        printf("A carta %s %s Venceu com maior população.\n", codigo2, cidade2);
      }

      if (turismo1 > turismo2) {
        printf("A carta %s %s Venceu com mais pontos turísticos.\n", codigo1, cidade1);
      } else {
        printf("A carta %s %s Venceu com mais pontos turísticos.\n", codigo2, cidade2);
      }

      if (area1 > area2) {
            printf("A carta %s %s Venceu com maior área.\n", codigo1, cidade1);
      } else {
            printf("A carta %s %s Venceu com maior área.\n", codigo2, cidade2);
      }

      if (pib1 > pib2) {
            printf("A Carta %s %s Venceu com o maior PIB.\n", codigo1, cidade1);
      } else { 
            printf("A Carta %s %s Venceu com o maior PIB.\n", codigo2, cidade2);
      }

      if (densidadep01 < densidadep02) {
            printf("A Carta %s %s Venceu com a menor densidade populacional.\n", codigo1, cidade1);
      } else {
            printf("A Carta %s %s Venceu com a menor densidade populacional.\n", codigo2, cidade2);
      }

      if (pibpc01 > pibpc02) {
            printf("A Carta %s %s Venceu com o maior PIB per capita.\n", codigo1, cidade1);
      } else {
            printf("A Carta %s %s Venceu com o maior PIB per capita.\n", codigo2, cidade2);
      }

      if (supercarta1 > supercarta2) {
            printf("A Carta %s %s Venceu com o maior Super Poder.\n", codigo1, cidade1);
      } else {
            printf("A Carta %s %s Venceu com o maior Super Poder.\n", codigo2, cidade2);
      }



    }

  

int main() {
// Deixei comentado as funções de entrada de dados para facilitar os testes, mas você pode descomentar para fazer a entrada de dados manualmente.

//entradadadoscarta01(); // Função para entrada de dados da carta 01
//entradadadoscarta02(); // Função para entrada de dados da carta 02

calculopibpc01(); // Função para cálculo do PIB per capita da carta 01
calculopibpc02(); // Função para cálculo do PIB per capita da carta 02

calculodensidadep01(); // Função para cálculo da densidade populacional da carta 01
calculodensidadep02(); // Função para cálculo da densidade populacional da carta 02

cauculosupercarta1(); // Função para calcular o Super poder da carta 01
cauculosupercarta2(); // Função para calcular o Super poder da carta 02

exibirdadoscarta01(); // Função para exibição dos dados da carta 01
exibirdadoscarta02(); // Função para exibição dos dados da carta 02

compararcartas(); // Função para calcular a comparação das cartas.

 

  


return 0;
} 


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


