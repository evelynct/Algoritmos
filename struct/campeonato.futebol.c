/* Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato brasileiro de futebol. 
Para cada jogo, será necessário armazenar as seguintes informações:
a. Data do jogo;
b. Time mandante;
c. Time visitante;
d. Gols do mandante;
e. Gols do visitante.
Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi o vencedor ou se deu empate. 
Utilize um vetor de registros na sua implementação*/
#include <stdio.h>
 struct campeonato{
 	int data;
 	char time_mandante [50];
 	char time_visitante [50];
 	int gols_mandante;
 	int gols_visitante;
 };
/////////////////////////////////////////////////////////////////
 int main(){
 	
 	struct campeonato jogo[3];
 	
		  for(int i = 0; i < 3; i++){
		 	  printf("-----Campeonato-----\n----------------------------");	
	 		printf("\nDigite a data do jogo: ");
	 		 scanf("%d", &jogo[i].data);
	 		printf("\nDigite o nome do time mandante: ");
	 	  fflush(stdin);					// limpa o lixo de memoria de uma string(evita bug)
			 scanf("%[^\n]s", jogo[i].time_mandante);		
			printf("\nDigite o nome do time visitante: ");
		   fflush(stdin);					// limpa o lixo de memoria de uma string(evita bug)
			 scanf("%[^\n]s", jogo[i].time_visitante);		
			printf("\nDigite a quantidade de gols do mandante:");
			 scanf("%d", &jogo[i].gols_mandante);
			printf("\nDigite a quantidade de gols do visitante:");
			 scanf("%d", &jogo[i].gols_visitante);			 			 	
		  }
	  for(int i = 0; i < 3; i++){
	 		  printf("\n-----Resultado Campeonato-----\n----------------------------------");	
	 		  
	 		printf("\nNo dia %d, %s fez %d gols e %s fez %d gols.", jogo[i].data , jogo[i].time_mandante, jogo[i].gols_mandante, jogo[i].time_visitante, jogo[i].gols_visitante);  
	 		  
			if(jogo[i].gols_mandante > jogo[i].gols_visitante){
				printf("\n%s ganhou com %d gols!", jogo[i].time_mandante, jogo[i].gols_mandante);
			}else if(jogo[i].gols_mandante == jogo[i].gols_visitante){
				printf("\n%s empatou com %s!", jogo[i].time_mandante, jogo[i].time_visitante);		
			}
			else if(jogo[i].gols_mandante < jogo[i].gols_visitante){
				printf("\n%s ganhou com %d gols!", jogo[i].time_visitante, jogo[i].gols_visitante);
			}
	}
 	return 0;
 }
