/* Crie um simulador de conta bancaria; o programa só pode parar quando o usuario escolher sair;
Funções: Verificar Saldo, Depositar, Sacar, O saldo não pode ficar negativo;  */
#include <stdio.h>
#include <stdlib.h>
 void verificarSaldo(float saldo){
	
		printf("\nO saldo atual eh: %.2f\n", saldo);
}
//////////////////////////////////////////////////////////////
 void depositar(float *saldo){
 	float deposito = 0;
 		printf("\nQual valor deseja depositar... ");
 		scanf("%f", &deposito);
 	  if(deposito < 0){
 	  		printf("\n....Digite um valor positivo!....\n");
	   } else{
 			(*saldo) = (*saldo) + deposito;	 	
	   }
 }
//////////////////////////////////////////////////////////////
 void sacar(float *saldo){
	float saque, saldoTeste;
 		printf("\nQual valor deseja sacar... ");
 		scanf("%f", &saque);
 	  saldoTeste = (*saldo);
 	  saldoTeste = saldoTeste - saque;
		if(saldoTeste < 0){
			printf("\n....Saldo insuficiente!....\n");
		}else{
	(*saldo) = saldoTeste;		
		}		
	}
//////////////////////////////////////////////////////////////
 int main(){
 	
 	int operacao = 0;
 	float saldo, deposito, saque;

				printf("-Digite 0 caso queira sair do simulador!\n\n"); 	
			 	printf("Digite o Saldo atual da conta: ");
			 	scanf("%f", &saldo);
 system("cls"); // Limpa a tela
			 	printf("--------Simulador de conta bancaria--------\n");	
	  do{
	  			printf("------------------------------------------------------------");
				printf("\n'1 - VERIFICAR SALDO'	'2 - DEPOSITAR'		'3 -SACAR ' ");
				printf("\nDigite a opcao desejada: ");
				scanf("%d", &operacao);
				
// lista de comandos no switch		  	
		  	switch(operacao){
		  		case 1: 	verificarSaldo(saldo);						break;
			  	case 2:     depositar(&saldo);		     	  	    	break;
			  	case 3: 	sacar(&saldo);								break;
				case 0:		printf("\n--Saindo do simulador.---\n");			break;                
            	
			 default:
                printf("....Opcao invalida!....\n\n");			 
			}
	   }while(operacao != 0); 	
 	
 	
 	return 0;
 }

