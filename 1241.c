/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 
Objetivo    : verificar se uma sequencia numerica encaixa dentro de outra por complementariedade
Aprendizado : uso de strings (bom caminho para um codigo que bata sequencias de DNA)(ver a possibilidade de um que transcreva DNA em RNA.)
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main(){
    int n; //números de casos a serem revisados
    char a[1001], b[1001];

    if (scanf("%d", &n) == 1) {
        do{
            scanf("%s %s", a, b);
    
    int tamA = strlen(a);
    int tamB = strlen(b);
    
    if (tamA >= tamB && strcmp(&a[tamA - tamB], b) == 0){
        printf("encaixa\n");
    } else{
        printf("nao encaixa\n");
    }
} while(--n);
    }
    return 0;
}
