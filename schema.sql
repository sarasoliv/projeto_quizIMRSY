CREATE DATABASE projeto_quiz_IMRSY;

CREATE TABLE tabela_ranking(
	id_jogador SERIAL PRIMARY KEY,
	nome_jogador VARCHAR(50) NOT NULL,
	pontuacao_jogador SMALLINT NOT NULL,
	data_jogado TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

SELECT * FROM tabela_ranking;



--------------------------------------------------------------------------------------------------------------------------------
#current_timestamp é usado pra puxar automaticamente a data e hora do sistema(pc) em q o quiz estiver rodando

#timestamp usado pra armazenar um tempo especifico do tempo combinando data e hora juntos

#o default é o valor atribuido ao timestamp

#Resumindo: TIMESTAMP DEFAULT CURRENT_TIMESTAMP = "guarde automaticamente a data e hora em que esse registro foi inserido."
--------------------------------------------------------------------------------------------------------------------------------
