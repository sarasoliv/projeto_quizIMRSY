CREATE DATABASE projeto_quiz_IMRSY;

CREATE TABLE tabela_ranking(
	id_jogador SERIAL PRIMARY KEY,
	nome_jogador VARCHAR(50) NOT NULL,
	pontuacao_jogador SMALLINT NOT NULL,
	data_jogado TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

SELECT * FROM tabela_ranking;

create table Questoes(
	Q_numero_questao	serial primary key unique,
	Enunciado			text,
	Opcao_a				text,
	Opcao_b				text,
	Opcao_c				text,
	Opcao_d				text,
	Resposta_correta	varchar(1) not null
);

create table Pontuacao(
	id				 serial primary key,
	usuario_id		 int not null unique,
	pontuacao		 int,
	total_questoes	 int,
	P_numero_questao integer,
constraint pontuacaofk foreign KEY (P_numero_questao) references Questoes(Q_numero_questao)
	
);

create table Questoes_respondidas(
	id					serial PRIMARY KEY 	,
	usuario_id			int not null,
	pergunta_id			int,
	resposta_usuario	varchar(1) not null,
	respondida			boolean,
	Q_numero_questaofk  integer,
	usuario_idfk		integer,
	
constraint questao_respondida_fk FOREIGN KEY(Q_numero_questaofk)
	references Questoes(Q_numero_questao),
constraint respondida_usuario_fk FOREIGN KEY(usuario_id)
	references Pontuacao(usuario_id)
);

--------------------------------------------------------------------------------------------------------------------------------
#current_timestamp é usado pra puxar automaticamente a data e hora do sistema(pc) em q o quiz estiver rodando

#timestamp usado pra armazenar um tempo especifico do tempo combinando data e hora juntos

#o default é o valor atribuido ao timestamp

#Resumindo: TIMESTAMP DEFAULT CURRENT_TIMESTAMP = "guarde automaticamente a data e hora em que esse registro foi inserido."
--------------------------------------------------------------------------------------------------------------------------------
