#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biclioteca responsável por cuidar das string

int registro() // Função responsável por cadastrar os usuários no sistema
{
	// Início da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// Final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // Responsável por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); // Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // Salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Atualiza informação
	fprintf(file,","); // Adiciona vírgula
	fclose(file); // Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletando informações do usuário
	scanf("%s", nome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //Atualiza informação
	fprintf(file,nome); //Salva o valor da variável
	fclose(file); // Fecha o arquivo

	file = fopen(arquivo, "a"); // Atualiza informação
	fprintf(file,","); // Adicionando vírgula
	fclose(file); // Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletando informações do usuário
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); // Atualiza informação
	fprintf(file,sobrenome); // Salva o valor da variável
	fclose(file); // Fecha o arquivo

	file = fopen(arquivo, "a"); // Atualiza informação
	fprintf(file,","); // Adicionando vírgula
	fclose(file); // Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //Atualiza informação
	fprintf(file,cargo); // Salva o valor da variável
	fclose(file); // Fecha o arquivo		
	
	system("pause"); // Responsável por pausar a tela pro usuário
	
		
}

int consulta() // Função responsável por consultar os usuários no sistema
{
	setlocale(LC_ALL, "PORTUGUESE"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: "); //Coletando informações do usuário
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file; // Cria o arquivo
	file = fopen(cpf,"r"); // Cria o arquivo e o "r" significa ler
	
	if(file == NULL)
	{
		printf("Não foi possível abrir o arquivo, não localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL);
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s",conteudo); //%s refere-se a string
		printf("\n\n");
		
	}
	
	system("pause"); // Resonsável por pausar a tela para o usuário
	
	
}

int deletar() // Função responsável por deletar os usuários do sistema
{
		char cpf[40];
		
		printf("Digite o CPF do usuário a ser deletado: "); // Coletando informações do usuário
		scanf("%s", cpf); //%s refere-se a string
		
		remove(cpf); // Remove o CPF do usuário
		
		FILE *file; // Cria o arquivo 
		file = fopen(cpf,"r"); // Cria o arquivo e o "r" refere-se a ler
		
		if(file == NULL)
		{
			printf("O usuário não se encontra no sistema! \n");
			system("pause"); // Responsável por pausar a tela para o usuário
		}
		
		
		
}



int main ()
	{
		int opcao=0; //Definindo as variáveis
		int laco=1;
		char senhadigitada [10]="a";
		
		printf("###CARTÓRIO DA EBAC###\n\n");
		printf("Login de administrador!\n\n Digite a sua senha:");
		scanf("%s",senhadigitada);
		
		if(senhadigitada[10] == "adimin")
		
		{
				
			for(laco=1;laco=1;)
			{
				system("cls");
					
				setlocale(LC_ALL, "PORTUGUESE"); //Definindo a linguagem
			
				printf("###CARTÓRIO DA EBAC###\n\n"); //Início do Menu
				printf("Escolha a opção desejada:\n\n");
				printf("\t1 - Registrar Usuários\n");
				printf("\t2 - Consultar Usuários\n");
				printf("\t3 - Deletar Usuários\n\n");
				printf("\t4 - Sair do Sistema\n\n"); //Final do Menu
			
				scanf("%d", &opcao); //Armazenando a Escolha do Usuário
			
				system("cls"); // Responsável por limpar a tela
			
				switch(opcao) // inicio da seleção do menu
				{
			
					case 1:
					registro(); // Chamada de funções
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
					printf("Essa opção não está disponível!\n"); // fim da seleção
					system("pause");
					break;
				}// fim da seleção
			}
		}
	else
	printf("Senha incorreta!");
	}	

	

