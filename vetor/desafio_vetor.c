/*Seja um vetor de inteiros de nove elementos.
 Escreva um programa que realize a seguinte sequ�nciade a��es, na ordem indicada:
 a) preenchimento do vetor por leitura de valores positivos;
 b) impress�o dos elementos do vetor em uma linha, usando dois espa�os em branco para separar os valores de cada elemento;
 c) rota��o dos elementos do vetor, com o deslocamento de todos os valores dos elementos para a posi��o seguinte, 
 exceto o �ltimo valor, que deve ser colocado na posi��o do primeiro elemento;
 d) repeti��o do item b;
 e) soma do �ndice de cada elemento ao conte�do da posi��o correspondente;		*/
 
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
  
 
 
 
 
