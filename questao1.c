#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova1 de LTP1
Q1 - Faça um programa que monte os oito primeiros termos da sequência de Fibonacci. 0 1 1 2 3 5 8 13 21 34 55 …
*/

int main() {

    int antepenultimo = 0, penultimo = 1, ultimo, i;

    for (i = 0; i < 8; i++) {
        printf("%d ", antepenultimo);
        ultimo = antepenultimo + penultimo;
        antepenultimo = penultimo;
        penultimo = ultimo;
    }

    return 1;
}
