#include <stdio.h>


struct Horario {
    int hora;
    int minutos;
    int segundos;
};


int segundosEntreHorarios(struct Horario h1, struct Horario h2) {
    int segundosH1 = h1.hora * 3600 + h1.minutos * 60 + h1.segundos;
    int segundosH2 = h2.hora * 3600 + h2.minutos * 60 + h2.segundos;
    return segundosH2 - segundosH1;
}

int main() {
   
    struct Horario h1 = {10, 30, 45}; 
    struct Horario h2 = {14, 15, 20}; 

    int diferencaSegundos = segundosEntreHorarios(h1, h2);

    printf("Segundos entre os horários: %d\n", diferencaSegundos);

    return 0;
}
