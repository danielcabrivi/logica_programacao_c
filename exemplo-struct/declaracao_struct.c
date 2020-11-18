// TIPOS ABSTRATOS DE DADOS

typedef struct{
	int horas;
	int minutos;
	int segundos;
}TipoHorario;

typedef struct{
	int dia;
	int mes;
	int ano;
}TipoData;

typedef struct{
	TipoData data;
	TipoHorario horario;
	char descricao[200];
}TipoCompromisso;

typedef struct{
	char nome[40];
	char endereco[200];
	int idade;
}TipoPessoa; // Tipo abstrato de dados

typedef struct{
	char nome[40];
	char curso[50];
	int ra;
	float nota1;
	float nota2;
	float nota3;
}TipoAluno;

