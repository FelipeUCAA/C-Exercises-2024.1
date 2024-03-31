#include <stdio.h>

void mostrarPeso(float peso[], int qtdBois){
    for(int i = 0; i < qtdBois; i++){
        printf("Boi %d = %.2f\n", i+1, peso[i]);
    }
}

void maisGordoMaisMagro(float pesoBois[], int qtdBois){
    float maiorPeso = 0, menorPeso = 99999;
    int idMaisGordo, idMaisMagro;

    for (int i = 0; i < qtdBois; i++){
        if(pesoBois[i] > maiorPeso){
            maiorPeso = pesoBois[i];
            idMaisGordo = i+1;
        }
        if(pesoBois[i] < menorPeso && pesoBois[i] != 0){
            menorPeso = pesoBois[i];
            idMaisMagro = i+1;
        }
    }
    
    printf("O boi mais gordo é o Boi %d com %.2f kg\n", idMaisGordo, maiorPeso);
    printf("O boi mais magro é o Boi %d com %.2f kg\n", idMaisMagro, menorPeso);
}

int main(){
    float pesoBoi[10];
    int qtdBois = 0;

    printf("Digite o peso do boi %d (ou 0 para encerrar): ", qtdBois+1);
    scanf("%f", &pesoBoi[qtdBois]);
    
    while (pesoBoi[qtdBois] != 0 && qtdBois < 10) {
        qtdBois++;
        printf("Digite o peso do boi %d (ou 0 para encerrar): ", qtdBois+1);
        scanf("%f", &pesoBoi[qtdBois]);
    }

    printf("\nLista de pesos dos bois:\n");
    mostrarPeso(pesoBoi, qtdBois);
    printf("\n");

    if (qtdBois > 0) {
        maisGordoMaisMagro(pesoBoi, qtdBois);
    }
    
    return 0;
}
