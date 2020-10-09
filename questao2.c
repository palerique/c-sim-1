#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova1 de LTP1
Q2 - Sabe-se que: 1 pé = 12 polegadas, 1 jarda = 3 pés, 1 milha = 1.760 jardas.
Faça um algoritmo e programa em C que receba uma medida em pés, faça as
conversões a seguir e mostre os resultado
a) Polegadas
b) Jardas
c) Milhas
*/

int main() {
    float pes;

    printf("Entre com o valor em pés ");
    scanf("%f", &pes);

    float polegadas = pes * 12;
    float jardas = pes / 3;
    float milhas = jardas / 1760;

    printf("O valor de %.2f pés é: \t| %.2f polegadas \t| %.2f jardas \t| e %f milhas.", pes, polegadas, jardas,
           milhas);

    return 1;
}
