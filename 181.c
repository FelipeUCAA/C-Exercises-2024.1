181)
int copiarAteEspaco(char *str1, char *str2, int n) {
  int i, j;

  // Percorre a string str1 até encontrar um espaço ou o fim da string
  for (i = 0, j = 0; i < n && str1[i] != ' '; i++) {
    // Copia o caractere para str2
    str2[j++] = str1[i];
  }

  // Adiciona o caractere nulo ao final de str2
  str2[j] = '\0';

  // Retorna o número de caracteres copiados
  return j;
}

char str1[] = "Esta é uma frase com espaços.";
char str2[20];
int n = 20;

int numCopiados = copiarAteEspaco(str1, str2, n);

printf("String copiada: %s\n", str2);
printf("Número de caracteres copiados: %d\n", numCopiados);
