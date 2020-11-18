#include <stdio.h>

int main(){
	int i;
	//imprimir tabela ascII
	printf("\n\t\t\t\tTABELA ASCII\n\n");
	
	for (i=0; i<256; i++){
		if(i!=7 && i!=8 && i!=9 && i!=10 && i!=11 && i !=12 && i!=13)
			printf("%i = %c   \t", i, i);
	}
}
