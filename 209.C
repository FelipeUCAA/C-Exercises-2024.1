209)
int main() {
  char str[21], caracter, aux;
  int i, j;

  // Entrada de dados
  printf("Digite uma string (máx. 20 caracteres): ");
  gets(str);
  printf("Digite um caracter: ");
  scanf(" %c", &caracter);

  // Remoção de caracteres
  i = 0;
  while (str[i] != '\0') {
    if (str[i] != caracter) {
      aux = str[i];
      str[i] = str[j];
      str[j] = aux;
      j++;
    }
    i++;
  }
  str[j] = '\0';

  // Saída de dados
  printf("String original: %s\n", str);
  printf("String com o caracter '%c' removido: %s\n", caracter, str);

  return 0;
}