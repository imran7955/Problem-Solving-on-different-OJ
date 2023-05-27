#include <stdio.h>
int value(char c)
{
    if(c < 91) c += 32;
    if(c == 'q') return 9;
    else if(c == 'r') return 5;
    else if(c == 'b') return 3;
    else if(c == 'n') return 3;
    else if(c == 'p') return 1;
    else return 0;
}
int main()
{
    char board[8][9];
    int white = 0,black = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 9; j++) scanf("%c", &board[i][j]);
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[i][j] == '.') continue;
            if(board[i][j] < 91) white += value(board[i][j]);
            else black += value(board[i][j]);
        }
    }
    if(white > black) printf("White\n");
    else if(black > white) printf("Black\n");
    else printf("Draw\n");
    return 0;
}
