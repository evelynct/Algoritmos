/*Leia dois n�meros inteiros a e b do teclado e imprima a sequ�ncia de valores entre esses n�meros.
O programa deve ser executado at� que o usu�rio decida parar.
Escreva uma fun��o para leitura de a e b do teclado 
e um procedimento para exibir a sequ�ncia de n�meros.*/
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
	   if (a != 0 || b != 0) { // Verificar se a e b s�o ambos zero antes de chamar a fun��o imprimeSeq
            imprimeSeq(a, b);
  		 }
		}while((a!=0)||(b!=0));	
		
	return 0;
	}
