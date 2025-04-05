#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Variaveis

char estado[50], nomecidade[50], codigocarta[50], estado2[50], nomecidade2[50],
codigocarta2[50];
int populacao, pontotur, populacao2, pontotur2;
float area, pib, pibpercapt, densidade, area2, pib2, pibpercapt2, densidade2;


//Obtendo dados carta 1


printf(" *** CARTA 1 *** \n");
printf("\n");
//Entrada de Dados Carta 1
// Nome do estado
printf("insira o estado: \n");
scanf("%s", &estado);
// Codigo da carta
printf("Insira o codigo da carta: \n");
scanf("%s", &codigocarta);
// Nome da Cidade
printf("Insira o nome da cidade: \n");
scanf("%s", &nomecidade);
// Numero de habitantes
printf("Insira o numero de habitantes: \n");
scanf("%d", &populacao);
// Area total do estado
printf("Insira a área do estado (em Km2): \n");
scanf("%f", &area);
// PIB do estado
printf("insira o PIB do estado: \n");
scanf("%f", &pib);
// Numero de pontos turisticos
printf("Insira o numero de pontos turisticos: \n");
scanf("%d", &pontotur);


//Obtendo dados carta 2

printf(" *** CARTA 2 *** \n");
printf("\n");
//Entrada de Dados Carta 1
// Nome do estado
printf("insira o estado: \n");
scanf("%s", &estado2);
// Codigo da carta
printf("Insira o codigo da carta: \n");
scanf("%s", &codigocarta2);
// Nome da Cidade
printf("Insira o nome da cidade: \n");
scanf("%s", &nomecidade2);
// Numero de habitantes
printf("Insira o numero de habitantes: \n");
scanf("%d", &populacao2);
// Area total do estado
printf("Insira a área do estado (em Km2): \n");
scanf("%f", &area2);
// PIB do estado
printf("insira o PIB do estado: \n");
scanf("%f", &pib2);
// Numero de pontos turisticos
printf("Insira o numero de pontos turisticos: \n");
scanf("%d", &pontotur2);



// Nível Aventureiro
//Cálculos carta 1

densidade = (float) populacao / area;
pibpercapt =  pib / (float) populacao;
float super = (float) populacao + area + pib + (float)pontotur + 
densidade + pibpercapt;

//Cálculos carta 2

densidade2 = (float) populacao2 / area2;
pibpercapt2 =  pib2 / (float) populacao2;
float super2 = (float) populacao2 + area2 + pib2 + (float)pontotur2 + 
densidade2 + pibpercapt2;





// Imprimir informações da carta 1 na na tela
printf("\n");
printf(" *** CARTA 1 *** \n");
printf("\n");
printf("Estado: %s\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "População: %d\n"
    "Area: %.2f\n"
    "PIB: %.2f\n"
    "Pontos Turitiscos: %d\n"
    "Densidade populacional: %.2f\n"
    "Pib Per Capita: %.2f\n"
    "Super Poder: %.2f\n"
    ,estado, codigocarta, 
    nomecidade, populacao, area, pib, pontotur, densidade, 
    pibpercapt, super );





printf("\n");
printf(" *** CARTA 2 *** \n");
printf("\n");
// Imprimir informações da carta 1 na na tela
printf("Estado: %s\n"
        "Codigo: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Area: %.2f\n"
        "PIB: %.2f\n"
        "Pontos Turitiscos: %d\n"
        "Densidade populacional: %.2f\n"
        "Pib Per Capita: %.2f\n"
        "Super Poder: %.2f\n"
        ,estado2, codigocarta2, 
        nomecidade2, populacao2, area2, pib2, pontotur2, densidade2, 
        pibpercapt2, super2);
    


//COMPARAÇÃO DE ATRIBUTOS
int opcao;
printf(  "*** COMPARAÇÃO ENTRE ATRIBUTOS *** \n" );
printf("\n");
printf("Escolha um atributo para comparação\n");
printf("1. Para população\n");
printf("2. Para Área\n");
printf("3. Para PIB\n");
printf("4. Para Pontos turísticos\n");
printf("6. Para Densidade demográfica\n");
scanf("%d", &opcao);

        
switch (opcao) {    
case 1:
    printf("Carta: %s /  Carta: %s\n", estado, estado2);
    printf("População: %.2f /   População: %.2f\n", area, area2);
    
    if (populacao == populacao2) {
        printf("EMPATE !");
    } else if (populacao > populacao2){
        printf("Carta %s venceu!", estado);
    }else{
        printf("Carta %s venceu!", estado2);
    }
    break;

case 2:
    printf("Carta: %s /  Carta: %s\n", estado, estado2);
    printf("Área: %d /   Àrea: %d\n", area, area2);
    if (area == area2) {
        printf("EMPATE !");
    } else if (area > area2){
        printf("Carta %s venceu!", estado);
    }else{
        printf("Carta %s venceu!", estado2);
    }
    break;

case 3:
    printf("Carta: %s /  Carta: %s\n", estado, estado2);
    printf("PIB: %d /  PIB: %d\n", pib, pib2);
    if (pib == pib2) {
        printf("EMPATE !");
    } else if (pib > pib){
        printf("Carta %s venceu!", estado);
    }else{
        printf("Carta %s venceu!", estado2);
    }
    break;

case 4:
    printf("Carta: %s /  Carta: %s\n", estado, estado2);
    printf("Pontos turísticos: %d /  Pontos turísticos: %d\n", pontotur, pontotur2);
    if (pontotur == pontotur2) {
        printf("EMPATE !");
    } else if (pontotur > pontotur2){
        printf("Carta %s venceu!", estado);
    }else{
        printf("Carta %s venceu!", estado2);
    }
    break;

case 5:
    printf("Carta: %s /  Carta: %s\n", estado, estado2);
    printf("Densidade populacional: %.2f /  Densidade populacional: %.2f\n", densidade, densidade2);
    if (densidade == densidade2) {
        printf("EMPATE !");
    } else if (densidade < densidade2){
        printf("Carta %s venceu!", estado);
    }else{
        printf("Carta %s venceu!", estado2);
    }
    break;

default:
    printf("Opção invalida!");
break;

    

}
return 0;

}


