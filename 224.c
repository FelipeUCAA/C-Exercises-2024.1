224)
void classifica(MaMeMe *valores) {
  int i, j;
  MaMeMe aux;

  // Ordena os valores por "m" usando o algoritmo de bolha
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2 - i; j++) {
      if (valores[j].m > valores[j + 1].m) {
        aux = valores[j];
        valores[j] = valores[j + 1];
        valores[j + 1] = aux;
      }
    }
  }
}

MaMeMe valores[3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

// Ordena os valores
classifica(valores);

// Exibe os valores ordenados
for (int i = 0; i < 3; i++) {
  printf("%d %d %d\n", valores[i].a, valores[i].m, valores[i].e);
}
