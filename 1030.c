/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 
Objetivo    : calculo para o problema de josephus
Aprendizado : rescursividade
-------------------------------------------------------------------------- */
#include <stdio.h>

int elementos(int n, int m) {
    int r = 0; 
    for (int i = 2; i <= n; i++) {
        r = (r + m) % i;
    }
    return r + 1;
}

int main() {
    int NC;
    if (scanf("%d", &NC));

    for (int case_num = 1; case_num <= NC; case_num++) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int sobrevivente = elementos(n, m);
        
    
        printf("Case %d: %d\n", case_num, sobrevivente);
    }

    return 0;
}
