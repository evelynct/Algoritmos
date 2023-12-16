/*Leia dois números inteiros a e b do teclado e imprima a sequência de valores entre esses números.
O programa deve ser executado até que o usuário decida parar.
Escreva uma função para leitura de a e b do teclado 
e um procedimento para exibir a sequência de números.*/
#include <stdio.h>

int leValor(){
	int num;
		printf("Digite um inteiro: \n");
		scanf("%d", &num);
		return num;
	}	

//--------------------------------------	
 
void imprimeSeq(int a, int b){
 	int i;
 
 	if(a<=b){
	 
	 for(i = a; i<= b; i++){
	 	printf("%d\t", i);
	//		printf("\n");
	 }	
	} else{
		printf("A deve ser <= B\n");
}		
}
//--------------------------------------	
	
 int main(){
 	int a, b;
 	
 	do{
	 	printf("Para sair digite zero.\n");	
	  a = leValor();
	  b = leValor();
	   if (a != 0 || b != 0) { // Verificar se a e b são ambos zero antes de chamar a função imprimeSeq
            imprimeSeq(a, b);
  		 }
		}while((a!=0)||(b!=0));	
		
	return 0;
	}
