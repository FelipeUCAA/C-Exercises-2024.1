#include <stdio.h>


void printGoalSequences(int m, int n, char sequence[], int index) {
    if (m == 0 && n == 0) {
        sequence[index] = '\0'; 
        printf("%s\n", sequence); 
        return;
    }

    if (m > 0) {
        sequence[index] = 'A'; 
        printGoalSequences(m - 1, n, sequence, index + 1);
    }

    if (n > 0) {
        sequence[index] = 'B'; 
        printGoalSequences(m, n - 1, sequence, index + 1);
    }
}

int main() {
    int m = 3; 
    int n = 1; 
    char sequence[m + n];

    printf("Possíveis sucessões de gols:\n");
    printGoalSequences(m, n, sequence, 0);

    return 0;
}
