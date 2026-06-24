/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 23/06/2026
Objetivo    : calcular e devolver o maior valor da "sequencia de granizo" até que a entrada seja "0"
Aprendizado : uso de recursividade
-------------------------------------------------------------------------- */
#include <stdio.h>

int MAIOR(int presente, int maior_ate_agora){
    if(presente == 1){//caso base da recursividade.
        return maior_ate_agora;
    }
    
    int seguinte;
    if(presente % 2 == 0){//caso para os numeros pares.
        seguinte = presente / 2;
    }else seguinte = 3 * presente + 1;//caso para os impares.
    
    if(seguinte > maior_ate_agora){
        maior_ate_agora = seguinte;
    }
    return MAIOR(seguinte, maior_ate_agora);
}

int main(){
    
    int aux;
    
    while(scanf("%d", &aux) == 1 && aux != 0){
        int resultado = MAIOR(aux,aux);
        printf("%d\n", resultado);
    }
    return 0;
}
