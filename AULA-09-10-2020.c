#include <stdio.h>
#include <string.h>

char nome[30], sexo, nomeOld[30], nomeNew[30];
int idade, i, qtdHomens = 0, qtdMulheres = 0, somaIdade = 0, idadeOld=0, idadeNew=999;
float porcentH, porcentM, mediaIdade;

int main(){

    for(i=0; i<10000;i++){
        fflush(stdin);
        printf("Informe o nome: ");
        scanf("%[^\n]s", &nome);

        if(nome[0] == 32){
            break;
        }

        fflush(stdin);
        printf("Informe o sexo: ");
        scanf("%c", &sexo);

        if(sexo == 'f') qtdMulheres++;
        else qtdHomens++;

        printf("Informe a idade: ");
        scanf("%i", &idade);
        somaIdade += idade; // somaIdade = somaidade + idade;

        if(idade > idadeOld){
            idadeOld = idade;
            strcpy(nomeOld, nome); // nomeOld = nome;
        }

        if(idade < idadeNew){
            idadeNew = idade;
            strcpy(nomeNew, nome);
        }
    }

    if(!i){
        printf("\n######################################################");
        printf("\n################ PROGRAMA FINALIZADO #################");
        printf("\n######################################################\n\n\n");
        system("color fc");
    }else{

        porcentH = (float) qtdHomens/i*100.0;
        porcentM = (float) qtdMulheres/i*100.0;

        mediaIdade = (float) somaIdade/i;
        system("cls");
        system("color 27");
        printf("\n######################################################");
        printf("\n################ ---- RESULTADO ---- #################");
        printf("\n######################################################\n");
        printf("\n\nO total de pessoas = %i\n", i);
        printf("A porcentagem de Homens = %.2f%%\n", porcentH);
        printf("A porcentagem de Mulheres = %.2f%%\n", porcentM);
        printf("A media de idades = %.2f\n", mediaIdade);
        printf("%s e a pessoa mais velha com %i anos de idade\n", nomeOld, idadeOld);
        printf("%s e a pessoa mais nova com %i anos de idade\n", nomeNew, idadeNew);
    }
}
