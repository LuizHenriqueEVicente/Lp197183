/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 
Objetivo    : decobrir o numero de pilhas para a quantidade de figurinhas
Aprendizado : uso de função recursiva
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int N1, int N2){
    return(N2 == 0) ? N1 : mdc(N2, N1 % N2);//caso N2 seja 0, retorna N1, caso contrario retorna a recursiva.
}

int main(){
    
    int casos, N1, N2;
    
    if(scanf("%d", &casos) == 1){
        while(casos--){
            scanf("%d %d", &N1, &N2);
            printf("%d\n", mdc(N1, N2));
        }
    }
    return 0;
}
