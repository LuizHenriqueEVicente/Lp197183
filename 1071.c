/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 16/06/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma dos impares entre eles.
Aprendizado : Uso do laço for para loop, negação (!= 0).
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    
    int A,B;
    int soma = 0;
    int i;
    int inicio, fim;
    
    
    scanf("%i %i", &A, &B);
    
    if(A < B){
        inicio = A;
        fim = B;
    }else{
        inicio = B;
        fim = A;
    }
    //soma dos impares, bater se é divizivel por 2, caso seja, ignorar.
    for(i = inicio + 1; i < fim; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    
    printf("%i\n", soma);
    return 0;
}
