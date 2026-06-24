/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1338
Data        : 23/06/2026
Objetivo    : escrever um programa de checagem de matrizes para bater se a resposta de um sudoko está correta ou não
Aprendizado : compilado de tudo que foi visto até o momento, em principal uso de função recursiva, matrizes e outras maneiras de estruturar o codigo para deixa-lo mais elegante como: (#define, ? :)
-------------------------------------------------------------------------- */
#include <stdio.h>

#define TAMANHO 9

int conferir_sudoku(int (*matriz)[TAMANHO], int r){//valida o sudoku linha a linha.
    if(r == TAMANHO) return 1;//caso base: se chegou a linha 9, todas as outras tem que estar corretas.
    
    int linha[10] = {0}, coluna[10] = {0}, quadrante[10] = {0};//preenche a matriz com 0 para habilitar a checagem.
    
    for(int x = 0; x < TAMANHO; x++){//confere as colunas da linha X atual. 
        
        int numb_linha = matriz[r][x];//linha r, coluna X
        int numb_coluna = matriz[x][r];//linha x, coluna r.
        
        //formula para checar 3x3
        int quad_linha = 3 * (r / 3) + (x /3);
        int quad_coluna = 3 * (r % 3) + (x % 3);
        int numb_quadrante = matriz[quad_linha][quad_coluna];
        
        if(linha[numb_linha]++ || coluna[numb_coluna]++ || quadrante[numb_quadrante]++){//se o numero ja apareceu, retorna 0.
            return 0;
        }
    }
    return conferir_sudoku(matriz, r + 1);//caso recursivo, pula á proxima linha.(r + 1).
}

int main(){
    
    int aux, matriz[TAMANHO][TAMANHO];
    
    if(scanf("%d", &aux) == 1){//casos de teste
        for(int instancia = 1; instancia <= aux; instancia++){//processa cada instancia do sudoku
            for(int i = 0; i < TAMANHO; i++){//controla qual linha esta sendo lida
                for(int z = 0; z < TAMANHO; z++){//controla qual coluna esta sendo lida
                    scanf("%d", &matriz[i][z]);
                }
            }printf("Instancia %d\n%s\n\n", instancia, conferir_sudoku(matriz, 0) ? "SIM" : "NAO");//imprime a instancia atual e chama a recursiva
        }
    }
    
    return 0;
}
