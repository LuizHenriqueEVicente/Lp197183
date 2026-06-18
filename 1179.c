#include <stdio.h>

int main(){
    
    int pares [5];
    int impares [5];
    int Ppares = 0, Iimpares = 0;
    int aux, X, Y;
    
    for(int i = 0; i < 15; i++){
        scanf("%d", &aux);
        
        if(aux % 2 == 0){//caso seja par.
        
            pares [Ppares] = aux;
            Ppares++;
            
            if (Ppares == 5){
                
                for(X = 0; X < 5; X++){//Impressão dos números após preenchimento os espaços disponíveis.
                    
                    printf("par[%d] = %d\n", X, pares[X]);
                }
                Ppares = 0;
            }
            
            
        }else{//caso seja impar.
        
            impares[Iimpares] = aux;
            Iimpares++;
            
            if(Iimpares == 5){
                
                for(Y = 0; Y < 5; Y++){
                    
                    printf("impar[%d] = %d\n", Y, impares[Y]);
                }
                Iimpares = 0;
            }
        }
    }
    for(X = 0; X < Iimpares; X++){//imprime os impares restantes.
        printf("impar[%d] = %d\n", X, impares[X]);
    }
    for(X = 0; X < Ppares; X++){//imprime os pares restantes.
        printf("par[%d] = %d\n", X, pares[X]);
    }
    return 0;
}
