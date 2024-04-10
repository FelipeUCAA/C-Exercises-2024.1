22)
int main() {
  int placarApostadoTime1, placarApostadoTime2, placarRealTime1, placarRealTime2, pontos;

  // Entrada de dados
  printf("Digite o placar apostado (Time 1 x Time 2): ");
  scanf("%d x %d", &placarApostadoTime1, &placarApostadoTime2);

  // Cálculo dos pontos
  pontos = 0;
  if (placarApostadoTime1 > placarApostadoTime2) {
    if (placarRealTime1 > placarRealTime2) {
      pontos += 10;
    }
  } else if (placarApostadoTime1 < placarApostadoTime2) {
    if (placarRealTime1 < placarRealTime2) {
      pontos += 10;
    }
  } else {
    if (placarRealTime1 == placarRealTime2) {
      pontos += 10;
    }
  }
  if (placarApostadoTime1 == placarRealTime1) {
    pontos += 5;
  }
  if (placarApostadoTime2 == placarRealTime2) {
    pontos += 5;
  }

  // Saída de dados
  printf("O apostador fez %d pontos.\n", pontos);

  return 0;
}
