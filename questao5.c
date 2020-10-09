#include <stdio.h>
#include <math.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova1 de LTP1
Q5 - Um método para o cálculo de raiz quadradas de um número N já era conhecido
pelos babilônios em... bom, há muito tempo (também é conhecido como
Método de Heron, um matemático grego que o descreveu 20 séculos depois,
perto do ano 50 DC).

 Começando com um valor inicial k (geralmente valendo 1),
 os babilônios geravam um novo valor de k de acordo com a regra: k = (k + N/k)/2

 A medida em que o processo é repetido, os novos valores de k se
aproximam cada vez mais da raiz de N. Faça um programa que leia o valor de
N e exiba os primeiros doze valores calculados com essa fórmula, verificando
se eles realmente se aproximaram da raiz correta.
*/

int main() {
    int n;

    printf("Entre com o valor de n ");
    scanf("%d", &n);
    //Apenas a título de comparação adicionei a raiz aqui usando a lib
    //No entanto abaixo é feito o cálculo dos babilônios...
    printf("A raiz esperada de %d é %.2f\n\n", n, sqrt(n));

    float raiz = 1.0;

    for (int i = 0; i < 12; ++i) {
        printf("#%d = \t%.2f\n", (i + 1), raiz);
        raiz = (raiz + n / raiz) / 2;
    }

    return 1;
}
