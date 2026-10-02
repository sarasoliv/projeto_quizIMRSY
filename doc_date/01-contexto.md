# Passos 1 a 3 — Contexto, minimundo e requisitos

Marco M1. Copiem para `entregas/01-contexto.md`.

## 1. Introdução e contexto

## Contexto 

O TheraQ é um projeto que tem como objetivo ensinar, de forma dinâmica e fácil, as pessoas da área de tecnologia ou não, a partir do acidente do Therac-25, ocorrido entre os anos de 1985 e 1987, como é perigoso confiar excessivamente em softwares sem mecanismos físicos de segurança, principalmente quando se trata de uma máquina que opera em prol da saúde das pessoas.

O quiz tem como funções permitir que o usuário personalize a quantidade e a dificuldade das perguntas que irá responder. Cada pergunta terá quatro opções de resposta, de A a D, sendo apenas uma delas a correta. Parte das perguntas serão criadas aleatoriamente por uma IA e, após serem geradas, serão automaticamente armazenadas no Banco de Dados, juntamente com a pergunta, sua respectiva resposta e seu nível de dificuldade.

Também haverá um Banco de Dados destinado ao armazenamento da pontuação total de cada jogador por partida, com as pontuações separadas por nível de dificuldade. A partir desses dados, será possível gerar um ranking, organizado do jogador com maior pontuação para o jogador com menor pontuação.


## Escopo 

| O banco faz | O banco não faz |
| --- | --- |
| Armazena dados do usuário ao se cadastrarem | Exclui os dados de cadastro |
| Bloqueia alteração das informações do perfil | Armazena credênciais de login |
| Guarda as perguntas e respostas automaticamente | Guarda as respostas do quiz por tempo ilimitado |
| Guarda a pontuação do usuário | salva usernames iguais. |
| Ranqueia de forma decrescente a pontuação total do usuário | Armazena os dados de todas as questões de uma vez.|



| Usuário | O que faz |
| --- | --- |
| Jogador | Responde as perguntas do quiz e personaliza a dificuldade e quantas perguntas seu quiz tem |
| Desenvolvedor | Quem gerência o servidor do quiz e faz atualizações conforme necessidade a partir de sugestões de usuários. |
| Tester | Faz o teste de mesa virtual e reporta bugs. |
| Analista de informações | Confere a veracidade das perguntas e respostas. |


## 2. Minimundo

Somos estudantes da área de tecnologia e gostaríamos que você criasse um quiz sobre o acidente do Therac-25, ocorrido entre os anos de 1985 e 1987. No quiz, quero que seja possível escolher a dificuldade e a quantidade de perguntas que o usuário deseja responder. As perguntas serão criadas automaticamente por uma IA, com base em fontes previamente definidas e confiáveis. Todas as perguntas deverão ter alternativas de A a D, contendo apenas uma resposta correta. Após o usuário selecionar e enviar sua resposta, deverá ser mostrada a resposta correta juntamente com uma explicação do motivo pelo qual ela está correta. Também quero um ranking para mostrar as pessoas que mais acertaram as perguntas, sem permitir o cadastro de usuários com o mesmo nome de usuário (username).

Gostaria que o quiz tivesse recursos de acessibilidade e sons para quando o usuário acertar ou errar, semelhantes aos utilizados em programas de perguntas e respostas, como o antigo jogo de perguntas do Silvio Santos. A interface deve ser intuitiva, permitindo que o usuário tenha clareza sobre o que está fazendo em cada etapa do quiz. Além disso, quero que haja uma limitação das fontes utilizadas pela IA responsável pela criação das perguntas, permitindo apenas fontes confiáveis e previamente definidas como referência, evitando fontes suspeitas ou informações sem comprovação para reduzir a possibilidade de erros na criação das perguntas. Para o desenvolvimento do projeto, deverão ser utilizadas apenas as linguagens **JavaScript (JS), C, HTML e CSS**, sem a utilização de frameworks. O banco de dados deverá utilizar **PostgreSQL como SGBD**, sendo responsável pelo armazenamento das informações necessárias para o funcionamento do sistema, como usuários, perguntas, respostas, pontuações e ranking.

> 

## 3. Requisitos e regras de negócio

Cada RD01–RD11 e cada RA01–RA07 entra numa linha. Não deixem código de fora.

| Código | Texto do requisito | Tipo |
| --- | --- | --- |
| RA01 | O sistema permite o usuário se cadastrar. | Requisito funcional |
| RA02 | É feita uma somatória da pontuação ao final de cada desafio. | Requisito funcional |
| RA03 | Ao final do quiz é exibido as questões com erros e acertos. | Requisitos Funcionais |
| RA01 | A IA do quiz gera as perguntas automaticamente a cada novo questionário aberto. | Requisito não funcional |
| RA02 | O sistema gera 10 perguntas a cada questionário iniciado. | Requisito não funcional |
| RA03 | Ao finalizar o questionário o sistema entrega a pontuação. | Requisito não funcional |
| RA04 | É possível selecionar o nível de dificuldade, sendo fácil, médio e difícil. | Requisito não funcional |
| RD01 | O sistema não armazena as respostas das questões após encerrar o quiz  | Regra de Negócios |
| RD02 | A ia gera as perguntas aleatóriamente baseada em um contexto histórico| Regra de Negócios |
| RD03 | O sistema possui sistema de acessibilidade | Regra de Negócios |
| RD04 | O banco de dados guarda a pontuação e o nome do usuário que a fez | Regra de Negócios |
| RD05 | O cadastro será feito através do nome de usuário | Regra de Negócios |
| RD06 |  | Regra de Negócios |
| RD07 |  | Regra de Negócios |
| RD08 |  | Regra de Negócios |
| RD09 |  | Regra de Negócios |
| RD10 |  | Regra de Negócios |
| RD11 |  | Regra de Negócios |


Não funcional inclui, no mínimo, o SGBD e a integridade (o que não pode duplicar nem ficar nulo).
