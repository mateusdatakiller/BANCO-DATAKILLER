#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>


void app (char nome[], char email [], char mae [], char cpf [], char data [], char rg []) { 
	int extrato;
	float boleto;
	sleep(5);
	printf("\n\n\t\t\t\t\t==============================");
	printf("\n \t\t\t\t\t=     VOCE ESTÁ NO INTERNET  =\n");
	printf("\t\t\t\t\t=      BANKING DATAKILLER    =");
	printf("\n\t\t\t\t\t==============================");
	printf("\n\t (1) Adicionar dinheiro \n\t (2) Consultar saldo \n\t (3) Meus dados \n\t (5) Bloquear cartão ");
	scanf("%d", &extrato);
	if (extrato==1) {
		 printf("\n Informe o valor do boleto que deseja gerar:" );
		 scanf("%f", &boleto);
		 printf ("gerando boleto\n");
		 printf("=========================");
		 printf("\nBoleto gerado \n");
		 printf("=========================");
		 printf("\nCodigo de barra \n 01679854632102457896520132456898745268532145678");
		 sleep(5);
		 system ("clear");
	}
	else if (extrato==2)  {
		printf ("\n\nseu nome é: %s \n email: %s \n nome da mae: %s \n cpf: %s \n data de nascimento: %s \n identidade: %s ",nome,email,mae,cpf,data,rg);
	}
} 

int main () {
	char nome [100];
	char mae[100];
	char senha[100];
	char email [100];
	char cpf[100];
	char data[100];
	char rg[100];
	setlocale (LC_ALL,"portuguese");
	printf("\n\n\t\t\t\t\t==============================");
	printf("\n \t\t\t\t\t=        BEM-VINDO           =\n");
	printf("\t\t\t\t\t=      AO DATAKILLER         =");
	printf("\n\t\t\t\t\t==============================");
	printf("\n\n\n Olà boa tarde, qual seu nome? " );
	fgets (nome,100,stdin);
	system("clear");
	printf(" \n Olá %s \n nome",nome);
	system ("clear");
	printf("vamos criar sua conta no banco DATAKILLER \n Informe seu email: ");
	fgets(email,100,stdin); 
	system ("clear");
	printf("Senha:" );
	fgets(senha,100,stdin);
	system ("clear");
	printf("informe seu cpf");
	fgets(cpf,100,stdin);
	system ("clear");
	printf("Data de nascimento");
	fgets(data,100,stdin);
	system ("clear");
	printf("RG");
	fgets(rg,100,stdin);
	system ("clear");
	printf("nome da Mae");
	fgets(mae,100,stdin);
	system ("clear");
	printf (" \n\n\n\n\t\t\t\t\tCadastro realizado com sucesso");
	
	app (nome, email,mae,cpf,data,rg);
}

