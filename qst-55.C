#include <stdio.h>


int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int getDaysInMonth(int month, int year) {
    static const int days[2][13] = {
        
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
      
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    int leap = isLeapYear(year);
    return days[leap][month];
}

int main() {
    int year, month;
    printf("Digite o ano: ");
    scanf("%d", &year);
    printf("Digite o mês (1 a 12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        int days = getDaysInMonth(month, year);
        printf("O mês %d do ano %d tem %d dias.\n", month, year, days);
    } else {
        printf("Mês inválido. Digite um valor entre 1 e 12.\n");
    }

    return 0;
}
