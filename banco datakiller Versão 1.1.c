#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>


void app (char nome[], char email [], char mae [], char cpf [], char data [], char rg []) { 
	int opc=0, pagamentos;
	float boleto, saldo=600, valor_bilhete, recarga_uber;
	float valor_boleto, valor, valor_total;
	char operadora [13], telef [15], c_barra[100];
	char menu [4]= "sim", cidade[20], cartao[30], nome_cartao[30];
	sleep(5);
	while (opc!=6 && strcmp (menu,"sim") ==0 ) {
	
		printf("\n\n\t\t\t\t\t==============================");
		printf("\t\t\n\n SALDO: R$%.2f",saldo);
		printf("\n \t\t\t\t\t=    VOCE ESTÁ NO INTERNET  =\n",saldo);
		printf("\t\t\t\t\t=      BANKING DATAKILLER    =");
		printf("\n\t\t\t\t\t==============================");
		printf("\n\n\t (1) Adicionar dinheiro \n\t (2) Meus dados \n\t (3) Consultar saldo \n\t (4) Bloquear cartão \n\t (5) Pagamanetos de contas \n\t (6) Fechar \n  ");  
		scanf("%d", &opc);
		if (opc==1) {
			 printf("\n Informe o valor do boleto que deseja gerar:" );
			 scanf("%f", &boleto);
			 printf ("Gerando boleto\n");
			 printf("=========================");
			 printf("\nBoleto gerado \n");
			 printf("=========================");
			 printf("\nvalor R$%.2f",boleto);
			 saldo=boleto+saldo;
			 printf("\nCodigo de barra \n 01679854632102457896520132456898745268532145678 \n\n");
			 system("pause");
			 system ("cls");
		}
		else if (opc==2)  {
			printf ("\n\n Seu nome é: %s \n email: %s \n nome da mae: %s \n cpf: %s \n data de nascimento: %s \n identidade: \n\n %s ",nome,email,mae,cpf,data,rg);
			system("pause");
			system ("cls");
		}
		else if (opc==3) {
			printf("\n\n\t\t\t\t\t==============================");
			printf("\n \t\t\t\t\t=        SALDO            =\n");
			printf(" \t\t\t\t\t\t R$%.2f",saldo);
			printf("\n\n\t\t\t\t\t============================== \n\n");
			system("pause");
			system ("cls");
		}
		else if (opc==4) {
			printf ("Cartão bloqueado \n\n");
			system("pause");
			system ("cls");
		}
		else if (opc!=6 && menu== "sim") {
			printf("voltar ao menu? \n\n");
			fgets(menu,4,stdin);
			system("pause");
			system ("cls");
		}
		else if (opc==5) {
			system ("cls");
			printf("\n\t PAGAMENTOS DE CONTA \n\n  \n\t (1) Recarga de celular \n\t (2) Cartão vale transporte \n\t (3) Uber pré-pago \n\t (4) Pagar conta \n\t");
			scanf("%d", &pagamentos);
			if (pagamentos==1) {
				printf ("=========================================================\n");
				fflush(stdin);
				printf("Numero de Celular: ");
				fgets(telef,15,stdin);
				fflush(stdin);
				system("cls");
				printf("Operadora: ");
				fgets(operadora,13,stdin);
				fflush(stdin);
				system("cls");
				printf("Valor: ");
				scanf("%f", &valor);
				valor_total=valor;
				fflush(stdin);
				printf("Regarga relalizada \n Valor R$%.2f Reais \n Operadora %s \n Numero %s \n",valor_total,operadora,telef);
				sleep(5);
				system("cls");
				fflush(stdin);
			}
			else if (pagamentos==2) {
				printf("\n\t\tNo Datakiller Bank  recarga de vale trasnporte tem 10%% de desconto:");
				fflush(stdin);
				printf("Infome a cidade: ");
				fgets(cidade,20,stdin);
				fflush(stdin);
				printf("Número do Cartão: ");
				fgets(cartao,30,stdin);
				fflush(stdin);
				printf("Informe Nome do Cartão: ");
				fgets(nome_cartao,30,stdin);
				fflush(stdin);
				printf("Informe valor: ");
				scanf("%f", &valor_bilhete);
				fflush(stdin);
				
				valor_total= valor_bilhete - (valor_bilhete*0.1); 
				printf("Recarga realizada com Sucesso \n cidade %s \n valor %.2f \n valor a pagar %.2f \n OBRIGADO! ",cidade,valor_bilhete,valor_total);
				sleep(8);
				system("cls");
				fflush(stdin);
			}
			else if (pagamentos==3) {
				printf("\n No Datakiller Bank  recarga de Uber Pre-pago tem 10%% de desconto: \n");
				printf("Informe um valor: ");
				scanf("%f", &recarga_uber);
				valor_total= recarga_uber- (recarga_uber*0.1);
				
				printf("Recarga Realizada com Sucesso \n valor %.2f \n valor a pagar %.2f ",recarga_uber, valor_total);
				printf(" \n IMPORTANTE! você receberá o codigo PIN \n no valor da recarga escolhida \n O crédito não é reembolsável pelo Datakiller BANK");
				sleep(10);
				system("cls");
				fflush(stdin);
			}
			else if (pagamentos==4) {
				printf("Pagamentos de boletos tem Juros de 3%% \n");
				fflush(stdin);
				printf (" \n Digite o código de barra: ");
				fgets(c_barra,100,stdin);
				fflush(stdin);
				printf("Valor do boleto: ");
				scanf("%f", &valor_boleto);
				valor_total= (valor_boleto*0.03) + valor_boleto;
				
				printf("Boleto pago \n Códico de barra %s \n Valor R$%.2f \n Total com juros R$%.2f",c_barra,valor_boleto,valor_total);
				sleep(8);
				system("cls");
				fflush(stdin);
			}
		} 
		fflush(stdin);
		saldo=saldo - valor_total;
		fflush(stdin);
	
		
	}
	system("pause");
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
	printf("\n\n\n Olá  boa tarde, qual seu nome? " );
	fgets (nome,100,stdin);
	system ("cls");
	printf(" \n OlÃ¡ %s \n nome",nome);
	system ("cls");
	printf("\t\t\t Vamos criar sua conta no banco DATAKILLER \n\n Informe seu email: ");
	fgets(email,100,stdin); 
	system ("cls");
	printf("Senha: ");
	fgets(senha,100,stdin);
	system ("cls");
	printf("Informe seu cpf ");
	fgets(cpf,100,stdin);
	system ("cls");
	printf("Data de nascimento ");
	fgets(data,100,stdin);
	system ("cls");
	printf("RG ");
	fgets(rg,100,stdin);
	system ("cls");
	printf("Nome da Mae ");
	fgets(mae,100,stdin);
	system ("cls");
	printf (" \n\n\n\n\t\t\t\t\tCadastro realizado com sucesso");
	printf (" \n BEM-VINDO \n %s  ",nome);
	sleep(2);
	system("cls");     
	printf("\n Analisando dados...");
	sleep(1);
	printf("\n Verificando... ");
	sleep(1);
	printf("\n Atualizando Banco de dados...");
	sleep(1);
	printf("\n Obtendo atualização...");
	sleep(1);
	printf ("\n Procurando Dependencia...");
	sleep(3);
	printf("\n Sofware update plus.onion...");
	sleep(1);
	printf("\n Sofware database.onion...");
	sleep(2);
	printf("\n Python lib.3...");
	sleep(1);
	printf("\n Python lib.deb...");
	sleep(2);
	printf("\n Python antemalware.deb...");
	sleep(3);
	printf("\n Python j.coje.py...");
	sleep(1);
	printf("\n Buld.py...");
	sleep(2);
	printf("\n R.java...");
	sleep(2);
	printf("\n Aidl.java...");
	sleep(1);
	printf("\n Project.py...");
	sleep(2);
	printf("\n model.py...");
	sleep(1);
	printf("\n model.dll...");
	sleep(3);
	printf("\n Aidl.java...");
	sleep(2);
	printf("\n Sdk sofware.java...");
	sleep(1);
	printf("\n Python defender.py...");
	sleep(2);
	printf("\n Pacote lib.tar...");
	sleep(1);
	printf("\n alg.c++...");
	sleep(2);
	printf("\n Sdk sofware.c++...");
	sleep(1);
	printf("\n Desconpactando...");
	sleep(2);
	printf("\n Instalando depencencias...");
	sleep(1);
	printf("\n Dependencias instaladas...");
	sleep(2);
	printf("\n Tudo pronto...");
	sleep(1);
	printf("\n Vamos começar...");
	sleep(2);
	system("cls");
	
	app (nome, email,mae,cpf,data,rg);
}

