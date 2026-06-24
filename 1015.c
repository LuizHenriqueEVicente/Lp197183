/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 
Objetivo    : distancia entre dois pontos
Aprendizado : diferentes bibliotecas, função e ponteiro.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main(){
    
    double x1,y1,x2,y2;
    double distancia;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //introdução da math.h para uso de opeações matematicas mais complexas.
    
    printf("%.4lf\n", distancia); //O .4 após o % para determinar o numero de casas a serem consideradas.
    return 0;
}
