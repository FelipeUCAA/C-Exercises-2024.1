206)
int replace(char *str) {
  int i, count = 0;

  // Percorre a string
  for (i = 0; str[i] != '\0'; i++) {
    // Se o caractere for um espaço
    if (str[i] == ' ') {
      // Substitui o espaço por um traço
      str[i] = '-';
      count++;
    }
  }

  // Retorna o número de substituições
  return count;
}

int main() {
  char str[] = "Esta é uma frase com espaços.";
  int nSubstituicoes;

  // Chama a função replace
  nSubstituicoes = replace(str);

  // Exibe a string com as substituições
  printf("String com espaços substituídos por traços: %s\n", str);

  // Exibe o número de substituições
  printf("Número de substituições: %d\n", nSubstituicoes);

  return 0;
}

