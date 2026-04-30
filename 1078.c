/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 29/04/2026
Objetivo    : Imprima a tabuada de N
Aprendizado : estruturas de repetiçaõ (laços) e formatação de saídas.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    
    int i, num;
    
    scanf("%i", &num);
    
    for(i=1; i<=10; i++){
        printf("%i x %i = %i\n", i, num, num*i);
    }
    return 0;
}
