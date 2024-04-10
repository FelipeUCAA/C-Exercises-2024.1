4)
int main() {
  int inicio, fim, soma, i;

  printf("Digite o início da sequência: ");
  scanf("%d", &inicio);
  printf("Digite o fim da sequência: ");
  scanf("%d", &fim);

  while (fim <= inicio) {
    printf("Erro: O fim da sequência precisa ser maior que o início.\n");
    printf("Digite o fim da sequência: ");
    scanf("%d", &fim);
  }

  soma = 0;
  for (i = inicio; i <= fim; i++) {
    soma += i;
  }

  printf("A soma dos números de %d a %d é: %d\n", inicio, fim, soma);

  return 0;
}