/* Criar uma fun��o que receba um vetor de inteiros positivos, um vetor de caracteres e o tamanho (�nico) dos vetores. 
A fun��o deve imprimir cada um dos caracteres do 2� vetor n vezes, onde n � o conte�do da posi��o correspondente no vetor de inteiros.*/
#include <stdio.h>
#include <stdlib.h>

void imprimir(int num[], char vogaiS[], int tam){
		
	for(int i = 0; i < tam; i++){
	   for(int j = 0; j < num[i]; j++){
	  	printf("%c", vogaiS[i]);
	   }
	   printf("\n");
	}
}
////////////////////////////////////////////////////////////////////////////
int main(){
	
	int numeros[5]={1, 2, 3, 4, 5};
	char vogais[5]={'A', 'E', 'I', 'O', 'U'};
		
	printf("-------Vetor de vogais-------\n");
				
 imprimir(numeros, vogais, 5);
	 
	return 0;
}



