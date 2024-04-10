#include <stdio.h>

int main() {
    int num, entre_0_e_100 = 0, entre_101_e_200 = 0, maiores_que_200 = 0;
    
    printf("Digite 20 números:\n");
    
    for (int i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        
        if (num >= 0 && num <= 100) {
            entre_0_e_100++;
        } else if (num >= 101 && num <= 200) {
            entre_101_e_200++;
        } else {
            maiores_que_200++;
        }
    }
    
    printf("Quantidade de números entre 0 e 100: %d\n", entre_0_e_100);
    printf("Quantidade de números entre 101 e 200: %d\n", entre_101_e_200);
    printf("Quantidade de números maiores que 200: %d\n", maiores_que_200);
    
    return 0;
}
