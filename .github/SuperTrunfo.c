#include <stdio.h>

int main(){

    char estado1 [1];
    char cod1 [2];
    char ncidade1 [35];
    int populacao1;
    float area1;
    float pib1;
    int npturistico1;
/*declarando variavel carta 1*/
    char estado2 [1];
    char cod2 [2];
    char ncidade2 [35];
    int populacao2;
    float area2;
    float pib2;
    int npturistico2;
/*declarando variavel carta 2*/
    float dpopu1;
    float percap1;
    float dpopu2;
    float percap2;
    float spoder1;
    float spoder2;
/*declarando variaveis de calculo*/

    int resulpopu;
    int resularea;
    int resulpib;
    int resulnp;
    int resuldpopu;
    int resulpercap;
    int resulspoder;
   int opcao1;
    int opcao2;
    int resulop1;
    int resulop2;
    int resulfinal;
    int soatri1;
    int soatri2;

/*declarando variaveis para comparação*/
    printf("Dados da Carta 1\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado1);
    

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%d", &cod1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &ncidade1);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npturistico1);
/*coletando dados da carta 1 digitadas no terminal*/
    printf("Dados da Carta 2\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &cod2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &ncidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npturistico2);
/*coletando dados carta 2 digitadas no terminal*/
     
    dpopu1 = populacao1 / area1;
    dpopu2 = populacao2 / area2;
    percap1 = pib1 / populacao1;
    percap2 = pib2 / populacao2;
    /*Calculando com operador matemitico de divisao*/

    spoder1 = (float) populacao1 + area1 + pib1 + npturistico1 + percap1 + dpopu1;
    spoder2 = (float) populacao2 + area2 + pib2 + npturistico2 + percap2 + dpopu2;
/*Calculando com operador matemitico de adição*/
    resularea = area1 > area2;
    resulpopu = populacao1 > populacao2;
    resulpib = pib1 > pib2;
    resulpercap = percap1 > percap2;
    resulnp = npturistico1 > npturistico2;
    resuldpopu = dpopu1 < dpopu2;
    resulspoder = spoder1 > spoder2;
/*Fazendo a comparação das cartas*/

if (pib1 > pib2) {
  printf("Carta 1 %f, venceu \n", pib1 );
} else {
 printf("Carta 2 %f, venceu \n", pib2 );
}
/*Comparando o pib para ver qual carta é maior*/

printf("Escolha a primeira opção:\n");
  printf("1. população\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("6. pib percap\n");
  printf("7. super poder\n");
  scanf("%d", &opcao1);
switch (opcao1) {
  case 1:
    
  printf("Você escolheu população\n" );
  resulop1 = populacao1 > populacao2 ? 1:0;

    break;
  case 2:
   printf("Você escolheu area\n" );
  resulop1 = area1 > area2 ? 1:0;
    break;
  case 3:
   printf("Você escolheu pib\n" );
  resulop1 = pib1 > pib2 ? 1:0;
    break;
    case 4:
   printf("Você escolheu numero de pontos turisticos\n" );
  resulop1 = npturistico1 > npturistico2 ? 1:0;
    break;
    case 5:
   printf("Você escolheu densidade populacional\n" );
  resulop1 = dpopu1 < dpopu2 ? 1:0;
    break;
    case 6:
   printf("Você escolheu pib percap\n" );
  resulop1 = percap1 > percap2 ? 1:0;
    break;
    case 7:
    printf("Você escolheu super poder \n" );
  resulop1 = spoder1 > spoder2 ? 1:0;
    break;
  default:
    printf("Empate \n" );
}


printf("Escolha a segunda opção:\n");
if (opcao1 = 1){
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("6. pib percap\n");
  printf("7. super poder\n");
  scanf("%d", &opcao2);
}else if (opcao1 = 2){
  printf("1. população\n");
  printf("3. pib\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("6. pib percap\n");
  printf("7. super poder\n");
  scanf("%d", &opcao2);
}else if (opcao1 = 3){
  printf("1. população\n");
  printf("2. area\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("6. pib percap\n");
  printf("7. super poder\n");
  scanf("%d", &opcao2);
}else if (opcao1 = 4){
  printf("1. população\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("5. densidade populacional\n");
  printf("6. pib percap\n");
  printf("7. super poder\n");
  scanf("%d", &opcao2);
}else if (opcao1 = 5){
  printf("1. população\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. numero de pontos turisticos\n");
  printf("6. pib percap\n");
  printf("7. super poder\n");
  scanf("%d", &opcao2);
}else if (opcao1 = 6){
  printf("1. população\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("7. super poder\n");
  scanf("%d", &opcao2);
}else if (opcao1 = 7){
  printf("1. população\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("6. pib percap\n");
  scanf("%d", &opcao2);
}

switch (opcao2) {
  case 1:
    
  printf("Você escolheu população\n" );
  resulop2 = populacao1 > populacao2 ? 1:0;
    break;

  case 2:
   printf("Você escolheu area\n" );
  resulop2 = area1 > area2 ? 1:0;
    break;

  case 3:
   printf("Você escolheu pib\n" );
  resulop2 = pib1 > pib2 ? 1:0;
    break;

    case 4:
   printf("Você escolheu numero de pontos turisticos\n" );
  resulop2 = npturistico1 > npturistico2 ? 1:0;
    break;

    case 5:
   printf("Você escolheu densidade populacional\n" );
  resulop2 = dpopu1 < dpopu2 ? 1:0;
    break;

    case 6:
   printf("Você escolheu pib percap\n" );
  resulop2 = percap1 > percap2 ? 1:0;
    break;

    case 7:
    printf("Você escolheu super poder \n" );
  resulop2 = spoder1 > spoder2 ? 1:0;
    break;
  default:
    printf("Empate \n" );
}
/*Usando switch*/
 soatri1 = (float) spoder1 + populacao1 + area1 + pib1 + npturistico1 + percap1 + dpopu1;
 soatri2 = (float) spoder2 + populacao2 + area2 + pib2 + npturistico2 + percap2 + dpopu2;
/*Soma total*/
printf("Resultado da comparação da primeira opção \n");
printf (" \n");
if(resulop1 = 1){
  printf("Carta 1 venceu \n");
}else{
  printf("Carta 2 venceu\n");
}
/*Exibindo resultado da comparação da primeira opção*/
printf("Resultado da comparação da segunda opção \n");
printf (" \n");
if(resulop2 = 1){
  printf("Carta 1 venceu");
}else{
  printf("Carta 2 venceu");
}
/*Exibindo resultado da comparação da segunda opção*/
printf("Resultado da soma dos atributos\n");
printf("Resultado da soma da carta 1: %d \n", soatri1);
printf("Resultado da soma da carta 2: %d \n", soatri2);
if(soatri1 > soatri2){
  printf("Carta 1 venceu\n");
}else if (soatri1 < soatri2){
  printf("Carta 2 venceu\n");
}else{
  printf("Empate na soma\n");
}

/*Projeto 1*/
    printf("Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s \n", cod1);
    printf("Nome da Cidade: %s \n", ncidade1);
    printf("População: %d \n", populacao1);
    printf("Área em km²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Números de Pontos Turísticos: %d \n", npturistico1);
    printf("A densidade populacional é:%.2f\n",dpopu1);
    printf("O Pibper Capital é:%.2f\n",percap1);
    printf("O Super Poder é:%.2f\n",spoder1);
/*imprimindo dados da carta 1*/
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", cod2);
    printf("Nome da Cidade: %s \n", ncidade2);
    printf("População: %d \n", populacao2);
    printf("Área em km²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", npturistico2);
    printf("A densidade populacional é:%.2f\n",dpopu2);
    printf("O Pibper Capital é:%.2f\n",percap2);
    printf("O Super Poder é:%.2f\n",spoder2);
/*imprimindo dados da carta 2*/

    printf("Comparação de cartas \n");
    printf("Populaçaõ: %d \n", resulpopu);
    printf("Area: %d \n", resularea);
    printf("Pib: %d \n", resulpib);
    printf("Pontos Turisticos: %d \n", resulnp);
    printf("Densidade Populacional: %d \n", resuldpopu);
    printf("Pib Per Capita: %d \n", resulpercap);
    printf("Super Poder: %d \n", resulspoder);
    /*imprimindo a comparação da carta 1 com a carta 2*/
    return 0;



}
