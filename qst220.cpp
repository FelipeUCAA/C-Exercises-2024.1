#include <stdio.h>
#include <string.h>

typedef struct {
    char placa[7], modelo[20];
    char horarioSaida[6], horarioEntrada[6];
} tipoCarro;

tipoCarro carro;

int calculoHoras(const char horarioEntrada[6], const char horarioSaida[6]) {
    int horasInicio, minutosInicio;
    int horasSaida, minutosSaida;

    sscanf(horarioEntrada, "%d:%d", &horasInicio, &minutosInicio);
    sscanf(horarioSaida, "%d:%d", &horasSaida, &minutosSaida);

    int diferenca = (horasSaida - horasInicio) * 60 + (minutosSaida - minutosInicio);

    return diferenca;
}

float valorEstacionamento(int tempo) {
    const float precoPrimeiraHora = 5.0;
    const float precoHoraExtra = 2.0;

    float valor = precoPrimeiraHora;

    if (tempo > 60) {
        int horasExtras = (tempo - 60) / 60;
        valor += horasExtras * precoHoraExtra;
    }

    return valor;
}

void linha() {
    for (int i = 0; i < 50; i++) {
        printf("-");
    }
}

void telaPrincipal() {
    printf("Sistema Estacionamento\n");
    linha();
    printf("\n\nPreencha os dados\n");
    printf("Modelo do carro: ");
    scanf("%s", carro.modelo);
    printf("Placa: ");
    scanf("%s", carro.placa);
    printf("Horario de entrada(ex:.20:30): ");
    scanf("%s", carro.horarioEntrada);
    printf("Horario de saida(ex:.21:40): ");
    scanf("%s", carro.horarioSaida);
    linha();
}

void mostrarDados() {
    float pagamento;
    int diferencaHoras;
    diferencaHoras = calculoHoras(carro.horarioEntrada, carro.horarioSaida);
    pagamento = valorEstacionamento(diferencaHoras);

    linha();
    printf("\n\nDados\n");
    linha();
    printf("\n\nModelo: %s\n", carro.modelo);
    printf("Placa: %s\n", carro.placa);
    printf("Horario entrada: %s\n", carro.horarioEntrada);
    printf("Horario saida: %s\n", carro.horarioSaida);
    printf("Tempo total: %d minutos\n", diferencaHoras);
    printf("Valor total: R$ %.2f\n\n", pagamento);
    linha();
}

int main() {
    telaPrincipal();
    mostrarDados();
    return 0;
}
