#include <stdio.h>

int main() {
    int num, count_0_to_100 = 0;

    printf("Digite 20 números:\n");

    for (int i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);

        if (num >= 0 && num <= 100) {
            count_0_to_100++;
        }
    }

    printf("\nQuantidade de números entre 0 e 100: %d\n", count_0_to_100);

    return 0;
}
