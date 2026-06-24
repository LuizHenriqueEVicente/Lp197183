/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 
Objetivo    : tempo de duração de um jogo
Aprendizado : uso de funções
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    
    int Hinicio, Hfim, duracao;
    scanf("%d", &Hinicio);
    scanf("%d", &Hfim);
    
    if(Hfim <= Hinicio){ //caso o jogo não acabe no mesmo dia.
        
        duracao = (24 - Hinicio) + Hfim;
      
    }else{
        
        duracao = Hfim - Hinicio;
     
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}
