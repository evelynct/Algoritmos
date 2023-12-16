/* Crie um programa que cadastre em registros o nome, o peso e a altura de 5 esportistas. 
Apresente na telaos dados de cada esportista e seu IMC (deve haver um campo para o IMC no registro).*/
#include <stdio.h>

 struct atleta{
 
 	char nome[50];
	float peso;
	float altura;
	float imc;	 	
 };
 ////////////////////////////////////////////////////
 int main(){
 	
 	struct atleta esp[5];
 	
 	 printf("----Cadastrando atletas\n\n----");
 	 
 	for(int i = 0; i < 5; i++){
	 
		  printf("Digite o nome: \n");
		   fflush(stdin);
		   scanf("%[^\n]s", esp[i].nome);
		   
		  printf("Digite o peso: \n");
		   scanf("%f", &esp[i].peso);
		  
		  printf("Digite a altura: \n");
		   scanf("%f", &esp[i].altura);
		  	  
	 	esp[i].imc = esp[i].peso / (esp[i].altura * esp[i].altura);
	}
 	for(int i = 0; i < 5; i++){

	 	  printf("\n\nNome: %s", esp[i].nome);
	 	  printf("\nPeso: %.2f", esp[i].peso);
	 	  printf("\nAltura: %.2f", esp[i].altura);
	   	  printf("\nIMC: %.2f", esp[i].imc);
	  	  	
	}
 	
	 return 0;
 }
