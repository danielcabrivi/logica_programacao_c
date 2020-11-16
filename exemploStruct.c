#include <stdio.h>

// vetor, matriz, struct

typedef struct{
	int id;
	int qtd;
	char nome[10];
}TipoTurma;

typedef struct{
	char nome[30];
	int ra;
	int idade;
	TipoTurma turma;	
} TipoAluno; //TAD -> TIPO ABSTRATO DE DADOS


int main(){
	TipoTurma turma[3];
	TipoAluno aluno[5]; //Local
	int i, id, idTurma;
	
	printf("\nTURMAS\n");
	
	for(i=0; i<3;i++){
		printf("\n\nTURMA COM ID = %i\n", i);
		turma[i].id = i;
		
		printf("Informe a qtd da turma: ");
		scanf("%i", &turma[i].qtd);
		
		printf("Informe o nome da turma: ");
		scanf("%s", &turma[i].nome);
	}
	
	printf("\nALUNOS\n");
	
	for(i=0;i<5;i++){
		printf("\nALUNO COM ID = %i\n", i);
		printf("Informe o nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		
		printf("Informe o RA: ");
		scanf("%i", &aluno[i].ra);
		
		printf("Informe a idade: ");
		scanf("%i", &aluno[i].idade);
		
		
		printf("Informe o ID da turma (0,1,2): ");
		scanf("%i", &idTurma);
		aluno[i].turma = turma[idTurma];
	}
	
	do{
		printf("\n\nInforme um ID da turma para consultar: ");
		scanf("%i", &id);
		
		for(i=0; i<5; i++){
			if(aluno[i].turma.id == id){
				printf("\nO aluno %s, possui RA = %i, idade = %i e pertence a turma com nome %s e com qtd = %i", aluno[i].nome, aluno[i].ra, aluno[i].idade, aluno[i].turma.nome, aluno[i].turma.qtd);
			}
		}		
	}while(id != -1);
	
}


