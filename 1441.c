#include <stdio.h>

int MAIOR(int presente, int maior_ate_agora){
    if(presente == 1){//caso base da recursividade.
        return maior_ate_agora;
    }
    
    int seguinte;
    if(presente % 2 == 0){//caso para os numeros pares.
        seguinte = presente / 2;
    }else seguinte = 3 * presente + 1;//caso para os impares.
    
    if(seguinte > maior_ate_agora){
        maior_ate_agora = seguinte;
    }
    return MAIOR(seguinte, maior_ate_agora);
}

int main(){
    
    int aux;
    
    while(scanf("%d", &aux) == 1 && aux != 0){
        int resultado = MAIOR(aux,aux);
        printf("%d\n", resultado);
    }
    return 0;
}
