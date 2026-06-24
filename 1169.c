/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 
Objetivo    : calculo para o crescimento exponencial de graos baseado em casas de um tabuleiro
Aprendizado : uso de recursividade e introdução ao ULL(unsigned long long)
-------------------------------------------------------------------------- */
#include <stdio.h>

unsigned long long calculo_graos(int x){
    if(x == 0){
        return 1ULL;
    }
    
    return 2ULL * calculo_graos(x - 1);
}

int main(){
    
    int x, aux;
    int i = 0;
    
    if(scanf("%d", &aux) == 1 && aux != 0){
        do{
            scanf("%d", &x);
            unsigned long long GRAOS = calculo_graos(x);
            unsigned long long Kg = (GRAOS - 1) / 12000;
            
            printf("%llu kg\n", Kg);
            i++;
        }while(i < aux);
    }
    
    return 0;
    
}
