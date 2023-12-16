/*Seja um vetor de inteiros de nove elementos.
 Escreva um programa que realize a seguinte sequênciade ações, na ordem indicada:
 a) preenchimento do vetor por leitura de valores positivos;
 b) impressão dos elementos do vetor em uma linha, usando dois espaços em branco para separar os valores de cada elemento;
 c) rotação dos elementos do vetor, com o deslocamento de todos os valores dos elementos para a posição seguinte, 
 exceto o último valor, que deve ser colocado na posição do primeiro elemento;
 d) repetição do item b;
 e) soma do índice de cada elemento ao conteúdo da posição correspondente;		*/
 
 #include <stdio.h>
 int main(){
	int vet[9], i = 0,  n, auxi;
	int b, cont = 0;
	
	do{														// Povoei o vetor so com numeros positivos
			printf("Povoe o vetor no indice %d:\n", i);
			scanf("%d", &n);
		if(n > 0){
			vet[i] = n;
			i++;
		}		
	} while (i < 9);
	 		printf("-------VETOR PREENCHIDO-------\n");
	 
 	for(i = 0; i < 9; i++){									// Imprimi o vetor 
 			printf("Indice %d: %d  ", i, vet[i]);
	 		if(i == 3){
	 			printf("\n");
			 }
	 }
	 		printf("\n-------VETOR ROTACIONADO-------\n");
	 
		 auxi = vet[8];
	 	 
	 for(i = 8; i > 0; i--){
	 		vet[i] = vet[i-1];								// Rotacionei o vetor
			
	}	
		vet[0] = auxi;
	
	 for(i = 0; i < 9; i++){

			printf("Indice %d: %d	", i, vet[i]);			// Imprimi o vetor atualizado
	 	if(i == 3){
	 		printf("\n");
		}	
	} 
  			printf("\n\nQual o numero que deve ser procurado:");
 			scanf("%d", &b);
	for(i = 0; i < 9; i++){
		if(vet[i] == b){												// contador da variavel B
			cont++;
		}
	}
 		printf("\nO numero(%d) repetiu: %d vezes no vetor\n", b, cont);
 
 		printf("\nSoma do conteudo do vetor com seu indice:\n");
 
 	for(i = 0;i < 9; i++){
 		printf("Indice %d: %d	", i, vet[i]+i);						//Soma do indice com o conteudo do indice
	 	if(i == 3){
	 		printf("\n");
		}	
	}
 	return 0; 	
}
  
 
 
 
 
