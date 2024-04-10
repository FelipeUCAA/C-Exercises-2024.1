96)
int main() {
  float x[5], y[5], produto_escalar;

  // Entrada de dados
  printf("Digite os elementos do primeiro conjunto: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &x[i]);
  }
  printf("Digite os elementos do segundo conjunto: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &y[i]);
  }

  // Cálculo do produto escalar
  produto_escalar = 0;
  for (int i = 0; i < 5; i++) {
    produto_escalar += x[i] * y[i];
  }

  // Saída de dados
  printf("Primeiro conjunto: ");
  for (int i = 0; i < 5; i++) {
    printf("%.2f ", x[i]);
  }
  printf("\n");
  printf("Segundo conjunto: ");
  for (int i = 0; i < 5; i++) {
    printf("%.2f ", y[i]);
  }
  printf("\n");
  printf("Produto escalar: %.2f\n", produto_escalar);

  return 0;
}