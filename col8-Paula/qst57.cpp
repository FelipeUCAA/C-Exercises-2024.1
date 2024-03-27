#include <stdio.h>

int arredonda(double x);

int arredonda(double x){

    double casaDecimal = x - (int)x;
    if(casaDecimal >= 0.5){
        if(x > 0){
           x = (int)x + 1;
        }else{
            x = (int)x - 1;
        }
    } else{
        x = (int)x;
    }

    return x;
}

int main(){
    
    double numero;
    printf("Qual o numero que voce deseja arredondar?");
    scanf("%lf", &numero);
    int numeroArredondado = arredonda(numero);
    printf("%d", numeroArredondado);
}