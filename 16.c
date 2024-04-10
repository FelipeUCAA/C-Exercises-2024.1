16)
void calcular_media_situacao(float nota1, float nota2, float *media, char *situacao) {
  *media = (nota1 + nota2) / 2;

  if (*media >= 70) {
    strcpy(situacao, "Aprovado");
  } else if (*media >= 40) {
    strcpy(situacao, "Exame Final");
  } else {
    strcpy(situacao, "Reprovado");
  }
}

**Função Principal:**

int main() {
  float nota1, nota2, media;
  char situacao[20];

  // Entrada de dados
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  // Calcula a média e a situação do aluno
  calcular_media_situacao(nota1, nota2, &media, &situacao);

  // Exibe a média e a situação do aluno
  printf("Média: %.2f\n", media);
  printf("Situação: %s\n", situacao);

  // Se o aluno está em exame final, pede a nota e calcula a situação final
  if (strcmp(situacao, "Exame Final") == 0) {
    float notaExame;
    float mediaFinal;

    printf("Digite a nota do exame final: ");
    scanf("%f", &notaExame);

    mediaFinal = (media + notaExame) / 2;

    if (mediaFinal >= 50) {
      strcpy(situacao, "Aprovado");
    } else {
      strcpy(situacao, "Reprovado");
    }

    printf("Média final: %.2f\n", mediaFinal);
    printf("Situação final: %s\n", situacao);
  }

  return 0;
}
