#include <stdio.h>

int main(){
    
    int casos;
    
    if(scanf("%d", &casos) != 1) return 0;
    
    int numeros[casos];
    
    for(int i = 0; i < casos; i++){
        scanf("%d", &numeros[i]);
    }
    
    int menor = numeros[0];
    int posicao = 0;
    
    for(int i = 0; i < casos; i++){
        if(numeros[i] < menor){
            menor = numeros[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}
