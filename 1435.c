#include <stdio.h>

void gerar_matriz(int N, int matriz[N][N], int camada, int inicio, int fim){// recursivo pra preencher de fora pra dentro.

    if(inicio > fim){// se o inicio ficar maior que o fim, a matriz está completa.
        
        return;
    }
    
    for(int i = inicio; i <= fim; i++){//preenche a passagem atual.
     
        for(int G = inicio; G <= fim; G++){
            
            matriz [i][G] = camada;
        }
    }
    
    gerar_matriz(N, matriz, camada + 1, inicio + 1, fim - 1);// prox. camada, encolhe os limites.
} 

int main(){
    
    int N, i, G;
    
    while(scanf("%d", &N) == 1 && N != 0){
        int matriz [N][N];
        
        gerar_matriz(N, matriz, 1, 0, N - 1);// chama a função, na camada 1, inicio 0 e vai até n - 1.
        
        for(i = 0; i < N; i++){
            for(G = 0; G < N; G++){
                if(G == 0){
                printf("%3d", matriz[i][G]);
                
                }else{
                    printf(" %3d", matriz [i][G]);
                } 
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    return 0;
}
