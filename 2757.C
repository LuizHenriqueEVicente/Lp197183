/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 29/04/2026
Objetivo    : Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem quatro linhas da forma descrita.
Aprendizado : Formatação de saída de dados.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    
    int A,B,C;
    
    scanf("%i %i %i", &A, &B, &C);
    printf("A = %i, B = %i, C = %i\n", A, B, C);
    printf("A = %10i, B = %10i, C = %10i\n", A, B, C);
    printf("A = %010i, B = %010i, C = %010i\n", A, B, C);
    printf("A = %-10i, B = %-10i, C = %-10i\n", A, B, C);
    
    return 0;
}
