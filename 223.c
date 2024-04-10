223)
#include <stdio.h>

struct MaMeMe {
  float menor;
  float meio;
  float maior;
};

int main() {
  float n1, n2, n3;
  struct MaMeMe resultado;

  // Entrada de dados
  printf("Digite três números: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  // Classifica os números
  resultado = classifica(n1, n2, n3);

  // Saída de dados
  printf("Menor: %.2f\n", resultado.menor);
  printf("Meio: %.2f\n", resultado.meio);
  printf("Maior: %.2f\n", resultado.maior);

  return 0;
}
