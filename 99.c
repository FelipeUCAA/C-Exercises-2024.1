99)
#include <stdio.h>
#include <math.h>

int main() {
  float v[10], m, soma, desvio;
  int i;

  // Lê os números do vetor
  for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%f", &v[i]);
  }

  // Calcula a média do vetor
  soma = 0;
  for (i = 0; i < 10; i++) {
    soma += v[i];
  }
  m = soma / 10;

  // Calcula o desvio padrão
  soma = 0;
  for (i = 0; i < 10; i++) {
    soma += pow(v[i] - m, 2);
  }
  desvio = sqrt(soma / 10);

  // Exibe o desvio padrão
  printf("Desvio padrão: %.2f\n", desvio);

  return 0;
}

