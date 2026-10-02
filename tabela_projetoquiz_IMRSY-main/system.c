#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <string.h>

struct dificuldade{
	char nivel[1];
    int quantidade_perguntas;
};

int main(){
	setlocale(LC_ALL, "portuguese, br");
	//sistema algoritmo do quiz
	int opcao;
	//sistema de pontuacao
	int pontuacao;
	//opcoes após clicar em jogar
	//sistema dificuldade e quantidade de perguntas
	int quantidade;	 
	struct dificuldade niv; //f = facil, m = medio, d = dificil
	

	//sistema dificuldade do quiz
	printf("escolha uma das opções de 1 ou 2: ");
	scanf(" %i", &opcao);
	
	switch (opcao){
		case 1: //jogar
			printf("qual nivel de dificuldade você quer em seu quiz? ");
			scanf(" %c", &niv.nivel);
			if (niv.nivel == 'f' || niv.nivel == 'F'){
        		printf("\nVocê escolheu a dificuldade fácil!");
    		}
    		else if (niv.nivel == 'm' || niv.nivel == 'M'){
        		printf("\nVocê escolheu a dificuldade média!");
    		}
    		else if (niv.nivel == 'd' || niv.nivel == 'D'){
        		printf("\nVocê escolheu a dificuldade difícil!");
    		}
    		else{
       	 		printf("\nOpção inválida.");
    		}
			break;	
		case 2: //ranking
			printf("fé no sql"); //puxa o nome e potuacao sql
			break;
		default:
			printf("Opção inválida.");
	};
	
	//chamar api

	printf("Chamando a IA para gerar perguntas sobre Therac-25...\n\n");

    char comando[200] = "node api.js 2 facil Therac-25";

    FILE *api = popen(comando, "r");

    if (api == NULL) {
        printf("Erro ao conectar com a API de IA.\n");
        return 1;
    }

    char resposta_ia[2000];
    char linha[250];

    resposta_ia[0] = '\0';

    while (fgets(linha, sizeof(linha), api) != NULL) {
        sprintf(resposta_ia + strlen(resposta_ia), "%s", linha);
    }

    pclose(api);

    printf("=== RESPOSTA RECEBIDA DA IA ===\n");
    printf("%s\n", resposta_ia);



	//sistema de pontuacao
	int resposta;
	int ponto;
	char pergunta[100]; 
	
	printf("A resposta da pergunta x é: ");
	scanf(" %c", &resposta);

	if (resposta == 0){
		ponto = 0 + pontuacao;
	}
	
	return 0;
};