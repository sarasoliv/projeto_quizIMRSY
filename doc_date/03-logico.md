# Passos 5 e 6 — Modelo lógico, normalização e dicionário

Marco M2. A entrega do passo 5 é o modelo lógico: o desenho em `entregas/03-logico.pdf` (ou `.png`) e este texto em `entregas/03-logico.md`.

O desenho parte do modelo conceitual e mostra tabelas, colunas, chave primária e chaves estrangeiras. Não é outro DER. Pode ser feito no brModelo (modelo lógico) ou no Visual Paradigm Online. Se a normalização achar violação, corrijam o desenho e o texto.

## 5. Modelo lógico

| Relacionamento no DER | Cardinalidade | Vira | Onde fica a FK ou a tabela associativa |
| --- | --- | --- | --- |
| | 1:N / N:N / 1:1 | FK no lado N / tabela associativa | |
| Usuário – Quiz           | 1:N           | FK             | FK em Quiz (id_usuario)             |
| Quiz – Pergunta          | 1:N           | FK             | FK em Pergunta (id_quiz)            |
| Pergunta – Resposta      | 1:N           | FK             | FK em Resposta (id_pergunta)        |
| Usuário – Quiz (participação) | N:N     | Associativa    | Tabela Usuário_Quiz com FKs (id_usuario, id_quiz) |

N:N vira tabela associativa. 1:N vira chave estrangeira no lado N.

### Normalização

Dependências no formato `determinante → dependente`, com o requisito que sustenta.

| ID | Dependência | Requisito |
| --- | --- | --- |
| DF1  | id_usuario → nome, email     | Cada usuário é identificado unicamente por seu ID.                        |
| DF2  | id_quiz → titulo, descricao  | Cada quiz tem título e descrição únicos para seu identificador.           |
| DF3  | id_pergunta → enunciado      | O enunciado depende apenas da pergunta, não do quiz.                      |
| DF4  | id_resposta → texto, correta | Cada resposta é identificada pelo seu ID e contém o texto e se é correta. |
| DF5  | (id_usuario, id_quiz) → data_participacao | A participação é identificada pela combinação usuário + quiz. |

 Todas as tabelas estão em **3FN**:  
- Não há atributos multivalorados.  
- Não há dependências transitivas.  
- Cada atributo depende apenas da chave primária da tabela.  
---

| Forma | Por que o esquema atende | Tabela em que isso aparece |
| --- | --- | --- |
| 1FN | Valores atômicos; grupo multivalorado separado | |
| 2FN | Sem dependência parcial de chave composta. Se não houver chave composta, digam por quê | |
| 3FN | Sem dependência transitiva. O que não é chave e determina outro atributo está em tabela própria | |

Se alguma forma falhar: o que mudou neste dicionário.

## 6. Dicionário de dados

Repitam o bloco para cada tabela. A descrição diz o que a coluna guarda, em uma linha.

### Tabela: _______________

| Coluna | Tipo e tamanho | Nulo | Restrição | Descrição |
| --- | --- | --- | --- | --- |
| | | NULL / NOT NULL | PK / FK → tabela.coluna / UNIQUE / CHECK / DEFAULT | |
