#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct camiseta{//armazena os dados das camisetas.
    char nome[100];
    char cor[100];
    char tamanho;// p, m ou g.
}camiseta;

int comparar(const void *A, const void *B){//faz a comparação para o qsort
    camiseta *c1 = (camiseta *)A;
    camiseta *c2 = (camiseta *)B;
    
    int comparar_cor = strcmp(c1->cor, c2->cor);// 1° ponto, separar as cores por ordem alfabetica
    if (comparar_cor != 0){
        return comparar_cor;
    }
    
    if(c1->tamanho != c2->tamanho){//2°ponto, separar por tamanho em ordem decrescete.
       
       if(c1->tamanho == 'P') return -1;
       if(c2->tamanho == 'P') return 1;
       if(c1->tamanho == 'M') return -1;
       if(c2->tamanho == 'M') return 1;
    }
    
    return strcmp(c1->nome, c2->nome);//3°ponto, nome po ordem alfabetica.
}

int main(){
    
    int aux;
    int P1 = 1;
    
    while(scanf("%d", &aux) && aux != 0){//loop para quando aux = 0.
        getchar();//limpa o \n deixado pelo ulimo scanf lido.
        
        camiseta *camisetas = (camiseta *)malloc(aux * sizeof(camiseta));
        for(int i = 0; i < aux; i++){
            fgets(camisetas[i].nome, 100, stdin);
        camisetas[i].nome[strcspn(camisetas[i].nome, "\n")] = '\0';
        scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
        getchar();
        }
        
        qsort(camisetas, aux, sizeof(camiseta), comparar);
        
        if(!P1){
        printf("\n");
        }
        P1 = 0;
        
        for(int i = 0; i < aux; i++){
        printf("%s %c %s\n", camisetas[i].cor, camisetas[i].tamanho, camisetas[i].nome);
        }
        
        free(camisetas);
   }
    return 0;
}
