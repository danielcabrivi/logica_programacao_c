//Biblioteca contendo funções criadas pelo Prof. Msc. Filipe Costa Fernandes
//e adaptadas por Prof. Daniel Viana.

#include<windows.h>

void cor(int cor_letra)
{
     HANDLE hOut;
     hOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hOut, cor_letra);
}

void delay(int tempo_de_parada)
{
     _sleep(tempo_de_parada);
}

void gotoxy(int x, int y) {
  COORD c;
  c.X = y - 1;
  c.Y = x - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void corFundo(int cor_letra)
{
	int i,j;
	cor(cor_letra);
    for (i=1; i<=80;i++)
        for (j=1;j<=25;j++)
        {
            gotoxy(j,i); printf(" ");
        } 
}

void janela1(int l1, int c1, int l2, int c2)
{
     int j1;
     int j2;
     for(j1=l1;j1<l2;j1++)
         for (j2=c1;j2<c2;j2++)
         {
             gotoxy(j1,j2); printf(" ");
         }
     
     for (j1=l1+1; j1<l2;j1++)
     {
         gotoxy(j1,c1); printf("%c",186);
     }
     for (j1=l1+1; j1<l2;j1++)
     {
         gotoxy(j1,c2); printf("%c",186);
     }
     for (j1=c1+1;j1<c2;j1++)
     {
         gotoxy(l1,j1); printf("%c",205);
     }
     for (j1=c1+1;j1<c2;j1++)
     {
         gotoxy(l2,j1); printf("%c",205);
     }
     
     gotoxy(l1,c1); printf("%c",201);
     gotoxy(l1,c2); printf("%c",187);
     gotoxy(l2,c1); printf("%c",200);
     gotoxy(l2,c2); printf("%c",188);
 }
 
 void janela2(int l1, int c1, int l2, int c2)
{
     int j1;
     int j2;
     for(j1=l1;j1<l2;j1++)
         for (j2=c1;j2<c2;j2++)
         {
             gotoxy(j1,j2); printf(" ");
         }
     for (j1=l1+1; j1<l2;j1++)
     {
         gotoxy(j1,c1); printf("%c",179);
     }
     for (j1=l1+1; j1<l2;j1++)
     {
         gotoxy(j1,c2); printf("%c",179);
     }
     for (j1=c1+1;j1<c2;j1++)
     {
         gotoxy(l1,j1); printf("%c",196);
     }
     for (j1=c1+1;j1<c2;j1++)
     {
         gotoxy(l2,j1); printf("%c",196);
     }
     
     gotoxy(l1,c1); printf("%c",218);
     gotoxy(l1,c2); printf("%c",191);
     gotoxy(l2,c1); printf("%c",192);
     gotoxy(l2,c2); printf("%c",217);
 }
 
void janelaDados(int linhaIni)
{
	int i;
	
	janela2(linhaIni,1,linhaIni+4,80);
    
	for (i=2;i<80;i++)
    {
        gotoxy(linhaIni+2,i); printf("%c",196);
    }
    
    gotoxy(linhaIni,40); printf("%c",194);
    gotoxy(linhaIni+1,40); printf("%c",179);
    gotoxy(linhaIni+2,1);  printf("%c",195);
    gotoxy(linhaIni+2,40); printf("%c",193);
    gotoxy(linhaIni+2,80); printf("%c",180);
    
    gotoxy(linhaIni+4,1);  printf("%c",192);
    gotoxy(linhaIni+4,80); printf("%c",217);
    
    gotoxy(linhaIni+2,28); printf("%c",194);
    gotoxy(linhaIni+3,28); printf("%c",179);
    gotoxy(linhaIni+4,28); printf("%c",193);
    
    gotoxy(linhaIni+2,55); printf("%c",194);
    gotoxy(linhaIni+3,55); printf("%c",179);
    gotoxy(linhaIni+4,55); printf("%c",193);
    
    gotoxy(linhaIni,3); printf(" Nome do Produto ");
    gotoxy(linhaIni,42); printf(" Nome do Fornecedor ");
    gotoxy(linhaIni+2,3); printf(" Valor (0.00)");
    gotoxy(linhaIni+2,29); printf(" Data (dd/mm/aaaa)");    
    gotoxy(linhaIni+2,56); printf(" Estoque ");	
}
 
void janelaBase(char nome[])
{
	int i, j;
	janela1(1,1,3,80);
    gotoxy(2,31);
    printf("%s",nome);    
} 

int menu(int c1, int c2, int linha, int col)
// c1 -> cor destaque (menu selecionado)   
// c2 -> cor padrão
// linha -> posição da linha em que o menu será exibido
// col -> posição da coluna em que o menu será exibido
{
    int op=0, t=19;
    int pos = 1;

    do{
        
    if (pos==1)
    {
               cor(c1);               
               gotoxy(linha,col);
               printf(" %c Cadastrar Produto %c ",16,17);               
    }
    else
    {
               cor(c2);               
               gotoxy(linha,col);
               printf("   Cadastrar Produto   ");               
    }
    if (pos==2)
    {
               cor(c1);               
               gotoxy(linha+1,col);
               printf(" %c Produtos (A-Z)    %c ",16,17);               
    }
    else
    {
               cor(c2);               
               gotoxy(linha+1,col);
               printf("   Produtos (A-Z)      ");               
    }
    if (pos==3)
    {
               cor(c1);               
               gotoxy(linha+2,col);
               printf(" %c Prod. Mais Caro   %c ",16,17);               
    }
    else
    {
               cor(c2);               
               gotoxy(linha+2,col);
               printf("   Prod. Mais Caro     ");               
    }
    if (pos==4)
    {
               cor(c1);               
               gotoxy(linha+3,col);
               printf(" %c Todos Produtos    %c ",16,17);               
    }
    else
    {
               cor(c2);              
               gotoxy(linha+3,col);
               printf("   Todos Produtos      ");               
    }
    if (pos==5)
    {
               cor(c1);
               gotoxy(linha+4,col);
               printf(" %c Sair              %c ",16,17);               
    }
    else
    {
               cor(c2);               
               gotoxy(linha+4,col);
               printf("   Sair                ");                
    }
    
    op = getch();
    
    if ((op==80)||(op==77))
       pos = (pos%5)+1;
    else
    if ((op==72)||(op==75))
    {  if (pos==1) pos = 5;
       else pos--;
       }
       
    }while(op!=13);

    return pos;     
}  
