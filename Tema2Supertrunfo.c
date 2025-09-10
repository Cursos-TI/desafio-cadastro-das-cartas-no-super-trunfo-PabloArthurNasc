#include <stdio.h>
int main (){

char estado1, estado2;
char codigo1 [20] , codigo2 [20];
char cidade1 [20] , cidade2 [20];
float populaçao1 , populaçao2;
float area1 , area2;
float PIB1 , PIB2;
int turistico1 , turistico2;


printf("Insira as informções da carta 1\n");
//Insiras as informções solicitadas a seguir, para construção da primeira carta

printf("Qual Estado?\n");
//Uma letra de 'A' a 'H' (representando um dos oito estados).
scanf(" %c", &estado1);

printf("Qual o codigo da carta?\n");
//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
scanf("%s", codigo1);

printf("Qual a cidade?\n");
//O nome da cidade.
scanf("%s", cidade1);

printf("Qual o numero de habitantes?\n");
//O número de habitantes da cidade.
scanf("%f", &populaçao1);

printf("Qual a area da cidade em km²?\n");
//A área da cidade em quilômetros quadrados.
scanf("%f", &area1);

printf("Qual o PIB da cidade?\n");
//O Produto Interno Bruto da cidade.
scanf("%f", &PIB1);

printf("Quantos pontos turisticos ela possui?\n");
//A quantidade de pontos turísticos na cidade.
scanf("%d", &turistico1);

printf("Segue a abaixo as informções da carta\n");
printf("Carta 1:\n");
printf("A letra do seu estado é: %c\n", estado1);
printf("O codigo da sua carta é: %s\n", codigo1);
printf("Sua cidade é: %s\n", cidade1);
printf("Sua população é de: %.3f\n", populaçao1);
printf("A area da sua cidade é: %.3f\n", area1);
printf("O PIB da sua cidade é: %.3f\n", PIB1);
printf("Sua cidade possui: %d turisticos\n", turistico1);

printf("Insira as informções da carta 2\n");
//Insiras as informções solicitadas a seguir, para construção da primeira carta

printf("Qual Estado?\n");
//Uma letra de 'A' a 'H' (representando um dos oito estados).
scanf(" %c", &estado2);

printf("Qual o codigo da carta?\n");
//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
scanf("%s", codigo2);

printf("Qual a cidade?\n");
//O nome da cidade.
scanf("%s", cidade2);

printf("Qual o numero de habitantes?\n");
//O número de habitantes da cidade.
scanf("%f", &populaçao2);

printf("Qual a area da cidade em km²?\n");
//A área da cidade em quilômetros quadrados.
scanf("%f", &area2);

printf("Qual o PIB da cidade?\n");
//O Produto Interno Bruto da cidade.
scanf("%f", &PIB2);

printf("Quantos pontos turisticos ela possui?\n");
//A quantidade de pontos turísticos na cidade.
scanf("%d", &turistico2);

printf("Segue a abaixo as informções da carta\n");
printf("Carta 2:\n");
printf("A letra do seu estado é: %c\n", estado2);
printf("O codigo da sua carta é: %s\n", codigo2);
printf("Sua cidade é: %s\n", cidade2);
printf("Sua população é de: %.3f\n", populaçao2);
printf("A area da sua cidade é: %.3f\n", area2);
printf("O PIB da sua cidade é: %.3f\n", PIB2);
printf("Sua cidade possui: %d turisticos\n", turistico2);


return 0;
}
