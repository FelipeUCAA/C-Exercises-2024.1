98)
int main() {
  int numeros[100], i, j;

  // Preenchimento do vetor
  i = 0;
  j = 1;
  while (i < 100) {
    if ((j % 7 != 0) && (j % 10 != 7)) {
      numeros[i] = j;
      i++;
    }
    j++;
  }

  // Saída de dados
  for (i = 0; i < 100; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  return 0;
}