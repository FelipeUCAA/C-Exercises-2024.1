#include <stdio.h>

int main() {
    int espigas_iniciais = 1;  
    int anos = 0;
    double toneladas = 0;

    while (toneladas < 100) {
        double espigas_plantadas = espigas_iniciais * 0.9 * 2;  
        double graos_colhidos = espigas_plantadas * 150; 
        double kg_colhidos = graos_colhidos / 1000;  
        toneladas += kg_colhidos / 1000;  
        anos++;
        espigas_iniciais = (int)espigas_plantadas;  
    }

    printf("Sao necessarios %d anos para colher mais de cem toneladas de milho.\n", anos);

    return 0;
}
