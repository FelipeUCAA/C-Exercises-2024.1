174)
int main() {
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {6, 7, 8, 9, 10};
  int arr3[5];
  int tamanho = 5;

  // Soma os arrays
  int sucesso = soma_arrays(arr1, arr2, arr3, tamanho);

  // Verifica se a soma foi realizada com sucesso
  if (sucesso) {
    // Exibe a soma dos arrays
    for (int i = 0; i < tamanho; i++) {
      printf("%d ", arr3[i]);
    }
    printf("\n");
  } else {
    printf("Erro: Os arrays possuem tamanhos diferentes.\n");
  }

  return 0;
}
