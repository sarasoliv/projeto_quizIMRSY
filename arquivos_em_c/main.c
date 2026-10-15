#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "connection.c"


int main(){
	setlocale(LC_ALL, "portuguese, br");
	 
	config_quiz Config_quiz; //f = facil, m = medio, d = dificil/quantidade de perguntas
	resultado_quiz Resultado_quiz;
	int opcao;


	printf("escolha uma das opções de 1 ou 2: ");
	scanf(" %i", &opcao);
	


	//sistema nivel do quiz
	switch (opcao){
		case 1: //jogar
			// Coletando o nome do usuário
    		printf("Digite seu nome: ");
    		scanf(" %49s[^\n]", Resultado_quiz.nome_usuario);
			// Configurando a quantidade de perguntas
    		printf("Quantas perguntas você deseja responder (minimo 5 e maximo 10)? ");
    		scanf(" %i", &Config_quiz.quantidade_perguntas);
			// COnfigurando o nivel de dificuldade
			printf("qual nivel de dificuldade você quer em seu quiz? ");
			scanf(" %c", &Config_quiz.dificuldade);
			if (Config_quiz.dificuldade == 'f' || Config_quiz.dificuldade == 'F'){
        		printf("\nVocê escolheu a dificuldade fácil!");
    		}
    		else if (Config_quiz.dificuldade == 'm' || Config_quiz.dificuldade == 'M'){
        		printf("\nVocê escolheu a dificuldade média!");
    		}
    		else if (Config_quiz.dificuldade == 'd' || Config_quiz.dificuldade == 'D'){
        		printf("\nVocê escolheu a dificuldade difícil!");
    		}
    		else{
       	 		printf("\nOpção inválida.");
    		}
			//sistema de pontuacao
			// Inicializando pontuação e acertos como zero
			Config_quiz.pontuacao_atual = 0;
			Resultado_quiz.total_acertos = 0;
			break;	
		case 2: //ranking
			printf("fé no sql"); //puxa o nome e potuacao sql
			break;
		default:
			printf("Opção inválida.");
	};
	
	//sistema de pontuacao
	
	return 0;
};