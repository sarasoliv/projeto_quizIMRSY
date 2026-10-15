#ifndef QUIZ_H
#define QUIZ_H

//struct pra salvar na memoria do C a pergunta q esta no SQL
typedef struct{
    int id;
    char enunciado[300];
    char opcao_a[150];
    char opcao_b[150];
    char opcao_c[150];
    char opcao_d[150];
    char resposta_correta;
}Pergunta;

// Estrutura para armazenar as configurações escolhidas pelo usuário
typedef struct{
	char dificuldade[1];
    int quantidade_perguntas;
    int pontuacao_atual; // Pontuação acumulada durante o quiz
}config_quiz;

// Estrutura para armazenar os dados do usuário e o resultado final no banco de dados
typedef struct {
    char nome_usuario[50];    
    int total_acertos;        // Quantidade total de respostas corretas
    int pontuacao_final;      // Pontuação final calculada
} resultado_quiz;


//fechamento do #ifndef
#endif

