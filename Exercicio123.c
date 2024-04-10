#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *deck, int size) {
    int i, j, temp;
  
    srand(time(NULL));
    for (i = 0; i < size; i++) {

        j = rand() % size;
  
        temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
       
        printf("%d ", deck[i]);
    }
    printf("\n");
}

int main() {
    int deck[52]; 
    int i;
    
    
    for (i = 0; i < 52; i++) {
        deck[i] = i;
    }

    printf("Ordem aleatória dos números:\n");
    shuffle(deck, 52); 

    return 0;
}
