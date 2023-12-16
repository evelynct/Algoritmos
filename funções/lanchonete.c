/* Escreva um programa que simule a compra de um lanche em uma padaria. 
O programa deve ser executado enquanto o cliente informar o que deseja comprar e a quantidade desejada. 
A cada novo item inserido na compra, o programa deve mostrar na tela o subtotal a ser pago. 
Ao final da execução apresente o valor total da compra.*/
#include <stdio.h>

int conta(int produto, int qntd, int *total){
	
	int totalprod;
	
		 	switch(produto){
	 		totalprod = 0;
 			case 1:
	 			totalprod = (15 * qntd);
				*(total) += totalprod;
			     printf("---\nTotal pedido eh: %d\n", totalprod);				break;
			case 2:
	 			totalprod = (10 * qntd);
				*(total) += totalprod;
			     printf("---\nO total do pedido eh:%d\n", totalprod);			break;
			case 3:
	 			totalprod = (8 * qntd);
				*(total) += totalprod;
			     printf("---\nO total do pedido eh: %d\n", totalprod);			break;
		 }
 		

	
	return *total;
}

///////////////////////////////////////////////////

 int main(){
 
 	int	produto, qntd, total = 0;
	 	
	 	printf("-----Lista de lanches-----\n\n");
	 	printf("1  X-Salada =  	15,00\n2  Hot-Dog  = 	10,00\n3  Coxinha  =	 8,00\nDigite '0' para sair!\n");
	 	
 	do{
	 		printf("\n---Faca seu pedido----");
	 		printf("\nDigite o produto desejado: ");
	 		scanf("%d", &produto);
	 		printf("Digite a quantidade: ");
	 		scanf("%d", &qntd);

		if(produto !=0 || qntd!=0) {
			conta(produto, qntd, &total);
		}
	 		
	 } while(produto != 0 || qntd != 0);
 	
 	printf("\n\n----O total a ser pago eh R$%d,00----\n", total);
 	
 	return 0;
 }
