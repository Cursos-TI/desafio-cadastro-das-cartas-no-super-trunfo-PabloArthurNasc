#include <stdio.h>
int main (){

char estado;
char codigo[20];
char cidade[20];
float populaçao;
float area;
float PIB;
int turistico;

printf("Insira as informções da carta 1\n");
//Insiras as informções solicitadas a seguir, para construção da primeira carta

printf("Qual Estado?\n");
//Uma letra de 'A' a 'H' (representando um dos oito estados).
scanf(" %c", &estado);

printf("Qual o codigo da carta?\n");
//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
scanf("%s", codigo);

printf("Qual a cidade?\n");
//O nome da cidade.
scanf("%s", cidade);

printf("Qual o numero de habitantes?\n");
//O número de habitantes da cidade.
scanf("%f", &populaçao);

printf("Qual a area da cidade em km²?\n");
//A área da cidade em quilômetros quadrados.
scanf("%f", &area);

printf("Qual o PIB da cidade?\n");
//O Produto Interno Bruto da cidade.
scanf("%f", &PIB);

printf("Quantos pontos turisticos ela possui?\n");
//A quantidade de pontos turísticos na cidade.
scanf("%d", &turistico);

printf("Segue a abaixo as informções da carta\n");
printf("Carta 1:\n");
printf("A letra do seu estado é: %c\n", estado);
printf("O codigo da sua carta é: %s\n", codigo);
printf("Sua cidade é: %s\n", cidade);
printf("Sua população é de: %.3f\n", populaçao);
printf("A area da sua cidade é: %.3f\n", area);
printf("O PIB da sua cidade é: %.3f\n", PIB);
printf("Sua cidade possui: %d turisticos\n", turistico);

printf("Insira as informções da carta 2\n");
//Insiras as informções solicitadas a seguir, para construção da primeira carta

printf("Qual Estado?\n");
//Uma letra de 'A' a 'H' (representando um dos oito estados).
scanf(" %c", &estado);

printf("Qual o codigo da carta?\n");
//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
scanf("%s", codigo);

printf("Qual a cidade?\n");
//O nome da cidade.
scanf("%s", cidade);

printf("Qual o numero de habitantes?\n");
//O número de habitantes da cidade.
scanf("%f", &populaçao);

printf("Qual a area da cidade em km²?\n");
//A área da cidade em quilômetros quadrados.
scanf("%f", &area);

printf("Qual o PIB da cidade?\n");
//O Produto Interno Bruto da cidade.
scanf("%f", &PIB);

printf("Quantos pontos turisticos ela possui?\n");
//A quantidade de pontos turísticos na cidade.
scanf("%d", &turistico);

printf("Segue a abaixo as informções da carta\n");
printf("Carta 2:\n");
printf("A letra do seu estado é: %c\n", estado);
printf("O codigo da sua carta é: %s\n", codigo);
printf("Sua cidade é: %s\n", cidade);
printf("Sua população é de: %.3f\n", populaçao);
printf("A area da sua cidade é: %.3f\n", area);
printf("O PIB da sua cidade é: %.3f\n", PIB);
printf("Sua cidade possui: %d turisticos\n", turistico);

    return 0;
}
