175)
int maiorValor(int *array, int n) {
  int i, maior = array[0];

  for (i = 1; i < n; i++) {
    if (array[i] > maior) {
      maior = array[i];
    }
  }

  return maior;
}

#include <stdio.h>

int main() {
  int n, k, i;
  int array[100];

  // Lê o valor de N
  printf("Digite o número de elementos: ");
  scanf("%d", &n);

  // Lê o valor de K
  printf("Digite o número de elementos por linha: ");
  scanf("%d", &k);

  // Lê os valores do array
  for (i = 0; i < n; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &array[i]);
  }

  // Imprime o array
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
    if ((i + 1) % k == 0) {
      printf("\n");
    }
  }

  // Imprime o maior valor
  printf("Maior valor: %d\n", maiorValor(array, n));

  return 0;
}