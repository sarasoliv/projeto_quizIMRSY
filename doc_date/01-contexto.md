# Passos 1 a 3 — Contexto, minimundo e requisitos

Marco M1. Copiem para `entregas/01-contexto.md`.

## 1. Introdução e contexto

## Contexto 
Em um parágrafo: o que é o Tech Trivia e qual o objetivo deste banco.

O TheraQ é um projeto que tem como objetivo ensinar, de forma dinâmica e fácil, as pessoas da área de tecnologia ou não, a partir do acidente do Therac-25, ocorrido entre os anos de 1985 e 1987, como é perigoso confiar excessivamente em softwares sem mecanismos físicos de segurança, principalmente quando se trata de uma máquina que opera em prol da saúde das pessoas.

O quiz tem como funções permitir que o usuário personalize a quantidade e a dificuldade das perguntas que irá responder. Cada pergunta terá quatro opções de resposta, de A a D, sendo apenas uma delas a correta. Parte das perguntas serão criadas aleatoriamente por uma IA e, após serem geradas, serão automaticamente armazenadas no Banco de Dados, juntamente com a pergunta, sua respectiva resposta e seu nível de dificuldade.

Também haverá um Banco de Dados destinado ao armazenamento da pontuação total de cada jogador por partida, com as pontuações separadas por nível de dificuldade. A partir desses dados, será possível gerar um ranking, organizado do jogador com maior pontuação para o jogador com menor pontuação.


## Escopo 
Listem só o que o banco faz e o que fica de fora.

| O banco faz | O banco não faz |
| --- | --- |
| Armazena dados do usuário ao se cadastrarem | Exclui os dados de cadastro |
| Bloqueia alteração das informações do perfil | Armazena credênciais de login |
| Guarda as perguntas e respostas automaticamente | Guarda as respostas do quiz por tempo ilimitado |
| Guarda a pontuação do usuário | salva usernames iguais. |
| Ranqueia de forma decrescente a pontuação total do usuário | Armazena os dados de todas as questões de uma vez.|

Usuários. Quem usa o sistema e o que cada um faz com os dados. Não criem tabela de usuário se nenhum requisito pedir cadastro, senha ou sessão.

| Usuário | O que faz |
| --- | --- |
| Jogador | Responde as perguntas do quiz e personaliza a dificuldade e quantas perguntas seu quiz tem |
| Desenvolvedor | Quem gerência o servidor do quiz e faz atualizações conforme necessidade a partir de sugestões de usuários. |
| Tester | Faz o teste de mesa virtual e reporta bugs. |
| Analista de informações | Confere a veracidade das perguntas e respostas. |


## 2. Minimundo

Um ou dois parágrafos, na voz de quem encomenda o sistema. É deste texto que saem as entidades e as regras. Cubram pergunta, categoria, fonte, publicador, idioma e alternativas, inclusive a possibilidade de mais de duas alternativas no futuro.

> 

## 3. Requisitos e regras de negócio

Cada RD01–RD11 e cada RA01–RA07 entra numa linha. Não deixem código de fora.

| Código | Texto do requisito | Tipo |
| --- | --- | --- |
| | | funcional / não funcional / regra de negócio |

Não funcional inclui, no mínimo, o SGBD e a integridade (o que não pode duplicar nem ficar nulo).
