#include <stdio.h>

void peao(int rows, int columns)
{
    int casas;

    if(rows == 1)
    {
        printf("quantas casas deseja andar? (1 ou 2)");
    }
    else 
    {
        printf("quantas casas deseja andar? (1)");
    }
    
    scanf("%d", &selecao);
    if(rows == 1)
        casas = 2;
    {
        while(scanf("%d", &selecao) > casas || selecao < 0)
        {
            tabuleiro[rows][columns + casas] = tabuleiro[rows][columns];
            tabuleiro[rows][9];
        }
    }   
    else
    {
        printf("quantas casas deseja andar? (casas)");
        while(scanf("%d", &selecao) > casas || selecao < 0)
        {
            tabuleiro[rows][columns + casas] = tabuleiro[rows][columns];
            tabuleiro[rows][9];
        }
    }  

    scanf("%d", &casas);
}

void moverPeca(int tabuleiro[8][8])
{
    int rows, columns;
    printf("selecione uma linha");
    scanf("%d", &rows);

    printf("selecione uma coluna");
    scanf("%d", &columns);

    if(tabuleiro[rows][columns] != 9) 
    {
        peca = tabuleiro[rows][columns]
        switch(tabuleiro[rows][columns])
        {
            case 0:
                peao(rows, columns);
            break;
        }
    }


};

int main()
{
    // int peao = 0, torre = 1, cavalo = 2, bispo = 3, rainha = 4, rei = 5;
    int i, j;
    int pecas[6];

    for(i = 0; i < 6; i++) {
        pecas[i] = i;
    }

    // = {torre, cavalo, bispo, rainha, rei, bispo, cavalo, torre}

    int tabuleiro[8][8];
    int contador = 3;          

    for(i = 0; i < 8; i++)
    {
        tabuleiro[1][i] = pecas[0];
        tabuleiro[1 + 5][i] = pecas[0];
        if(i < 5)
        {
            tabuleiro[0][i] = pecas[i + 1];
            tabuleiro[0 + 7][i] = pecas[i + 1];
        }
        else
        {
            tabuleiro[0][i] = pecas[contador];
            tabuleiro[0 + 7][i] = pecas[contador];
            contador -= 1;
        }
    }

    for(i = 2; i <= 5; i++)
    {
        for(j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = 9;
        }
    }

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("%d", tabuleiro[i][j]);
            if(j == 7) {
                printf("\n");
            }
        }
    }

    moverPeca(tabuleiro);


    return 0;
};