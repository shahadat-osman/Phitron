#include <stdio.h>
#include <stdbool.h>

int isWin(int a[][4], int n);
void printCell(int a[][4], int n);

int main()
{
    int n = 3, i, j, r, c, count=0;
    int a[4][4];
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = -1;

    bool Player1 = true;
    bool Player2 = false;
    while(true)
    {
        printCell(a, n);

        if(Player1)
        {
            Flag:
            printf("Player 1 turn (X), Enter Row and Column:\n");
            scanf("%d %d", &r, &c);
            printf("\n");
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            a[r][c]= 1;

            Player1 = false;
            Player2 = true;
            count++;
        }
        else
        {
            Flag2:
            printf("Player 2 turn (O), Enter Row and Column:\n");
            scanf("%d %d", &r, &c);
            printf("\n");
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            a[r][c]= 2;

            Player1 = true;
            Player2 = false;
            count++;
        }
        if(isWin(a,n)==1)
        {
            printf("Player 1 Won!\n");
            printCell(a,n);
            break;
        }
        else if(isWin(a,n)==2)
        {
            printf("Player 2 Won!\n");
            printCell(a,n);
            break;
        }
        else if(isWin(a, n)==-1 && count==9)
        {
            printf("Draw\n");
            printCell(a,n);
            break;
        }
    }
    

    return 0;
}
int isWin(int a[][4], int n)
{
    int i, j;
    for(i=1; i<=n; i++)
    {
        if(a[i][1]== a[i][2] && a[i][2]== a[i][3] && a[i][1] != -1)
            return a[i][1];
    }
    for(i=1; i<=n; i++)
    {
        if(a[1][i]== a[2][i] && a[2][i]== a[3][i] && a[1][i] != -1)
            return a[1][i];
    }
        
    if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]!= -1)
        return a[1][1];

    if(a[1][3]==a[2][2] && a[2][2]==a[3][1] && a[1][3]!= -1)
        return a[1][3];

    return -1;
}
void printCell(int a[][4], int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == -1)
                printf(" ");
            if (a[i][j] == 1)
                printf("X");
            if (a[i][j] == 2)
                printf("O");
            if (j < n)
                printf("\t|\t");
        }
        printf("\n");
        if (i < n)
            printf("____________________________________");
        printf("\n\n");
    }
}
/* 
1 1
2 2
2 1
3 1
1 3
1 2
3 2
2 3
3 3
 */