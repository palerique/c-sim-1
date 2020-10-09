#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova1 de LTP1
Q4 - Sabe-se que o quilowatt de energia custa um quinto do salário mínimo.
Faça um algoritmo e programa em C que receba o valor do salário mínimo e a
quantidade de quilowatts consumida por uma residência.

 Calcule e mostre:
a) o valor, em reais, de cada quilowatt;
b) o valor, em reais, a ser pago por essa residência;
c) o valor, em reais, a ser pago com desconto de 15%.

*/

int main() {
    float salarioMinimo, quilowatts;

    printf("Entre com o valor do salário mínimo ");
    scanf("%f", &salarioMinimo);

    printf("Entre com a quantidade de quilowatts ");
    scanf("%f", &quilowatts);

    double quilowattEmReal = salarioMinimo / 5;
    double totalResidencia = quilowattEmReal * quilowatts;
    double comDesconto = totalResidencia * 0.85;

    printf("a) O valor em reais do quilowatt é %.2f.\n"
           "b) O valor em reais a ser pago pela residência é %.2f.\n"
           "c) O valor em reais a ser pago com desconto de 15%% é %.2f.",
           quilowattEmReal,
           totalResidencia,
           comDesconto);

    return 1;
}
