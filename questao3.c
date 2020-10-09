#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova1 de LTP1
Q3 - Faça um programa que receba três números e mostre-os em ordem crescente.
*/

int main() {
    int x, y, z;

    printf("Entre com o valor de x ");
    scanf("%d", &x);
    printf("Entre com o valor de y ");
    scanf("%d", &y);
    printf("Entre com o valor de z ");
    scanf("%d", &z);

    if (x > z) {
        // troca x com z
        x = x - z;
        z = x + z;
        x = z - x;
    }

    if (x > y) {
        // troca x com y
        x = x - y;
        y = x + y;
        x = y - x;
    }

    if (y > z) {
        // troca y com z
        y = y - z;
        z = y + z;
        y = z - y;
    }

    printf("\nA ordem crescente dos números é: %d %d %d", x, y, z);

    return 1;
}
