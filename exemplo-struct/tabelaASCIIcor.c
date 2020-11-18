#include<stdio.h>
#include "BibliotecaViana.c"

int main(){
   	int i;
	//imprimir tabela ascII com COR
	printf("\n\t\t\tTABELA ASCII COM COR\n\n");
	
	for (i=0; i<256; i++){
		if(i!=7 && i!=8 && i!=9 && i!=10 && i!=11 && i !=12 && i!=13){
			cor(i);
			printf("%i = %c   \t", i, i);
		}else{
			cor(i);
			printf("%i =     \t", i);
		}			
	}
	
	cor(7);
}
