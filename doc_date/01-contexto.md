# Passos 1 a 3 — Contexto, minimundo e requisitos

Marco M1. Copiem para `entregas/01-contexto.md`.

## 1. Introdução e contexto

## Contexto 
Em um parágrafo: o que é o Tech Trivia e qual o objetivo deste banco.

O TheraQ é um projeto que tem como objetivo ensinar de forma dinamica e facil á pessoas da area tech ou não, a partir do acidente do Therac-25 ocorrido entre os anos de 1985 e 1987,  a como é perigoso confiar excessivamente em software sem mecanismos físicos de segurança, principalmente quando é uma maquina que opera em prol de ajudar na saude das pessoas. O quiz tem as funcoes de o usuario personalizar a quantidade e dificuldade das perguntas que ele irá responder, tendo em cada pergunta opcoes de resposta de A a D tendo apenas uma letra como resposta correta, e todas as perguntas serao criadas aleatoriamente a partir  de uma IA, e após ser criada ela irá automaticamente para o Banco de Dados, com a pergunta em si e a resposta dela e o nivel de dificuldade da mesma, terá um Banco para guardar a pontuacao total de cada jogador por partida separado por dificudade e mostrar um ranking a partir do jogador com maior pontuacao á menor pontuacao

## Escopo 
Listem só o que o banco faz e o que fica de fora.

| O banco faz | O banco não faz |
| --- | --- |
| Armazena dados do usuário ao se cadastrarem | Exclui os dados de cadastro automaticamente |
| Permite alteração das informações do perfil | Gera uma senha única no primeiro login
| Guarda as respostas do quiz até mostrar o resultado | Quarda as respostas do quiz por tempo indeterminado |
| Guarda a pontuação do usuário | Gera as perguntas automaticamente
| Calcula a pontuação total ao encerrar as perguntas | Armazena os dados de todas as questões de uma vez 

Usuários. Quem usa o sistema e o que cada um faz com os dados. Não criem tabela de usuário se nenhum requisito pedir cadastro, senha ou sessão.

| Usuário | O que faz |
| --- | --- |
| Jogador | Responde as perguntas do quiz |
| Desenvolvedor | Quem cadastra as perguntas do quiz |


## 2. Minimundo

Um ou dois parágrafos, na voz de quem encomenda o sistema. É deste texto que saem as entidades e as regras. Cubram pergunta, categoria, fonte, publicador, idioma e alternativas, inclusive a possibilidade de mais de duas alternativas no futuro.

> 

## 3. Requisitos e regras de negócio

Cada RD01–RD11 e cada RA01–RA07 entra numa linha. Não deixem código de fora.

| Código | Texto do requisito | Tipo |
| --- | --- | --- |
| | | funcional / não funcional / regra de negócio |

Não funcional inclui, no mínimo, o SGBD e a integridade (o que não pode duplicar nem ficar nulo).
