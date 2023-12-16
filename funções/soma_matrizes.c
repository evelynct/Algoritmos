/* Escrever um programa para somar duas matrizes de inteiros. 
Crie funções separadas para 
a) ler uma matriz; 
b) somar duas matrizes; 
c) imprimir uma matriz. */
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>


void preenche(int mA[5][5], int mB[5][5]){

		printf("\n----Primeira Matriz----\n"); 	
 	for(int i = 0; i < 5; i++){
	 	for(int j = 0; j < 5; j++){
 		 	mA[i][j] = rand()%20 + 1;
			printf("%d	",mA[i][j]);
	    }		
			printf("\n");
	}
		printf("\n----Segunda Matriz----\n");
 	for(int i= 0; i < 5; i++){
	 	for(int j = 0; j < 5; j++){
 		 	mB[i][j] = rand()%20 + 1;
			printf("%d	",mB[i][j]);
	    }		
			printf("\n");
	}	
}
////////////////////////////////////////////////////////////////////////
void somaMatrizes(int mtA[5][5], int mtB[5][5], int soma[5][5]){

 	for(int m = 0; m < 5; m++){
	 	for(int n = 0; n < 5; n++){
 			soma[m][n] = mtA[m][n] + mtB[m][n];
		}
 	}
}
////////////////////////////////////////////////////////////////////////
void imprime(int soma[5][5]){
			printf("\n----Soma das Matrizes----\n");	
 	for(int m = 0; m < 5; m++){
	 	for(int n = 0; n < 5; n++){
			printf("%d	",soma[m][n]);		 
		}
			printf("\n");
 	}
}
////////////////////////////////////////////////////////////////////////
int main(){
 	
 	int matA[5][5], matB[5][5], soma[5][5];
	srand(time(NULL));
 	
 	
// preenchi e imprimi minhas matrizes
 preenche(matA, matB);		
 	
// somei minhas matrizes 	
 somaMatrizes(matA, matB, soma);

// imprimi minha matriz nova
 imprime (soma);	

	return 0;
 }

