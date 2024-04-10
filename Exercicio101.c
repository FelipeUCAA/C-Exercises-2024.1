#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10];
    int i, j = 0, k = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {  
            v2[k] = v[i];
            k++;
        } else {  
            v1[j] = v[i];
            j++;
        }
    }

  
    printf("\nElementos utilizados de v1 (ímpares):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

 
    printf("\nElementos utilizados de v2 (pares):\n");
    for (i = 0; i < k; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
