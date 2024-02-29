//Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. 
//O programa deve retornar o resultado da operação recebida sobre estes dois números.

#include <stdio.h>

int main(){
    char operacao;
    float num1, num2, resultado;
    int opc;

    do{
        printf("Escolha a operação que deseja realizar:\n+ -> Soma\n- -> Subtracao\n/ -> Divisao\n* -> multiplicacao\n");
        scanf("%c", &operacao);
        printf("Digite os dois numeros:");
        scanf("%f %f", &num1, &num2);
        printf("Resultado:");
        switch (operacao)
        {
        case '+':  printf("%2.f %c %2.f = %2.f", num1, operacao, num2, num1 + num2);
            break;
        case '-': printf("%2.f %c %2.f = %2.f", num1, operacao, num2, num1 - num2) ;
         break;
        case '/':  printf("%2.f %c %2.f = %2.f", num1, operacao, num2, num1 / num2) ; break;
        case '*':  printf("%2.f %c %2.f = %2.f", num1, operacao, num2, num1 * num2) ; break;
        default: printf("Digito invalido. Por favor digitar o caracter referente a operacao desejada");
            break;
        }
    printf("\nDeseja realizar outra operacao(1-sim/0-não)?");
    
    scanf("%d", &opc);
    }while (opc != 0);   
}