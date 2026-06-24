/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 
Objetivo    : calcular a sequencia de fibonacci
Aprendizado : recursividade 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int memor_fibonacci [100];
int memor_calls [100];

int fibonacci_(int N){
    if(N == 1) return 1;
    if(N == 0) return 0;
    
    
    if(memor_fibonacci[N] != -1){//armazena o resultado de fibonacci_ na posição N para ser usado futuramente.
        return memor_fibonacci[N];
    }
    
    int resultado = fibonacci_(N - 1) + fibonacci_(N - 2);
    int chamadas = memor_calls[N - 1] + memor_calls[N - 2] + 2;
    
    memor_calls[N] = chamadas;
    memor_fibonacci[N] = resultado;
    
    return resultado;
}

int main(){
    
    int teste, N;
    
    memset(memor_fibonacci, -1, sizeof(memor_fibonacci));
    
    memor_fibonacci[0] = 0; memor_calls[0] = 0;
    memor_fibonacci[1] = 1; memor_calls[1] = 0;
    
    if(scanf("%d", &teste) != 1){
        return 0;
    }
    
    while(teste--){
        scanf("%d", &N);
        
        int resultado_fibonacci = fibonacci_(N);
        
        printf("fib(%d) = %d calls = %d\n", N, memor_calls[N], resultado_fibonacci);
    }
    
    return 0;
}
