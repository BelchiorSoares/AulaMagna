# Programa de Cálculo de Média de Notas para IMETRO

Vamos criar um programa em C para o IMETRO que calcula a média das notas dos alunos e determina se eles passaram ou não. Vou fornecer a descrição narrativa, o fluxograma e um teste de mesa, além do código em C.

## Descrição Narrativa
### Entrada de Dados:
- Solicitar ao usuário que insira o número de alunos.
- Para cada aluno, solicitar ao usuário que insira as notas das disciplinas.

### Cálculo da Média:
- Calcular a média das notas para cada aluno.
- Verificar se a média é suficiente para aprovação.

### Saída de Dados:
- Exibir a média das notas de cada aluno e se ele foi aprovado ou não.

## Fluxograma
```mermaid
graph TD
    A[Início] --> B[Solicitar número de alunos]
    B --> C[Para cada aluno]
    C --> D[Solicitar notas das disciplinas]
    D --> E[Calcular média das notas]
    E --> F{Média >= 5?}
    F -->|Sim| G[Exibir "Aprovado"]
    F -->|Não| H[Exibir "Reprovado"]
    G --> I[Próximo aluno]
    H --> I
    I --> J{Há mais alunos?}
    J -->|Sim| C
    J -->|Não| K[Fim]
