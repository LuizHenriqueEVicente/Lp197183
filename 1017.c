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
