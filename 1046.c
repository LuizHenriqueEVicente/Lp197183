#include <stdio.h>

int main(){
    
    int Hinicio, Hfim, duracao;
    scanf("%d", &Hinicio);
    scanf("%d", &Hfim);
    
    if(Hfim <= Hinicio){ //caso o jogo não acabe no mesmo dia.
        
        duracao = (24 - Hinicio) + Hfim;
      
    }else{
        
        duracao = Hfim - Hinicio;
     
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}
