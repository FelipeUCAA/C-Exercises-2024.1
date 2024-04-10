119)
int main() {
  int n, i, j, aux;
  int array[20];

  // Entrada de dados
  printf("Digite a dimensão do array (máximo 20): ");
  scanf("%d", &n);
  printf("Digite os elementos do array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  // Ordenação por bolha
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }

  // Saída de dados
  printf("Array ordenado: ");
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}