#include <stdio.h>
#include "declaracao_struct.c"
#include "BibliotecaViana.c"

int main(){
	TipoAluno aluno[5], alunoMaiorP1, alunoMaiorMedia, alunoMenorMedia;
	int i;
	float notaMaiorP1 = 0.0, maiorMedia = 0.0, menorMedia = 999.0, media;
	
	for(i=0; i<3; i++){
		fflush(stdin);
		printf("Informe o nome do aluno: ");
		scanf("%[^\n]s", &aluno[i].nome);
		
		printf("Informe o RA do aluno: ");
		scanf("%i", &aluno[i].ra);
		
		printf("Informe as 3 notas do aluno (separar por espaco): ");
		scanf("%f %f %f", &aluno[i].nota1, &aluno[i].nota2, &aluno[i].nota3);
		
		media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
		
		if(media >= 6.0){
			printf("ALUNO APROVADO\n\n");
		}else{
			printf("ALUNO REPROVADO\n\n");
		}
		
		if(media > maiorMedia){
			maiorMedia = media;
			alunoMaiorMedia = aluno[i];
		}
		
		if(media < menorMedia){
			menorMedia = media;
			alunoMenorMedia = aluno[i];
		}
		
		if(aluno[i].nota1 > notaMaiorP1){
			notaMaiorP1 = aluno[i].nota1;
			alunoMaiorP1 = aluno[i];
		}
	}
	
	printf("\n\n");
	printf("O aluno com a maior nota e %s com ra %i", alunoMaiorP1.nome, alunoMaiorP1.ra);
	printf("\nO aluno com menor media e %s com ra %i", alunoMenorMedia.nome, alunoMenorMedia.ra);
	printf("\nO aluno com maior media e %s com ra %i", alunoMaiorMedia.nome, alunoMaiorMedia.ra);
	
	printf("\n\n");
	for(i=0; i<3; i++){
		printf("\nO aluno(a) %s possui o RA %i \n", aluno[i].nome, aluno[i].ra);
	}
}

