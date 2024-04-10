208)
int main() {
  char str[21], aux;
  int i, j;

  // Entrada de dados
  printf("Digite uma string (máx. 20 caracteres): ");
  gets(str);

  // Inversão da string
  i = 0;
  j = strlen(str) - 1;
  while (i < j) {
    aux = str[i];
    str[i] = str[j];
    str[j] = aux;
    i++;
    j--;
  }

  // Saída de dados
  printf("String original: %s\n", str);
  printf("String invertida: %s\n", str);

  return 0;
}
