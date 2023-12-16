/* Faça um programa que calcula o custo de um churrasco para n pessoas incluindo adultos e crianças. 
Cada criança maior do que 3 anos paga metade. O usuário define os itens do churrasco e seus respectivos preços. 
O programa calcula a quantidade necessária de cada item conforme a quantidade de pessoas. 
O programa também calcula quanto cada pessoa terá que pagar para ir no churrasco. 
Suponha que cada adulto consome em média 200g de carne e 500ml de bebida. 
Suponha que as crianças consomem em média a metade do que um adulto consome. */

#include <stdio.h>
#include <stdlib.h>

float precoGramas(){
	float valorCarne = 0, c; 	
		do{
	 		printf("(0 para sair)Digite o preco em kg da carne:");
	 			scanf("%f", &c);
	 			valorCarne += c;
		 }while(c != 0);
		 
			 valorCarne = valorCarne / 1000;

	return valorCarne;
}
///////////////////////////////////////////////////////
float precoMl(){
	
 	float valorBebida = 0, l;
	 	do{
	 		printf("Digite o preco em litro da bebida:");
	 			scanf("%f", &l);
	 			valorBebida += l;
		 }while(l != 0);
			valorBebida = valorBebida / 1000;

	return valorBebida;
}
///////////////////////////////////////////////////////
float ingressoInfantil(int criancas, float g, float ml){

	float totalG = 0, totalMl = 0, cadaCriancaG, cadaCriancaMl, ingressoCrianca;
//carne:	
		 totalG = criancas * 100;
		 cadaCriancaG = (g *  totalG) / criancas;
//bebida:
		 totalMl = criancas * 250;
		 cadaCriancaMl = ml *  totalMl / criancas;

	ingressoCrianca = cadaCriancaG + cadaCriancaMl;

	return ingressoCrianca;
}
///////////////////////////////////////////////////////
float ingressoM18(int adultos, float g, float ml){

	float totalG = 0, totalMl = 0, cadaAdultoG, cadaAdultoMl, ingressoAdulto;
//carne:	
		 totalG = adultos * 200;
		 cadaAdultoG = (g *  totalG) / adultos;
//bebida:
		 totalMl = adultos * 500;
		 cadaAdultoMl = ml *  totalMl / adultos;

	ingressoAdulto = cadaAdultoG + cadaAdultoMl;

	return ingressoAdulto;
}
///////////////////////////////////////////////////////
 int main(){
 	 	
 	int adulto, crianca;
 	float gramas, ml;
 	float ingressoCrianca, ingressoAdulto;
	 	
	 	printf("Digite quantos adultos irao participar do churrasco:");
	 		scanf("%d", &adulto);
	 	printf("Digite quantas criancas irao participar do churrasco:");
	 		scanf("%d", &crianca);
 	 	
 gramas = precoGramas();

 ml = precoMl();

 ingressoCrianca = ingressoInfantil(crianca, gramas, ml);

 ingressoAdulto = ingressoM18(adulto, gramas, ml);

  system("cls"); // Limpa a tela

		 printf("--------VALORES--------\n");
		 printf("\nCada adulto paga: R$ %.2f", ingressoAdulto);
		 printf("\nCada crianca paga: R$ %.2f", ingressoCrianca);
		 
 	return 0;
 }

