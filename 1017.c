/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 
Objetivo    : calcular litros por km
Aprendizado : uso de funções
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main(){
    
    int velocidade, tempo; //velocidade media em km/l
    double distancia, litros;
    
    scanf("%d %d", &velocidade, &tempo);
    
    distancia = velocidade * tempo;
    litros = distancia / 12; //o carro faz 12km/l
    
    printf("%.3lf\n", litros);
    
    return 0;
}
