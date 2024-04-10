156)
void trocarValores(int *a, int *b) {
  int temp;

  // Troca os valores das variáveis
  temp = *a;
  *a = *b;
  *b = temp;
}

#include <stdio.h>

int main() {
  int a, b;

  // Lê os valores das variáveis
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);

  // Chama a função para trocar os valores
  trocarValores(&a, &b);

  // Mostra os valores trocados
  printf("Novo valor de A: %d\n", a);
  printf("Novo valor de B: %d\n", b);

  return 0;
}
