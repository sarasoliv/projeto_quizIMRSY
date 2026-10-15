#include <stdio.h>
#include <stdlib.h> //para gerenciamento de memória (malloc)
#include <string.h>
#include <libpq-fe.h> //biblioteca oficial do PostgreSQL para a linguagem C
#include "struct.h"

// Função para conectar ao banco de dados e salvar o Resultado_quiz do quiz
void salvarResultado_quizNoBanco(resultado_quiz Resultado_quiz_quiz) {
    //TA DANDO ERRO NO PARAMENTRO ACIMA
    
    // String de conexão contendo os dados do servidor, banco, usuário e senha
    const char *conninfo = "dbname=loja_pedidos user=postgres password=sua_senha host=localhost port=5432";
    
    // PGconn é o tipo de dado que guarda a conexão com o banco
    PGconn *conn = PQconnectdb(conninfo);

    // Verifica se a conexão falhou
    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Erro de conexao com o banco: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        return;
    }

    // Prepara a instrução SQL de inserção (INSERT) formatada com os dados da struct
    char query[256];
    snprintf(query, sizeof(query), 
             "INSERT INTO ranking_quiz (nome_usuario, total_acertos, pontuacao_final) VALUES ('%s', %d, %d);",
             Resultado_quiz.nome_usuario, Resultado_quiz.total_acertos, Resultado_quiz.pontuacao_final);

    // Executa o comando SQL no banco de dados PostgreSQL
    PGresult *res = PQexec(conn, query);

    // Verifica se o comando foi executado com sucesso pelo servidor
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Falha ao inserir dados: %s\n", PQerrorMessage(conn));
    } else {
        printf("\n[Banco de Dados] Pontuacao salva com sucesso no PostgreSQL!\n");
    }

    // Limpa a memória do Resultado_quiz da query e fecha a conexão para evitar vazamentos
    PQclear(res);
    PQfinish(conn);
}
