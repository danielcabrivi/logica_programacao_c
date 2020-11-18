#include <stdio.h>
#include "declaracao_struct.c"

int main(){
	TipoAluno aluno[5];
	int i;
	
	for(i=0; i<5; i++){
		fflush(stdin);
		printf("Informe o nome do aluno: ");
		scanf("%[^\n]s", &aluno[i].nome);
		
		printf("Informe o RA do aluno: ");
		scanf("%i", &aluno[i].ra);
		
		fflush(stdin);
		printf("Informe o nome do curso: ");
		scanf("%[^\n]s", &aluno[i].curso);
	}
	
	printf("\n\n");
	
	for(i=0; i<5; i++){
		printf("\nO aluno(a) %s possui o RA %i e esta matriculado no curso %s\n", aluno[i].nome, aluno[i].ra, aluno[i].curso);
	}
}

