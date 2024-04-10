#include <stdio.h>

int main() {
    int x, y, z;
    
    
    printf("Digite os valores dos lados do triângulo (separados por espaços): ");
    scanf("%d %d %d", &x, &y, &z);
    
    
    if (x + y > z && x + z > y && y + z > x) {
       
        if (x == y && y == z) {
            printf("Os lados formam um triângulo equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os lados formam um triângulo isósceles.\n");
        } else {
            printf("Os lados formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }
    
    return 0;
}
