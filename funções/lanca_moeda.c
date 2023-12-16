/*Faça um programa para lançar uma moeda. 
Quando chamamos uma função, ela deve retornar cara ou coroa (pode ser representado como 0 e 1). 
Em outra função, faça n lançamentos de moedas, em que n é o valor que o usuário quiser, e 
mostre a porcentagem de vezes em que deu cara e em quedeu coroa. Se você jogar a moeda 10, 100, 1000, 
um milhão de vezes...o que tende a acontecer?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancaMoeda(){
	int moeda = rand ()% 2;
	
	return moeda;	
} 
//////////////////////////////////////////////////////////////
void lancamentos(int qntd, int*cara, int*coroa){
	
	int aux;
	
	for(int i = 0; i < qntd; i++){

		aux = lancaMoeda();
		if(aux == 0){
			(*cara) ++;
		}else{
			(*coroa)++;
		}
	}
}
//////////////////////////////////////////////////////////////
 int main(){
 	
 	int qntd, cara = 0, coroa = 0;	
	srand(time(NULL));
 	
	 	printf("Digite quantas vezes quer testar cara ou coroa:\n");
	 	scanf("%d", &qntd);
	
	lancamentos(qntd, &cara, &coroa);
	
		printf("Cara repetiu '%d' vezes\nCoroa repetiu '%d' vezes\n\n", cara, coroa);

		printf("-----Porcentagem-----\n");
		printf("Cara: %.1f\n", ((float)cara/(float)qntd * 100.0));
		printf("Coroa: %.1f\n", ((float)coroa/(float)qntd * 100.0));
		 	
 	return 0;
 }
