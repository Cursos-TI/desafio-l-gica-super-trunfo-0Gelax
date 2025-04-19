#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
struct CartaSuperTrunfo {
  char estado;                  // Letra de A a H
  char codigo[50];              // Exemplo: A01 -- Se digitar o número ele pode ser visto como binário, caso escreva com 0 no inicio;
  char nomeCidade[50];          // Nome da cidade
  int populacao;                // Número de habitantes
  float area;                   // Área em km²
  float pib;                    // PIB em bilhões
  int pontosTuristicos;         // Número de pontos turísticos
  float densidadePopulacional;  // Densidade populacional em hab/km²
  float pibPerCapita;           // PIB per capita em reais
  float superPoder;             // Valor calculado para determinar o poder... olha eu acho idiota a parte do super. 
};

int main() {
  // Declaração de duas cartas
  struct CartaSuperTrunfo carta1;
  struct CartaSuperTrunfo carta2;

  // Informações para a Carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &carta1.estado);

  printf("Digite o código da carta (ex: 01): ");
  scanf("%s", &carta1.codigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", &carta1.nomeCidade); // Lê até o final da linha

  printf("Digite a população da cidade: ");
  scanf("%d", &carta1.populacao);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &carta1.area);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &carta1.pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &carta1.pontosTuristicos);

  carta1.pibPerCapita = (carta1.pib * 1e9) / carta1.populacao;
  carta1.densidadePopulacional = carta1.populacao / carta1.area;
  carta1.superPoder = (((float) carta1.populacao)/1000 + carta1.area + carta1.pib + carta1.pibPerCapita) * 1/carta1.densidadePopulacional * carta1.pontosTuristicos;

  system("clear");

  // Informações para a Carta 2
  printf("Cadastro da Carta 2:\n");
  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &carta2.estado);

  printf("Digite o código da carta (ex: 01): ");
  scanf("%s", &carta2.codigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", &carta2.nomeCidade); // Lê até o final da linha

  printf("Digite a população da cidade: ");
  scanf("%d", &carta2.populacao);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &carta2.area);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &carta2.pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &carta2.pontosTuristicos);

  carta2.pibPerCapita = (carta2.pib * 1e9) / carta2.populacao;
  carta2.densidadePopulacional = carta2.populacao / carta2.area;
  // superPoder eu alterei a formula por razões que a somatoria simples não faz sentido, visto que a população tem um peso gigante.
  carta2.superPoder = (((float) carta2.populacao)/1000 + carta2.area + carta2.pib + carta2.pibPerCapita) * 1/carta2.densidadePopulacional * carta2.pontosTuristicos;

  system("clear");

/*
  carta1.populacao = 12324000;
  carta1.area = 1521.11;
  carta1.pib = 1.24;
  carta1.pontosTuristicos = 10;
  carta1.pibPerCapita = (carta1.pib * 1e9) / carta1.populacao;
  carta1.densidadePopulacional = carta1.populacao / carta1.area;
  carta1.superPoder = (((float) carta1.populacao)/1000 + carta1.area + carta1.pib + carta1.pibPerCapita) * 1/carta1.densidadePopulacional * carta1.pontosTuristicos;

  carta2.populacao = 12325000;
  carta2.area = 1521.11;
  carta2.pib = 1.24;
  carta2.pontosTuristicos = 10;
  carta2.pibPerCapita = (carta2.pib * 1e9) / carta2.populacao;
  carta2.densidadePopulacional = carta2.populacao / carta2.area;
  carta2.superPoder = (((float) carta2.populacao)/1000 + carta2.area + carta2.pib + carta2.pibPerCapita) * 1/carta2.densidadePopulacional * carta2.pontosTuristicos;
  */

  // Exibição dos dados da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Código: %c%s\n",carta1.estado, carta1.codigo);
  printf("Nome da Cidade: %s\n", carta1.nomeCidade);
  printf("População: %d\n", carta1.populacao);
  printf("Área: %.2f km²\n", carta1.area);
  printf("PIB: %.2f bilhões de reais\n", carta1.pib);
  printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
  printf("PIB Per Capita: %.2f reais\n", carta1.pibPerCapita);
  printf("Super Poder: %.2f\n", carta1.superPoder);

  printf("\n");

  // Exibição dos dados da Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Código: %c%s\n",carta2.estado, carta2.codigo);
  printf("Nome da Cidade: %s\n", carta2.nomeCidade);
  printf("População: %d\n", carta2.populacao);
  printf("Área: %.2f km²\n", carta2.area);
  printf("PIB: %.2f bilhões de reais\n", carta2.pib);
  printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
  printf("PIB Per Capita: %.2f reais\n", carta2.pibPerCapita);
  printf("Super Poder: %.2f\n", carta2.superPoder);

  printf("\n");

  // Comparação entre as cartas
  // variavel1 (termo de comparação) variavel2 ? (se verdadeiro) : (se falso)
  // operador ternário, uso bastante em JS. Se alguém ler isso e tiver ideia se eu posso solicitar para fazer os testes em JS. Por favor, me da um aviso.
  
  printf("Comparação entre as cartas:\n");
  printf("Resultado do atributo População: %s %s\n", (carta1.populacao > carta2.populacao) ? carta1.nomeCidade : (carta1.populacao == carta2.populacao) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.populacao == carta2.populacao) ? "" : "Venceu");
  
  printf("Resultado do atributo População: %s %s\n", (carta1.area > carta2.area) ? carta1.nomeCidade : (carta1.area == carta2.area) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.area == carta2.area) ? "" : "Venceu");

  printf("Resultado do atributo Área: %s %s\n", (carta1.pib > carta2.pib) ? carta1.nomeCidade : (carta1.pib == carta2.pib) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.pib == carta2.pib) ? "" : "Venceu");

  printf("Resultado do atributo PIB: %s %s\n", (carta1.pontosTuristicos > carta2.pontosTuristicos) ? carta1.nomeCidade : (carta1.pontosTuristicos == carta2.pontosTuristicos) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.pontosTuristicos == carta2.pontosTuristicos) ? "" : "Venceu");

  printf("Resultado do atributo Número de Pontos Turísticos: %s %s\n", (carta1.densidadePopulacional > carta2.densidadePopulacional) ? carta1.nomeCidade : (carta1.densidadePopulacional == carta2.densidadePopulacional) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.densidadePopulacional == carta2.densidadePopulacional) ? "" : "Venceu");

  printf("Resultado do atributo Densidade Populacional: %s %s\n", (carta1.populacao > carta2.populacao) ? carta1.nomeCidade : (carta1.populacao == carta2.populacao) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.populacao == carta2.populacao) ? "" : "Venceu");

  printf("Resultado do atributo PIB Per Capita: %s %s\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? carta1.nomeCidade : (carta1.pibPerCapita == carta2.pibPerCapita) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.pibPerCapita == carta2.pibPerCapita) ? "" : "Venceu");

  printf("Resultado do atributo Super Poder: %s %s\n", (carta1.superPoder > carta2.superPoder) ? carta1.nomeCidade : (carta1.superPoder == carta2.superPoder) ? "Empate entre ambas as cartas" : carta2.nomeCidade, (carta1.superPoder == carta2.superPoder) ? "" : "Venceu");

  return 0;
}