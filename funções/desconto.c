/* Um estabelecimento fará uma promoção com descontos nos produtos A e B. 
 Se forem comprados apenas os produtos A ou apenas os produtos B, o desconto será de 10%. 
 Caso sejam comprados os produtos A e B, o desconto será de 15%.
 O custo de cada produto é, respectivamente, para os produtos A e B, R$10 e R$20. 
 Elaborar um programa que, por meio de módulos, calcule e apresente o valor da despesa do freguês na compra dos produtos. 
 Lembre-se de que o freguês pode levar mais de uma unidade de um determinado produto.   */
#include <stdio.h>


int totalPago(int qntd1, int qntd2){
 	int a = 10, b = 20, total, desconto;	
	
 	if(qntd1 == 0 || qntd2 == 0){
 		
 		total = (a * qntd1) + (b * qntd2);
		desconto = total - (total * 0.10);  
	 } else {
	
 		total = (a * qntd1) + (b * qntd2);
		desconto = total - (total * 0.15);  
	 }

	return desconto;
}

 int main(){
 	
 	int qntdA, qntdB, descontoM;
	 	
	 	printf("Digite quantos produtos A deseja comprar:	\n");
	 	scanf("%d", &qntdA);
	 	printf("Digite quantos produtos B deseja comprar:	\n");
	 	scanf("%d", &qntdB);
	
	descontoM = totalPago(qntdA, qntdB); 	 	
	 
	printf("\nO total a ser pago eh: '%d'", descontoM);
 	
 	return 0;
 }
