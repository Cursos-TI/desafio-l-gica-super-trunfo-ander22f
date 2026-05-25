#include <stdio.h>


// Variáveis para armazenar os dados da carta 01 , //
  char estado1[25] = "A",
       codigo1[25] = "A01",
       cidade1[25] = "São Paulo";
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
       cidade2[25] = "Rio de Janeiro";
  int populacao2 = 6748000,
      turismo2 = 30;
  float area2 = 1200.25,
        pib2 = 300.50,
        pibpc02,
        densidadep02,
        supercarta2;

  // Variáveis escolhas menus

  int opcaomn1, opcaomn2, atributoesc1, atributoesc2;

  // Variáveis para armazenar os resultados das comparações de 2 atributos

  float resultado1, resultado2;
  float valor1_carta1, valor1_carta2,
      valor2_carta1, valor2_carta2;
  float soma_carta1, soma_carta2;

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
    printf("1. População: %d\n", populacao1);
    printf("2. Pontos Turísticos: %d\n", turismo1);
    printf("3. Área: %.2f km²\n", area1);
    printf("4. PIB: %.2f bilhões de reais\n", pib1);
    printf("5. Densidade Populacional: %.2f hab/km²\n", densidadep01);
    printf("6. PIB per capita: %.2f reais\n", pibpc01);
    printf("7. SUPER PODER: %.2f\n\n", supercarta1);
   }

void exibirdadoscarta02(){ // Área para exibição dos dados da carta 02
    printf("** CARTA 02 **\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("1. População: %d\n", populacao2);
    printf("2. Pontos Turísticos: %d\n", turismo2);
    printf("3. Área: %.2f km²\n", area2);
    printf("4. PIB: %.2f bilhões de reais\n", pib2);
    printf("5. Densidade Populacional: %.2f hab/km²\n", densidadep02);
    printf("6. PIB per capita: %.2f reais\n", pibpc02);
    printf("7. SUPER PODER: %.2f\n\n", supercarta2);
   }

void cauculosupercarta1(){ // Área para cauloculo do Super Poder da carta 01
    supercarta1 = (float) populacao1 + turismo1 + area1 + pib1 + pibpc01 - densidadep01;
}

void cauculosupercarta2(){ // Área para cauloculo do Super Poder da carta 02
    supercarta2 = (float) populacao2 + turismo2 + area2 + pib2 + pibpc02 - densidadep02;
  }

void compararcartas(){ // Área para comparação entre as cartas (Todos os atributos.)
    printf("-- COMPARAÇÃO ENTRE AS CARTAS --\n");

      
    
      if (populacao1 > populacao2) {
        printf("A carta %s %s Venceu com maior população.\n", codigo1, cidade1);
      } else if (populacao1 < populacao2) { // usei %s duas vezes para exibir o código e a cidade da carta vencedora.
        printf("A carta %s %s Venceu com maior população.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }

      if (turismo1 > turismo2) {
        printf("A carta %s %s Venceu com mais pontos turísticos.\n", codigo1, cidade1);
      } else if (turismo1 < turismo2) {
        printf("A carta %s %s Venceu com mais pontos turísticos.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }

      if (area1 > area2) {
            printf("A carta %s %s Venceu com a maior área.\n", codigo1, cidade1);
      } else if (area1 < area2) {
            printf("A carta %s %s Venceu com a maior área.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }

      if (pib1 > pib2) {
            printf("A Carta %s %s Venceu com o maior PIB.\n", codigo1, cidade1);
      } else if (pib1 < pib2) { 
            printf("A Carta %s %s Venceu com o maior PIB.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }

      if (densidadep01 < densidadep02) {
            printf("A Carta %s %s Venceu com a menor densidade populacional.\n", codigo1, cidade1);
      } else if (densidadep01 > densidadep02) {
            printf("A Carta %s %s Venceu com a menor densidade populacional.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }

      if (pibpc01 > pibpc02) {
            printf("A Carta %s %s Venceu com o maior PIB per capita.\n", codigo1, cidade1);
      } else if (pibpc01 < pibpc02) {
            printf("A Carta %s %s Venceu com o maior PIB per capita.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }

      if (supercarta1 > supercarta2) {
            printf("A Carta %s %s Venceu com o maior Super Poder.\n", codigo1, cidade1);
      } else if (supercarta1 < supercarta2) {
            printf("A Carta %s %s Venceu com o maior Super Poder.\n", codigo2, cidade2);
      } else {
            printf("As Cartas EMPATARAM!!\n");
      }



    }

void mostrarregras(){ // Área para exibição das regras do jogo
      printf("REGRAS DO JOGO:\n");
        printf("1. O jogo é disputado entre duas cartas, cada uma representando uma cidade com seus atributos.\n");
        printf("2. O jogador pode escolher comparar um atributo, dois atributos ou todos os atributos das cartas.\n");
        printf("3. Na comparação de um atributo, vence a carta que tiver o maior valor para aquele atributo (exceto para densidade populacional, onde vence a menor).\n");
        printf("4. Na comparação de dois atributos, o usário escolhe quais atributos comparar, e vence a carta que tiver a maior soma dos valores dos atributos escolhidos.\n");
        printf("5. Na comparação total, o sistema compara todos os atributos das cartas e exibe o vencedor de cada comparação.\n");
        printf("6. Em caso de empate em um atributo, é declarado empate para aquele atributo.\n");
        
}

void escolhaatributo(){ // Área para comparação entre as cartas (Um atributo escolhido pelo usuário.)
      printf("Escolha um atributo:\n"); // Exibição do menu de atributos para o usuário escolher o atributo a ser comparado.
        printf("1. População\n");
        printf("2. Pontos Turisticos\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");

      scanf("%d", &atributoesc1);
      switch (atributoesc1) 
      {
 case 1:
      printf("Atributo: População\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf(" %d X %d\n", populacao1, populacao2);
      if (populacao1 > populacao2) {
        printf("A carta %s %s Venceu com a maior população.\n", codigo1, cidade1);
      } else if (populacao1 < populacao2) { // usei %s duas vezes para exibir o código e a cidade da carta vencedora.
        printf("A carta %s %s Venceu com a maior população.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
 case 2:
      printf("Atributo: Pontos Turisticos\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf("       %d X %d\n", turismo1, turismo2);
      if (turismo1 > turismo2) {
        printf("A carta %s %s Venceu com mais pontos turísticos.\n", codigo1, cidade1);
      } else if (turismo1 < turismo2) {
        printf("A carta %s %s Venceu com mais pontos turísticos.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
 case 3:
      printf("Atributo: Área\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf("  %.2f X %.2f\n", area1, area2);
      if (area1 > area2) {
            printf("A carta %s %s Venceu com a maior área.\n", codigo1, cidade1);
      } else if (area1 < area2) {
            printf("A carta %s %s Venceu com a maior área.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
 case 4:
      printf("Atributo: PIB.\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf("   %.2f X %.2f\n", pib1, pib2);
      if (pib1 > pib2) {
            printf("A Carta %s %s Venceu com o maior PIB.\n", codigo1, cidade1);
      } else if (pib1 < pib2) { 
            printf("A Carta %s %s Venceu com o maior PIB.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
 case 5:
      printf("Atributo: Densidade Populacional.\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf("  %.2f X %.2f\n", densidadep01, densidadep02);
            if (densidadep01 < densidadep02) {
            printf("A Carta %s %s Venceu com a menor densidade populacional.\n", codigo1, cidade1);
      } else if (densidadep01 > densidadep02) {
            printf("A Carta %s %s Venceu com a menor densidade populacional.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
 case 6:
      printf("Atributo: PIB per capita.\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf(" %.2f X %.2f\n", pibpc01, pibpc02);
      if (pibpc01 > pibpc02) {
            printf("A Carta %s %s Venceu com o maior PIB per capita.\n", codigo1, cidade1);
      } else if (pibpc01 < pibpc02) {
            printf("A Carta %s %s Venceu com o maior PIB per capita.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
 case 7:
      printf("Atributo: Super Poder\n");
      printf("%s X %s\n", cidade1, cidade2);
      printf(" %.0f X %.0f\n", supercarta1, supercarta2);
      if (supercarta1 > supercarta2) {
            printf("A Carta %s %s Venceu com o maior Super Poder.\n", codigo1, cidade1);
      } else if (supercarta1 < supercarta2) {
            printf("A Carta %s %s Venceu com o maior Super Poder.\n", codigo2, cidade2);
      } else {
            printf("As cartas Empataram\n");
      }
            break;
      
      default: 
            printf("Escolha invalida!\n");
            break;
      }
}

void escoha2atributos(){ // Área para comparação entre as cartas (Dois atributos escolhidos pelo usuário.)

      printf("Escolha o primeiro atributo:\n"); // Exibição do menu de atributos para o usuário escolher o primeiro atributo a ser comparado.
      printf("1. População\n");
      printf("2. Pontos Turisticos\n");
      printf("3. Área\n");
      printf("4. PIB\n");
      printf("5. Densidade Populacional\n");
      printf("6. PIB per capita\n");
      printf("7. Super Poder\n");
      scanf("%d", &atributoesc1);

      switch (atributoesc1)     // Atribuição dos valores do primeiro atributos escolhido, armazenado nas variáveis valor1_carta1, valor1_carta2. 
      {      case 1:
            printf("Primeiro Atributo: População\n");
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            printf("Primeiro Atributo: Pontos Turisticos\n");
            valor1_carta1 = turismo1;
            valor1_carta2 = turismo2;
            break;
        case 3:
            printf("Primeiro Atributo: Área\n");
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 4:
            printf("Primeiro Atributo: PIB\n");
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 5:
            printf("Primeiro Atributo: Densidade Populacional\n");
            valor1_carta1 = densidadep01;
            valor1_carta2 = densidadep02;
            break;
        case 6:
            printf("Primeiro Atributo: PIB per capita\n");
            valor1_carta1 = pibpc01;
            valor1_carta2 = pibpc02;
            break;
        case 7:
            printf("Primeiro Atributo: Super Poder\n");
            valor1_carta1 = supercarta1;
            valor1_carta2 = supercarta2;
            break;
        default:
            printf("Escolha invalida!\n"); 
            break;
      }

        printf("Escolha o segundo atributo:\n");
        printf("1. População\n");
        printf("2. Pontos Turisticos\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");
        scanf("%d", &atributoesc2);
        
        if (atributoesc1 == atributoesc2) // Verificação para garantir que o usuário escolha atributos diferentes para a comparação.
        {
            printf("Atributos iguais! Escolha atributos diferentes!\n");
        } else {
        
        switch (atributoesc2) // Atribuição dos valores do segundo atributos escolhido, armazenado nas variáveis valor2_carta1, valor2_carta2.
        {      case 1:
            printf("Segundo Atributo: População\n\n");
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;

        case 2:
            printf("Segundo Atributo: Pontos Turisticos\n\n");
            valor2_carta1 = turismo1;
            valor2_carta2 = turismo2;
            break;

        case 3:
            printf("Segundo Atributo: Área\n\n");
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;

        case 4:
            printf("Segundo Atributo: PIB\n\n");
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;

        case 5:
            printf("Segundo Atributo: Densidade Populacional\n\n");
            valor2_carta1 = densidadep01;
            valor2_carta2 = densidadep02;
            break;

        case 6:
            printf("Segundo Atributo: PIB per capita\n\n");
            valor2_carta1 = pibpc01;
            valor2_carta2 = pibpc02;
            break;

        case 7:
            printf("Segundo Atributo: Super Poder\n\n");
            valor2_carta1 = supercarta1;
            valor2_carta2 = supercarta2;
            break;

        default:
            printf("Escolha invalida!\n");
            break;
          }


          printf("Disputa %s X %s\n", cidade1, cidade2);
          printf("Atributos escolhidos:\n");
          printf("%s e %s\n", // Aqui utilizei o operador ternário para exibir o nome do atributo escolhido com base no número selecionado pelo usuário.
                            atributoesc1 == 1 ? "População" : 
                            atributoesc1 == 2 ? "Pontos Turisticos" :
                            atributoesc1 == 3 ? "Área" :
                            atributoesc1 == 4 ? "PIB" :
                            atributoesc1 == 5 ? "Densidade Populacional" :
                            atributoesc1 == 6 ? "PIB per capita" : "Super Poder",

                            atributoesc2 == 1 ? "População" :
                            atributoesc2 == 2 ? "Pontos Turisticos" :
                            atributoesc2 == 3 ? "Área" :
                            atributoesc2 == 4 ? "PIB" :
                            atributoesc2 == 5 ? "Densidade Populacional" :
                            atributoesc2 == 6 ? "PIB per capita" : "Super Poder");

          printf("%s: %.2f e %.2f\n", cidade1, valor1_carta1, valor2_carta1); // Aqui exibo os valores dos atributos escolhidos para cada carta, utilizando as variáveis valor1_carta1, valor2_carta1
          printf("%s: %.2f e %.2f\n", cidade2, valor1_carta2, valor2_carta2); // valor1_carta2 e valor2_carta2 que foram atribuídas com base na escolha do usuário.

          resultado1 = valor1_carta1 + valor2_carta1; // Cálculo do resultado da carta 01 somando os valores dos dois atributos escolhidos.
          resultado2 = valor1_carta2 + valor2_carta2; // Cálculo do resultado da carta 02 somando os valores dos dois atributos escolhidos.

          printf("Resultado %s: %.2f\n", cidade1, resultado1); // Exibição do resultado da carta 01.
          printf("Resultado %s: %.2f\n", cidade2, resultado2); // Exibição do resultado da carta 02.

            if (resultado1 > resultado2) { // Comparação dos resultados para determinar a carta vencedora, considerando que o jogador vence se tiver o maior resultado.
                    printf("A Carta %s %s Venceu com a soma dos atributos escolhidos.\n", codigo1, cidade1);
            } else if (resultado1 < resultado2) {
                    printf("A Carta %s %s Venceu com a soma dos atributos escolhidos.\n", codigo2, cidade2);
            } else {
                    printf("As cartas Empataram!!\n");
            }
         

       }
    }


int main() {

    // Chamada das funções para entrada de dados das cartas. Deixei comentado para facilitar os testes, mas caso queira testar a entrada de dados, basta descomentar.
// entradadadoscarta01 (); // Chamada da função para entrada de dados da carta 01.
// entradadadoscarta02 (); // Chamada da função para entrada de dados da carta 02.

    // Chamada das funções para o calculo dos atributos: Densidade Populacional, PIB per capita e Super Poder, para que os valores estejam disponíveis para as comparações.
calculodensidadep01 (); 
calculodensidadep02 ();
calculopibpc01 ();
calculopibpc02 ();
cauculosupercarta1 ();
cauculosupercarta2 ();


printf("### SUPER TRUMFO EM C ###\n\n"); // Exibição do menu principal do jogo.
printf("1. INICIAR JOGO\n");
printf("2. COMO JOGAR\n");
printf("3. EXIBIR CARTAS\n");
printf("4. SAIR\n");
scanf("%d", &opcaomn1);

switch (opcaomn1) // Estrutura de controle para o menu principal, onde o usuário pode escolher iniciar o jogo, ver as regras ou sair.
{
case 1:
      printf("-- Escolha o tipo de comparação --\n\n");
      printf("1. Disputa Simples\n");
      printf("2. Disputa de 2 atributos.\n");
      printf("3. Disputa Total\n");
      scanf("%d", &opcaomn2);
      
      switch (opcaomn2) // Estrutura de controle para o menu de comparação, onde o usuário pode escolher entre comparar um atributo, dois atributos ou todos os atributos.
      {
      case 1:
      printf("--- DISPUTA SIMPLES ---\n\n"); // Aqui o usuário escolhe apenas um atributo para comparar entre as cartas.
      escolhaatributo();

        break;

      case 2:
      printf("--- DISPUTA DE DOIS ATRIBUTOS ---\n\n"); // Aqui o usuário escolhe dois atributos para comparar entre as cartas, e ganha quem tiver a maior soma dos valores dos atributos escolhidos.
      escoha2atributos();

        break;
      
      case 3:
      printf("--- DISPUTA TOTAL ---\n\n"); // Aqui o sistema compara todos os atributos das cartas, exibe o vencedor em cada comparação.
      compararcartas ();

        break;

      default:
      printf("Opcao invalida!\n");
        break;
      }

      break;

case 2:
      mostrarregras ();
      break;

case 3:
      exibirdadoscarta01();
      exibirdadoscarta02();

      break;

case 4:
      printf("SAINDO. . . .\n");
       break;

default:
      printf("Opcao invalida!\n");
      break;
}



  


return 0;
} 