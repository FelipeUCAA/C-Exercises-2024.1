#include <stdio.h>

int main() {
    int velocidadeMaxima, velocidadeMotorista, diferencaVelocidade, multa;

    printf("Informe a velocidade máxima permitida na avenida: ");
    scanf("%d", &velocidadeMaxima);

    printf("Informe a velocidade do carro: ");
    scanf("%d", &velocidadeMotorista);

    
    diferencaVelocidade = velocidadeMotorista - velocidadeMaxima;

    if (diferencaVelocidade > 0) {
       
        multa = diferencaVelocidade * 5;
        printf("\nA multa foi de R$ %d,00.\n", multa);
    } else {
        printf("\nVeículo dentro do limite! Não há multa.\n");
    }

    return 0;
}
