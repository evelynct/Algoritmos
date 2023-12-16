/* Crie uma função que preencha um vetor de mil posições com valores aleatórios de 1 até 6. 
Conte quantas vezes cada número foi sorteado.
Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int *vetor, int tamV){
	
	
	for(int i = 0; i < tamV; i++){
		vetor[i] = rand()% 6 + 1;
		printf("%d  ", vetor[i]);
	}
}
///////////////////////////////////////
void porcentagem(int *vetP, int tam){
	
 int cont[7];								// vetor de contador 

	for(int i = 1; i < 7; i++){
		cont[i] = 0;
	}	
	
	for(int i = 0; i < tam; i++){

		switch(vetP[i]){
			case 1: cont[1]++;	break;			
			case 2: cont[2]++;	break;			
			case 3: cont[3]++;	break;			
			case 4: cont[4]++;	break;			
			case 5: cont[5]++;	break;			
			case 6: cont[6]++;	break;			
		}	
	}
		printf("\n\n-------Porcentagem-------\n");
	for(int i = 1; i < 7; i++){
		printf("\nValor %d: %.1f", i, ((float)cont[i] /(float) tam) * 100.0);		
	}
														/// (linha 38) só foi modificado o tipo para float
}
///////////////////////////
int main(){
	
  srand(time(NULL));	
  int tam = 1000, vet[tam]; 		
	
 	preenche(vet, tam);
 	
 	porcentagem(vet, tam);
 	
 	return 0;
 }
