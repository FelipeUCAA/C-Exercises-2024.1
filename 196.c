196)
void extrair_palavras(char frase[]) {
  int i = 0, j = 0;
  bool em_palavra = false;

  // Percorre a frase
  while (frase[i] != '\0') {
    // Se o caractere for um espaço
    if (frase[i] == ' ') {
      em_palavra = false;
    }

    // Se o caractere não for um espaço e não estamos em uma palavra
    else if (!em_palavra) {
      em_palavra = true;
      j = i;
    }

    // Avança o índice
    i++;
  }

  // Se estamos em uma palavra, imprime a última palavra
  if (em_palavra) {
    frase[i] = '\0';
    printf("%s\n", &frase[j]);
  }
}

int main() {
  char frase[31];
  int i = 0;

  // Recebe a frase do usuário
  printf("Digite uma frase: ");
  while ((frase[i] = getch()) != '\r') {
    i++;
  }

  // Adiciona o caractere nulo no final da frase
  frase[i] = '\0';

  // Extrai as palavras da frase
  extrair_palavras(frase);

  return 0;
}
