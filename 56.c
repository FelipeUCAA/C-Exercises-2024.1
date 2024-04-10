56)
int calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaFim, int minutoFim) {
  int duracaoMinutos;

  // Converte horas para minutos
  duracaoMinutos = (horaFim - horaInicio) * 60;

  // Adiciona os minutos
  duracaoMinutos += minutoFim - minutoInicio;

  // Ajusta para o caso de o jogo terminar no dia seguinte
  if (horaFim < horaInicio) {
    duracaoMinutos += 24 * 60;
  }

  // Retorna a duração em minutos
  return duracaoMinutos;
}

int main() {
  int horaInicio, minutoInicio, horaFim, minutoFim;

  // Lê os horários de início e fim do jogo
  printf("Digite a hora de início do jogo (hh:mm): ");
  scanf("%d:%d", &horaInicio, &minutoInicio);
  printf("Digite a hora de término do jogo (hh:mm): ");
  scanf("%d:%d", &horaFim, &minutoFim);

  // Calcula a duração do jogo
  int duracaoMinutos = calcularDuracaoJogo(horaInicio, minutoInicio, horaFim, minutoFim);

  // Exibe a duração do jogo
  printf("Duração do jogo: %d minutos\n", duracaoMinutos);

  return 0;
}
