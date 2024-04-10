100)
int ehPrimo(int num) {
  int i;

  // Um número é primo se ele é divisível apenas por 1 e por ele mesmo.
  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int numeros[10];
  int i;

  // Lê os números do usuário
  for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // Exibe os números primos e suas posições
  for (i = 0; i < 10; i++) {
    if (ehPrimo(numeros[i])) {
      printf("Número primo: %d (posição %d)\n", numeros[i], i + 1);
    }
  }

  return 0;
}
