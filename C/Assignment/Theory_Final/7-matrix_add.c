#include<stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int first[n][m], second[n][m], final[n][m];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &first[i][j]);
    
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &second[i][j]);
        
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            final[i][j]=first[i][j]+second[i][j];
            printf("%d ", final[i][j]);
        }
        printf("\n");
    }
    return 0;
}