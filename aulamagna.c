#include <stdio.h>

int main() {
    int num_alunos, num_disciplinas, i, j;
    float nota, media, soma;

    // Solicitar número de alunos
    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);

    // Solicitar número de disciplinas
    printf("Digite o número de disciplinas: ");
    scanf("%d", &num_disciplinas);

    for (i = 0; i < num_alunos; i++) {
        soma = 0;
        printf("Aluno %d\n", i + 1);
        for (j = 0; j < num_disciplinas; j++) {
            // Solicitar notas
            printf("Digite a nota da disciplina %d: ", j + 1);
            scanf("%f", &nota);
            soma += nota;
        }

        // Calcular média
        media = soma / num_disciplinas;

        // Verificar aprovação
        printf("Média: %.2f - ", media);
        if (media >= 5) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
