#include <stdio.h>

int main() {
    int dominos[7][7];
    int i, j, sum = 0;

   
    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= 6; j++) {
            dominos[i][j] = i * 10 + j;
        }
    }
    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= 6; j++) {
            if (i == 4 || j == 4) {
                sum += dominos[i][j];
            }
        }
    }


    printf("A soma de todos os números 4 do dominó é: %d\n", sum);

    return 0;
}
