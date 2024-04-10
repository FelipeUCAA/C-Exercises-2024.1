188)
int divs(int num, int *max, int *min) {
  int i, divCount = 0;
  *max = 1;
  *min = num;

  // Percorre os números de 2 a num - 1
  for (i = 2; i <= num - 1; i++) {
    // Se num é divisível por i
    if (num % i == 0) {
      divCount++;

      // Atualiza o menor divisor
      if (*min > i) {
        *min = i;
      }

      // Atualiza o maior divisor
      if (*max < i) {
        *max = i;
      }
    }
  }

  // Se o número de divisores é maior que 1, então o número não é primo
  return divCount > 1;
}

int main() {
  int num, max, min;

  // Lê o número
  printf("Digite um número: ");
  scanf("%d", &num);

  // Chama a função divs
  int ehPrimo = divs(num, &max, &min);

  // Exibe os resultados
  if (ehPrimo) {
    printf("%d é primo.\n", num);
  } else {
    printf("%d não é primo.\n", num);
    printf("Menor divisor: %d\n", min);
    printf("Maior divisor: %d\n", max);
  }

  return 0;
}
