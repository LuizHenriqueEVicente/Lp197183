/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 
Objetivo    : criptografia
Aprendizado : uso e aplicação de strings
-------------------------------------------------------------------------- */
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int N, n, i = 0;
    char aux, M[500];

    scanf("%d\n", &N);

    do
    {
        scanf("%[^\n]\n", &M);

        n = strlen(M);
        for(int pos = 0; pos < n; pos++){
            if(isalpha(M[pos])){
                M[pos] += 3;
            }
        }
        for(int pos = 0; pos < n/2; pos++){
            aux = M[pos];
            M[pos] = M[n - 1 - pos];
            M[n - 1 - pos] = aux;
        }
        for(int pos = n/2; pos < n; pos++){
            --M[pos];
        }

        printf("%s\n", M);
        i++;
        
    } while (i < N);
    

    return 0;
}
