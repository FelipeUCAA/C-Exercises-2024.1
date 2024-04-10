#include <stdio.h>
#include <stdbool.h>

int encontrarMaior(int arr[], int n) {
    int maior = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

float calcularMedia(int arr[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    return soma / n;
}


void ordenarCrescente(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


bool ehPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void imprimirPrimos(int arr[], int n) {
    printf("Subconjunto de valores primos no array: ");
    for (int i = 0; i < n; i++) {
        if (ehPrimo(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maior = encontrarMaior(arr, n);
    printf("Maior valor: %d\n", maior);


    float media = calcularMedia(arr, n);
    printf("Média dos valores: %.2f\n", media);

    ordenarCrescente(arr, n);
    printf("Valores em ordem crescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    imprimirPrimos(arr, n);

    return 0;
}
