#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char A1_cidade[50];
  int A1_população;
  float A1_area;
  float A1_pib;
  int A1_pontost;

  char A2_cidade[50];
  int A2_população;
  float A2_area;
  float A2_pib;
  int A2_pontost;  

  // Área para entrada de dados da carta A1
  printf("Digite o nome da cidade da carta A1: ");
  scanf("%s", A1_cidade);
  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &A1_população);   
  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &A1_area); 
  printf("Digite o Produto Interno Bruto da cidade: ");
  scanf(" %f", &A1_pib); 
  printf("Digite a quantidade de pontos turísticos na cidade: ");
  scanf("%d", &A1_pontost); 

  // Área para entrada de dados da carta A2
  printf("Digite o nome da cidade da carta A2: ");
  scanf("%s", A2_cidade);
  printf("Digite o número de habitantes da cidade: ");
  scanf(" %d", &A2_população);   
  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &A2_area); 
  printf("Digite o Produto Interno Bruto da cidade: ");
  scanf("%f", &A2_pib); 
  printf("Digite a quantidade de pontos turísticos na cidade: ");
  scanf("%d", &A2_pontost); 

  // Área para exibição dos dados da cidade da carta A1
  printf("Dados da carta A1: \n");
  printf("Cidade: %s\n", A1_cidade);
  printf("População: %d habitantes\n", A1_população);
  printf("Área (em km²): %f\n", A1_area);
  printf("PIB: %f\n", A1_pib);
  printf("Pontos turísticos: %d \n", A1_pontost);

  // Área para exibição dos dados da cidade da carta A2
  printf("Dados da carta A2: \n");
  printf("Cidade: %s\n", A2_cidade);
  printf("População: %d habitantes\n", A2_população);
  printf("Área (em km²): %f\n", A2_area);
  printf("PIB: %f\n", A2_pib);
  printf("Pontos turísticos: %d \n", A2_pontost);

  return 0;

} 
