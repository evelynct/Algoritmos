/* Escreva um programa, utilizando estrutura, que atende os itens abaixo:
a. O programa recebe e armazena o nome de N cidades com renda per capita,
 IDH (índice de desenvolvimento humano) e população. O usuário fornece aquantidade de cidades N e as demais informações.
b. Calcular e mostrar a média da renda per capita das N cidades.
c. Determinar e mostrar o nome da cidade com maior população.
d. Mostre a renda per capita, IDH e população de acordo com o nome de umacidade digitada pelo usuário. */
#include <stdio.h>
#include <string.h>

struct city {
 	char nome[50];
 	float renda;
 	float idh;
 	int populacao;
 };
////////////////////////////////// 	
int main(){

  int qntd, maior_pop = 0, indice_maior_pop = 0, compara;
  float soma = 0;
  char busca[50];
	
	printf("Quantas cidades serao cadastradas: \n");
	scanf("%d", &qntd);
 	
 struct city cidades[qntd];
	 for(int i = 0; i < qntd; i++){
		printf("-------CADASTRANDO CIDADE %d------ \n\n", i);
	 	
		printf("Nome: ");
	 	fflush(stdin);
		scanf("%[^\n]s", cidades[i].nome);
	 	
	 	printf("Renda per capita: ");
	 	scanf("%f", &cidades[i].renda);
	 	
	 	soma = soma + cidades[i].populacao;

	 	printf("IDH: ");
	 	scanf("%f", &cidades[i].populacao);
	 	
		printf("Populacao: ");
	 	scanf("%d", &cidades[i].populacao);
	  if(maior_pop < cidades[i].populacao){
	 	maior_pop = cidades[i].populacao;
	  	indice_maior_pop = i;
	  }
	} 
 	
	 	printf("Media de renda per capita: %.2f\n", soma / qntd);
	 	printf("Maior populacao: %s", cidades[indice_maior_pop].nome);
		////////////////////////////////////////////
		
		printf("Digite uma cidade a ser pesquisada: \n");	
	 int lixo = getchar();				// pesquisar getchar
	 	scanf("%[^\n]s", busca);
	 	
	for(int i = 0; i < qntd; i++){
		compara = strcmp(busca, cidades[i].nome);
	
	 if(compara == 0){
	 	printf("Nome: %s", cidades[i].nome);
	 	printf("Renda: %.2f", cidades[i].renda);
	 	printf("Populacao: %d", cidades[i].populacao);
	  }	
	}

	return 0;
 }


