# Passo 4 — Modelo conceitual

Marco M1. A entrega deste passo é o modelo conceitual: o desenho em `entregas/02-conceitual.pdf` (ou `.png`) e as tabelas abaixo.

É um DER na notação de Chen, no brModelo ou no Visual Paradigm Online. Entidades, atributos, relacionamentos e cardinalidades. Ainda não aparecem tabela, chave estrangeira nem tipo de coluna: isso é o modelo lógico, no passo 5.

[Baixar DER em PDF] [02_conceitual_isabella_rodrygo_sara_yasmin.pdf](https://github.com/user-attachments/files/33519047/02_conceitual_isabella_rodrygo_sara_yasmin.pdf)


## Entidades

| Entidade | Atributos | Identificador |
| --- | --- | --- |
| Ranking  | id_ranking, pontuacao_jogador  | id_ranking  |
| Questões | Enunciado, id_questoes, Opcao_a, Opcao_b, Opcao_c, Opcao_d, Opcao_e, Resposta_correta | id_questoes |
| Cadastro_usuario | id_usuario, nome | id_usuario |
| Questoes_respondidas | id_q_respostas, resposta_usuario, acerto, data_resposta | id_q_respostas |

## Relacionamentos

Uma frase por linha, ligada a um requisito. Cardinalidade dos dois lados, mínimo e máximo.

| Relacionamento | Cardinalidade | Justificativa | Requisito |
| --- | --- | --- | --- |
| Possui | (1,N) , (1,N) | Um ranking pode conter no mínimo 1 ou varias questoes_respondidas e tanto cadastro_usuario quanto questoes_respondidas podem ter 1 ou varios rankies | Regras de negócios |
| Solucionar | (1,N) , (0,N) | questoes_respondidas pode ter nenhum ou varios questoes_respondidas cadastro_usuario e cadastro_usuario pode ter no minimo uma ou várias questoes_respondidas | Regras de Negócios |
| Conter | (1,N) , (1,N) | questoes_respondidas podem ter no mínimo 1 ou várias Questões e Questões podem ter no mínimo 1 ou várias questoes_respondidas | Requisitos funcionais |


O diagrama e esta tabela descrevem o mesmo modelo. Toda entidade do desenho está na tabela.
