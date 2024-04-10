121)
#include <stdio.h>

int main() {
  int n, i;
  float x[100], y[100], area;

  // Lê o número de vértices
  printf("Digite o número de vértices: ");
  scanf("%d", &n);

  // Lê as coordenadas dos vértices
  for (i = 0; i < n; i++) {
    printf("Digite as coordenadas do vértice %d (x, y): ", i + 1);
    scanf("%f %f", &x[i], &y[i]);
  }

  // Calcula a área do polígono
  area = 0;
  for (i = 0; i < n; i++) {
    area += x[i] * y[(i + 1) % n] - x[i] * y[(i - 1 + n) % n];
  }

  area /= 2;

  // Exibe a área do polígono
  printf("Área do polígono: %.2f\n", area);

  return 0;
}
