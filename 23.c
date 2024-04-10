23)
#include <stdio.h>

int main() {
  float baseCalculo;
  float imposto;
  float parcelaDeduzir;

  // Lê a base de cálculo
  printf("Digite a base de cálculo mensal: R$ ");
  scanf("%f", &baseCalculo);

  // Determina a alíquota e a parcela a deduzir
  if (baseCalculo <= 1637.11) {
    imposto = 0;
    parcelaDeduzir = 0;
  } else if (baseCalculo <= 2453.50) {
    imposto = 0.075 * baseCalculo;
    parcelaDeduzir = 122.78;
  } else if (baseCalculo <= 3271.38) {
    imposto = 0.15 * baseCalculo;
    parcelaDeduzir = 306.80;
  } else if (baseCalculo <= 4087.65) {
    imposto = 0.225 * baseCalculo;
    parcelaDeduzir = 552.15;
  } else {
    imposto = 0.275 * baseCalculo;
    parcelaDeduzir = 756.53;
  }

  // Calcula o imposto devido
  imposto -= parcelaDeduzir;

  // Exibe o imposto devido
  printf("Imposto de renda devido: R$ %.2f\n", imposto);

  return 0;
}
