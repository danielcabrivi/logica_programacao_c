// Algoritmo que receba 4 notas de um aluno, calcular a média das notas e se a média for maior ou igual a 65
// imprimir Aluno Aprovado, senão imprimir Aluno Reprovado.

#include<stdio.h>

int n1, n2, n3, n4;
float media;

int main(){
	// %i -> int 	// %f -> float	// %c -> char
	printf("Informe a nota 1: ");
	scanf("%i",&n1);
	
	printf("Informe a nota 2: ");
	scanf("%i",&n2);
	
	printf("Informe a nota 3: ");
	scanf("%i",&n3);
	
	printf("Informe a nota 4: ");
	scanf("%i",&n4);
	
	media = (n1+n2+n3+n4)/4;
	
	// \n serve para quebrar linha
	printf("\nA media e: %f\n\n", media);
	
	if (media >= 65){
		printf("Aluno APROVADO");
	}else{
		printf("Aluno REPROVADO");
	}
}

