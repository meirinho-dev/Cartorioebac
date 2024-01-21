#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biclioteca respons�vel por cuidar das string

int registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	// In�cio da cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// Final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // Respons�vel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); // Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Atualiza informa��o
	fprintf(file,","); // Adiciona v�rgula
	fclose(file); // Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletando informa��es do usu�rio
	scanf("%s", nome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //Atualiza informa��o
	fprintf(file,nome); //Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo

	file = fopen(arquivo, "a"); // Atualiza informa��o
	fprintf(file,","); // Adicionando v�rgula
	fclose(file); // Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletando informa��es do usu�rio
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); // Atualiza informa��o
	fprintf(file,sobrenome); // Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo

	file = fopen(arquivo, "a"); // Atualiza informa��o
	fprintf(file,","); // Adicionando v�rgula
	fclose(file); // Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //Atualiza informa��o
	fprintf(file,cargo); // Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo		
	
	system("pause"); // Respons�vel por pausar a tela pro usu�rio
	
		
}

int consulta() // Fun��o respons�vel por consultar os usu�rios no sistema
{
	setlocale(LC_ALL, "PORTUGUESE"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: "); //Coletando informa��es do usu�rio
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file; // Cria o arquivo
	file = fopen(cpf,"r"); // Cria o arquivo e o "r" significa ler
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL);
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s",conteudo); //%s refere-se a string
		printf("\n\n");
		
	}
	
	system("pause"); // Resons�vel por pausar a tela para o usu�rio
	
	
}

int deletar() // Fun��o respons�vel por deletar os usu�rios do sistema
{
		char cpf[40];
		
		printf("Digite o CPF do usu�rio a ser deletado: "); // Coletando informa��es do usu�rio
		scanf("%s", cpf); //%s refere-se a string
		
		remove(cpf); // Remove o CPF do usu�rio
		
		FILE *file; // Cria o arquivo 
		file = fopen(cpf,"r"); // Cria o arquivo e o "r" refere-se a ler
		
		if(file == NULL)
		{
			printf("O usu�rio n�o se encontra no sistema! \n");
			system("pause"); // Respons�vel por pausar a tela para o usu�rio
		}
		
		
		
}



int main ()
	{
		int opcao=0; //Definindo as vari�veis
		int laco=1;
		char senhadigitada [10]="a";
		
		printf("###CART�RIO DA EBAC###\n\n");
		printf("Login de administrador!\n\n Digite a sua senha:");
		scanf("%s",senhadigitada);
		
		if(senhadigitada[10] == "adimin")
		
		{
				
			for(laco=1;laco=1;)
			{
				system("cls");
					
				setlocale(LC_ALL, "PORTUGUESE"); //Definindo a linguagem
			
				printf("###CART�RIO DA EBAC###\n\n"); //In�cio do Menu
				printf("Escolha a op��o desejada:\n\n");
				printf("\t1 - Registrar Usu�rios\n");
				printf("\t2 - Consultar Usu�rios\n");
				printf("\t3 - Deletar Usu�rios\n\n");
				printf("\t4 - Sair do Sistema\n\n"); //Final do Menu
			
				scanf("%d", &opcao); //Armazenando a Escolha do Usu�rio
			
				system("cls"); // Respons�vel por limpar a tela
			
				switch(opcao) // inicio da sele��o do menu
				{
			
					case 1:
					registro(); // Chamada de fun��es
					break;
				
					case 2:
					consulta();
					break;
				
					case 3:
					deletar();
					break;
					
					case 4:
					printf("Obrigado por utilizar o sistema!\n");
					return 0;
					break;
				
					default:
					printf("Essa op��o n�o est� dispon�vel!\n"); // fim da sele��o
					system("pause");
					break;
				}// fim da sele��o
			}
		}
	else
	printf("Senha incorreta!");
	}	

	

