// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>
#include <string.h>

typedef struct {
  char Estado[3];
  char Codigo[3];
  char Cidade[50];
  int Populacao, NPT;
  float Area, PIB;
} Carta;

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  Carta carta1, carta2;

  // Área para entrada de dados

  printf("Informe os dados da primeira carta:\n");

  printf("Digite o estado da Cidade: ");
  scanf("%s", carta1.Estado);
  getchar();

  printf("Digite o código do Estado: ");
  scanf("%s", carta1.Codigo);

  printf("Digite o nome da Cidade: ");
  scanf(" %[^\n]s", carta1.Cidade);
  getchar();

  printf("Digite a população da Cidade: ");
  scanf("%d", &carta1.Populacao);

  printf("Digite a área da Cidade (em km²): ");
  scanf("%f", &carta1.Area);

  printf("Digite o PIB da Cidade: ");
  scanf("%f", &carta1.PIB);

  printf("Digite o número de pontos turisticos da Cidade: ");
  scanf("%d", &carta1.NPT);
  printf("\n");

  printf("Informe os dados da segunda carta:\n");

  printf("Digite o estado da Cidade: ");
  scanf("%s", carta2.Estado);
  getchar();

  printf("Digite o código do Estado: ");
  scanf("%s", carta2.Codigo);

  printf("Digite o nome da Cidade: ");
  scanf(" %[^\n]s", carta2.Cidade);
  getchar();

  printf("Digite a população da Cidade: ");
  scanf("%d", &carta2.Populacao);

  printf("Digite a área da Cidade (em km²): ");
  scanf("%f", &carta2.Area);

  printf("Digite o PIB da Cidade: ");
  scanf("%f", &carta2.PIB);

  printf("Digite o número de pontos turisticos da Cidade: ");
  scanf("%d", &carta2.NPT);
  printf("\n");

  // Área para exibição dos dados da cidade

  printf("Carta: %c\n", carta1.Codigo[1]);
  printf("Estado: %s\n", carta1.Estado);
  printf("Código da Carta: %s%s\n", carta1.Estado, carta1.Codigo);
  printf("Nome da Cidade: %s\n", carta1.Cidade);
  printf("População: %d\n", carta1.Populacao);
  printf("Área: %.2f km²\n", carta1.Area);
  printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
  printf("Número de Pontos Turísticos: %d\n", carta1.NPT);

  printf("\n\n");

  printf("Carta: %c\n", carta2.Codigo[1]);
  printf("Estado: %s\n", carta2.Estado);
  printf("Código da Carta: %s%s\n", carta2.Estado, carta2.Codigo);
  printf("Nome da Cidade: %s\n", carta2.Cidade);
  printf("População: %d\n", carta2.Populacao);
  printf("Área: %.2f km²\n", carta2.Area);
  printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
  printf("Número de Pontos Turísticos: %d\n", carta2.NPT);

return 0;
} 