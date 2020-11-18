#include <stdio.h>
#include "BibliotecaViana.c"

void formAluno(int linha){
	int i;
	
	gotoxy(linha+4,1); printf("%c", 179);	
	gotoxy(linha+4,40); printf("%c", 179);
	gotoxy(linha+4,60); printf("%c", 179);
	gotoxy(linha+4,80); printf("%c", 179);
	
	gotoxy(linha+5,1); printf("%c", 192);
	gotoxy(linha+5,2); for(i=0;i<78;i++) printf("%c", 196);
	gotoxy(linha+5,40); printf("%c", 193);
	gotoxy(linha+5,60); printf("%c", 193);
	gotoxy(linha+5,80); printf("%c", 217);
}

void formBase(){
	int i;
	
	gotoxy(1,1);
	printf("%c", 218);
	for(i=0;i<78;i++) printf("%c", 196);
	printf("%c", 191);
	
	gotoxy(2,1); printf("%c", 179);
	gotoxy(2,80); printf("%c", 179);
	
	gotoxy(3,1); printf("%c", 195);
	gotoxy(3,2); for(i=0;i<78;i++) printf("%c", 196);
	gotoxy(3,80); printf("%c", 217);
	gotoxy(3,40); printf("%c", 194);
	gotoxy(3,60); printf("%c", 194);
	gotoxy(3,80); printf("%c", 180);
}

void labelForm(){
	gotoxy(2,36); printf("CADASTRO");
	gotoxy(3,2); printf(" Nome ");
	gotoxy(3,41); printf(" Ra ");
	gotoxy(3,61); printf(" Idade ");
}

int main(){
	int i;
		
	corFundo(112);
	formBase();
	
	for(i=0; i<20;i+=2){
		formAluno(i);
	}
	
	labelForm();
		
	gotoxy(30,1);
}
