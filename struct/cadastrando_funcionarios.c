#include <stdio.h>

typedef struct {
	char nome[50];
	int idade;
	float salario;
	int experiencia;
	char cargo[30];
} funcionario;

int main (){
	int qtd, soma = 0, maiorexp = 0, indiceMaiorExp = 0, indiceMaiorSalario = 0;
	float maiorsalario = 0;
	printf("Qual a quantidade de funcionarios?: ");
	scanf("%d", &qtd);
	
	funcionario func[qtd];
	
	for(int i = 0; i < qtd; i++){
		printf("---Cadastrando funcionario %d---\n", i);
		
		printf("Nome: ");
		fflush(stdin);
		scanf("%[^\n]s", func[i].nome);
		
		printf("Idade: ");
		scanf("%d", &func[i].idade);
		
		printf("Salario: ");
		scanf("%f", &func[i].salario);
		
		printf("Experiencia em anos: ");
		scanf("%d", &func[i].experiencia);
		
		printf("Cargo: ");
		fflush(stdin);
		scanf("%[^\n]s", func[i].cargo);
		
		soma = soma + func[i].idade;
		if(func[i].experiencia > maiorexp){
			maiorexp = func[i].experiencia;
			indiceMaiorExp = i;
			
		if(func[i].salario > maiorsalario){
			maiorsalario = func[i].salario;
			indiceMaiorSalario = i;
		}
		}
	}	
	
	printf("Media de idade: %.2f\n", (float)soma / (float)qtd);
	printf("Funcionario com maior experiencia: %s\n", func[indiceMaiorExp].nome);
	printf("Cargo com maior salario: %s", func[indiceMaiorSalario].cargo);
	return 0;
}
