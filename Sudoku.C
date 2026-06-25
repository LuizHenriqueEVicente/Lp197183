#include <stdio.h>

#define TAMANHO 9

int conferir_tabuleiro(int matriz[TAMANHO][TAMANHO], int r)
{
    if(r == TAMANHO)
        return 1;

    int linha[10] = {0};
    int coluna[10] = {0};
    int bloco[10] = {0};

    for(int x = 0; x < TAMANHO; x++)
    {
        int n_linha = matriz[r][x];
        int n_coluna = matriz[x][r];

        int bi = 3 * (r / 3) + (x / 3);
        int bj = 3 * (r % 3) + (x % 3);
        int n_bloco = matriz[bi][bj];

        if(n_linha != 0)
        {
            if(n_linha < 1 || n_linha > 9)
                return 0;

            if(linha[n_linha]++)
                return 0;
        }

        if(n_coluna != 0)
        {
            if(n_coluna < 1 || n_coluna > 9)
                return 0;

            if(coluna[n_coluna]++)
                return 0;
        }

        if(n_bloco != 0)
        {
            if(n_bloco < 1 || n_bloco > 9)
                return 0;

            if(bloco[n_bloco]++)
                return 0;
        }
    }

    return conferir_tabuleiro(matriz, r + 1);
}

void imprimir_tabuleiro(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz[i][j] == 0)
                printf(" .");
            else
                printf(" %d", matriz[i][j]);

            if((j + 1) % 3 == 0 && j < 8)
                printf(" |");
        }

        printf("\n");

        if((i + 1) % 3 == 0 && i < 8)
            printf("-----------------------\n");
    }
}

int tabuleiro_completo(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
        for(int j = 0; j < TAMANHO; j++)
            if(matriz[i][j] == 0)
                return 0;

    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] =
    {
        {0,0,0,2,6,0,7,0,1},
        {6,8,0,0,7,0,0,9,0},
        {1,9,0,0,0,4,5,0,0},
        {8,2,0,1,0,0,0,4,0},
        {0,0,4,6,0,2,9,0,0},
        {0,5,0,0,0,3,0,2,8},
        {0,0,9,3,0,0,0,7,4},
        {0,4,0,0,5,0,0,3,6},
        {7,0,3,0,1,8,0,0,0}
    };

    int original[TAMANHO][TAMANHO];

    for(int i = 0; i < TAMANHO; i++)
        for(int j = 0; j < TAMANHO; j++)
            original[i][j] = matriz[i][j];

    int linha, coluna, valor;

    while(1)
    {
        printf("\n");
        imprimir_tabuleiro(matriz);

        printf("\nLinha (0-8): ");
        scanf("%d", &linha);

        printf("Coluna (0-8): ");
        scanf("%d", &coluna);

        if(linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO)
        {
            printf("Posicao inexistente.\n");
            continue;
        }

        if(original[linha][coluna] != 0)
        {
            printf("Jogada invalida nesta posição.\n");
            continue;
        }

        printf("Valor (1-9): ");
        scanf("%d", &valor);

        if(valor < 1 || valor > 9)
        {
            printf("Valor invalido.\n");
            continue;
        }

        matriz[linha][coluna] = valor;

        if(!conferir_tabuleiro(matriz, 0))
        {
            printf("Jogada invalida.\n");
            matriz[linha][coluna] = 0;
        }
        else
        {
            printf("Jogada aceita.\n");

            if(tabuleiro_completo(matriz))
            {
                imprimir_tabuleiro(matriz);
                printf("\nSudoku concluido com sucesso.\n");
                break;
            }
        }
    }

    return 0;
}
