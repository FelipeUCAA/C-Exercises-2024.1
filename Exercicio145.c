#include <stdio.h>

int main() {
    int matriz[5][4];
    int i, j;
    int maior_nota_final_index = 0;
    float soma_notas_finais = 0;


    printf("Digite as informações dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Informe a informação %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
       
        matriz[i][3] = matriz[i][1] + matriz[i][2];

        soma_notas_finais += matriz[i][3];
    }

    for (i = 1; i < 5; i++) {
        if (matriz[i][3] > matriz[maior_nota_final_index][3]) {
            maior_nota_final_index = i;
        }
    }

    printf("Matrícula do aluno com a maior nota final: %d\n", matriz[maior_nota_final_index][0]);

    float media_notas_finais = soma_notas_finais / 5;

    printf("Média aritmética das notas finais: %.2f\n", media_notas_finais);

    return 0;
}
