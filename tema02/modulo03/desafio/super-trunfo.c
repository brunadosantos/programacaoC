#include <stdlib.h>
#include <stdio.h>

int main() {
    // Definição de variáveis
    char pais1[30] = "Brasil", pais2[30] = "Portugal";
    char estado1[20] = "SP", estado2[20] = "LX";
    char codigo1[20] = "A01", codigo2[20] = "B02";
    char cidade1[30] = "SãoPaulo", cidade2[30] = "Lisboa";
    
    int populacaoCarta1 = 11450, populacaoCarta2 = 545142;
    int ponto_turisticoCarta1 = 19, ponto_turisticoCarta2 = 16;

    float areaCarta1 = 1521.202, areaCarta2 = 100.05;
    float pibCarta1 = 828.900, pibCarta2 = 87.368;
    float densidade_populacionalCarta1; 
    float densidade_populacionalCarta2;
    float pib_per_capitaCarta1;
    float pib_per_capitaCarta2;

    int numeroAtributo1, numeroAtributo2;
    int resultado1, resultado2;
    int inversoDensidadeCarta1, inversoDensidadeCarta2;
    int superPoderCarta1, superPoderCarta2;

    // Cálculo densidade populacional e pib per capita
    // Carta 1
    densidade_populacionalCarta1 = (float) populacaoCarta1 / areaCarta1;
    pib_per_capitaCarta1 = (float) populacaoCarta1 / pibCarta1;
    // Carta 2
    densidade_populacionalCarta2 = (float) populacaoCarta2 / areaCarta2;
    pib_per_capitaCarta2 = (float) populacaoCarta2 / pibCarta2;

    // cálculo super poder e inverso da densidade populacional
    inversoDensidadeCarta1 = 1 / densidade_populacionalCarta1;
    inversoDensidadeCarta2 = 1 / densidade_populacionalCarta2;
    // Carta 1
    superPoderCarta1 = populacaoCarta1 + areaCarta1 + pibCarta1 + ponto_turisticoCarta1 + pib_per_capitaCarta1 + inversoDensidadeCarta1;
    // Carta 2
    superPoderCarta2 = populacaoCarta2 + areaCarta2 + pibCarta2 + ponto_turisticoCarta2 + pib_per_capitaCarta2 + inversoDensidadeCarta2;

    // Menu interativo 1
    printf("----- Bem vindo ao jogo Super Trunfo! -----\n");
    printf("----- Vamos começar! -----\n");
    printf("\n");

    printf("Primeiro Atributo\n");
    printf("------------------------------\n");
    printf("Escolha o primeiro atributo que deseja comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &numeroAtributo1);

    printf("\n");
    
    switch (numeroAtributo1)
    {
    case 1:
        printf("----- Você escolheu o atributo População -----\n");
        resultado1 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("----- Exibição dos dados das cartas -----\n");
        printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, populacaoCarta1);
        printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, populacaoCarta2);
        
        if (populacaoCarta1 > populacaoCarta2){
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 1 (%s) Venceu!\n", cidade1); 
        } else if (populacaoCarta1 < populacaoCarta2) {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Houve um empate\n");
        }

        break;
    case 2:
        printf("----- Você escolheu o atributo Área -----\n");
        resultado1 = areaCarta1 > areaCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("----- Exibição dos dados das cartas -----\n");
        printf("Carta 1 - %s, %s (%s): %.2f km²\n", pais1, cidade1, estado1, areaCarta1);
        printf("Carta 2 - %s, %s (%s): %.2f km²\n", pais2, cidade2, estado2, areaCarta2);        
        
        if (areaCarta1 > areaCarta2){ 
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 1 (%s) Venceu!\n", cidade1); 
        } else if (areaCarta1 < areaCarta2) {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 2 (%s) Venceu!\n", cidade2); 
        } else {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Houve um empate\n");
        }

        break;
    case 3:
        printf("----- Você escolheu o atributo PIB -----\n");
        resultado1 = pibCarta1 > pibCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("----- Exibição dos dados das cartas -----\n");
        printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pibCarta1);
        printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pibCarta2);
        
        if (pibCarta1 > pibCarta2){
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if (pibCarta1 < pibCarta2) {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Houve um empate\n");
        }

        break;
    case 4:
        printf("----- Você escolheu o atributo Ponto Turistíco -----\n");
        resultado1 = ponto_turisticoCarta1 > ponto_turisticoCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("----- Exibição dos dados das cartas -----\n");
        printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, ponto_turisticoCarta1);
        printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, ponto_turisticoCarta2);
        
        if (ponto_turisticoCarta1 > ponto_turisticoCarta2){
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if(ponto_turisticoCarta1 < ponto_turisticoCarta2) {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 2 (%s) Venceu!\n", cidade2); 
        } else {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Houve um empate\n");
        }

        break;
    case 5:
        printf("----- Você escolheu o atributo Densidade Populacional -----\n");
        resultado1 = densidade_populacionalCarta1 < densidade_populacionalCarta2 ? 1 : 0;
                            
        printf("\n");
        printf("----- Exibição dos dados das cartas -----\n");
        printf("Carta 1 - %s, %s (%s): %.2f hab/km²\n", pais1, cidade1, estado1, densidade_populacionalCarta1);
        printf("Carta 2 - %s, %s (%s): %.2f hab/km²\n", pais2, cidade2, estado2, densidade_populacionalCarta2);
        
        if (densidade_populacionalCarta1 < densidade_populacionalCarta2){
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if(densidade_populacionalCarta1 > densidade_populacionalCarta2) {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Houve um empate\n");
        }

        break;
    case 6:
        printf("----- Você escolheu o atributo PIB per capita -----\n");
        resultado1 = pib_per_capitaCarta1 > pib_per_capitaCarta2 ? 1 : 0;
                    
        printf("\n");
        printf("----- Exibição dos dados das cartas -----\n");
        printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pib_per_capitaCarta1);
        printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pib_per_capitaCarta2);

        if (pib_per_capitaCarta1 > pib_per_capitaCarta2){
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 1 (%s) Venceu!\n", cidade1);
        } else if (pib_per_capitaCarta1 < pib_per_capitaCarta2){
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Carta 2 (%s) Venceu!\n", cidade2);
        } else {
            printf("\n");
            printf("***** ***** ***** *****\n");
            printf("Houve um empate\n");
        }

        break;
    default:
        printf("Opção Inválida! Tente novamente.");
        exit(0);
        break;
    }

    // Menu interativo 2
    printf("\n");
    printf("Segundo Atributo\n");
    printf("------------------------------\n");
    printf("Escolha o segundo atributo que deseja comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &numeroAtributo2);

    printf("\n");

    if (numeroAtributo1 == numeroAtributo2)
    {
        printf("Você escolheu o mesmo atributo! Tente novamente.\n");
    } else {
        switch (numeroAtributo2)
        {
        case 1:
            printf("----- Você escolheu o atributo População -----\n");
            resultado2 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
                        
            printf("\n");
            printf("----- Exibição dos dados das cartas -----\n");
            printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, populacaoCarta1);
            printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, populacaoCarta2);

            if (populacaoCarta1 > populacaoCarta2){
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 1 (%s) Venceu!\n", cidade1); 
            } else if (populacaoCarta1 < populacaoCarta2) {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Houve um empate\n");
            }

            break;
        case 2:
            printf("----- Você escolheu o atributo Área -----\n");
            resultado2 = areaCarta1 > areaCarta2 ? 1 : 0;
                        
            printf("\n");
            printf("----- Exibição dos dados das cartas -----\n");
            printf("Carta 1 - %s, %s (%s): %.2f km²\n", pais1, cidade1, estado1, areaCarta1);
            printf("Carta 2 - %s, %s (%s): %.2f km²\n", pais2, cidade2, estado2, areaCarta2);
            

            if (areaCarta1 > areaCarta2){ 
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 1 (%s) Venceu!\n", cidade1); 
            } else if (areaCarta1 < areaCarta2) {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 2 (%s) Venceu!\n", cidade2); 
            } else {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Houve um empate\n");
            }

            break;
        case 3:
            printf("----- Você escolheu o atributo PIB -----\n");
            resultado2 = pibCarta1 > pibCarta2 ? 1 : 0;
                        
            printf("\n");
            printf("----- Exibição dos dados das cartas -----\n");
            printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pibCarta1);
            printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pibCarta2);
            
            if (pibCarta1 > pibCarta2){
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if (pibCarta1 < pibCarta2) {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Houve um empate\n");
            }

            break;
        case 4:
            printf("----- Você escolheu o atributo Ponto Turistíco -----\n");
            resultado2 = ponto_turisticoCarta1 > ponto_turisticoCarta2 ? 1 : 0;
            
            printf("\n");
            printf("----- Exibição dos dados das cartas -----\n");
            printf("Carta 1 - %s, %s (%s): %d\n", pais1, cidade1, estado1, ponto_turisticoCarta1);
            printf("Carta 2 - %s, %s (%s): %d\n", pais2, cidade2, estado2, ponto_turisticoCarta2);

            if (ponto_turisticoCarta1 > ponto_turisticoCarta2){
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if(ponto_turisticoCarta1 < ponto_turisticoCarta2) {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 2 (%s) Venceu!\n", cidade2); 
            } else {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Houve um empate\n");
            }

            break;
        case 5:
            printf("----- Você escolheu o atributo Densidade Populacional -----\n");
            resultado2 = densidade_populacionalCarta1 < densidade_populacionalCarta2 ? 1 : 0;
            
            printf("\n");
            printf("----- Exibição dos dados das cartas -----\n");
            printf("Carta 1 - %s, %s (%s): %.2f hab/km²\n", pais1, cidade1, estado1, densidade_populacionalCarta1);
            printf("Carta 2 - %s, %s (%s): %.2f hab/km²\n", pais2, cidade2, estado2, densidade_populacionalCarta2);
            
            if (densidade_populacionalCarta1 < densidade_populacionalCarta2){
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if(densidade_populacionalCarta1 > densidade_populacionalCarta2) {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Houve um empate\n");
            }

            break;
        case 6:
            printf("----- Você escolheu o atributo PIB per capita -----\n");
            resultado2 = pib_per_capitaCarta1 > pib_per_capitaCarta2 ? 1 : 0;

            printf("\n");
            printf("----- Exibição dos dados das cartas -----\n");
            printf("Carta 1 - %s, %s (%s): R$ %.2f bilhões\n", pais1, cidade1, estado1, pib_per_capitaCarta1);
            printf("Carta 2 - %s, %s (%s): R$ %.2f bilhões\n", pais2, cidade2, estado2, pib_per_capitaCarta2);
            
            if (pib_per_capitaCarta1 > pib_per_capitaCarta2){
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 1 (%s) Venceu!\n", cidade1);
            } else if (pib_per_capitaCarta1 < pib_per_capitaCarta2){
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Carta 2 (%s) Venceu!\n", cidade2);
            } else {
                printf("\n");
                printf("***** ***** ***** *****\n");
                printf("Houve um empate\n");
            }

            break;
        default:
            printf("Opção Inválida! Tente novamente.");
            exit(0);
            break;
        }

        printf("\n");

        printf("----- Resultado -----\n");
        printf("\n");

        printf("Resultado Atributo: \n");

        if (resultado1 && resultado2){
            printf("Carta 1 venceu nos atributos\n");
            printf("Parabéns, Você ganhou!\n");
        } else if (resultado1 != resultado2){
            printf("\n");
        } else {
            printf("Carta 2 venceu nos atributos\n");
            printf("Infelizmente você perdeu! :(\n");
        }
        
        printf("\n");
        printf("Resultado Super Poder: \n");

        printf("Super Poder 1: %d\n", superPoderCarta1);
        printf("Super Poder 2: %d\n", superPoderCarta2);
        
        if (superPoderCarta1 > superPoderCarta2)
        {
            printf("\n");
            printf("Carta 1 venceu com Super Poder\n");
            printf("Parabéns, Você ganhou!\n");
        } else if (superPoderCarta1 < superPoderCarta2) 
        {   
            printf("\n");
            printf("Carta 2 venceu com Super Poder\n");
            printf("Infelizmente você perdeu! :(\n");
        } else {
            printf("\n");
            printf("Houve um empate de Super Poderes!\n");
        }
        

        printf("\n");
    }
    
    return 0;
}

/* Explicação lógica do jogo

    1. Caso escolha o atributo população, acontecerá o seguinte:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
    A variável resultado1 vai armazenar o resultado da comparação das cartas
    (se retornar 1 significa que venci)
    (se retornar 0 significa que perdi)    
        
    2. Depois do primeiro atributo, vou escolher outro para comparação, exemplo:
        resultado2 = densidade_populacionalCarta1 < densidade_populacionalCarta2 ? 1 : 0;
    A variável resultado2 vai armazenar o resultado da comparação das cartas
    (se retornar 1 significa que venci)
    (se retornar 0 significa que perdi)
    (no caso da densidade populacional a com menor valor vence)

    3. Se escolher população novamente no segundo atributo, o jogo se encerra.

    4. Exemplos de lógica para vencer, perder ou empatar:
        
        Venceu!
        1ª população = 1
        2ª densidade populacional = 1 

        Perdeu!
        1ª população = 0
        2ª densidade populacional = 0

        Empatou
        1ª população = 1
        2ª densidade populacional = 0 
*/

/*  Regras para desenvolvimento da lógica do jogo

    1. O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes. 
    
    2. Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.
    
    3. Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
    
    4. Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
    
    5. Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.
    
    6. Mostre o resultado da comparação de forma clara e organizada, incluindo:
    
        1. O nome dos dois países.
        2. Os dois atributos usados na comparação.
        3. Os valores de cada atributo para cada carta.
        4. A soma dos atributos para cada carta.
        5. Qual carta venceu (ou se houve empate).
    */