#include <stdio.h>

int main() {
    
    int tempo_segundos, horas, minutos, segundos;
   
    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo_segundos);

    horas = tempo_segundos / 3600;
    minutos = (tempo_segundos % 3600) / 60;
    segundos = tempo_segundos % 60;

    
    printf("Tempo equivalente a %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
