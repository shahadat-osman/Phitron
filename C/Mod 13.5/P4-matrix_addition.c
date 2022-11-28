#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int first[n*m], second[n*m], final[n*m];

    for(i=0; i<n*m; i++)
    {
        scanf("%d", &first[i]);
    }

    for(i=0; i<n*m; i++)
    {
        scanf("%d", &second[i]);
    }
    for(i=0; i<n*m; i++)
    {
        final[i]=first[i]+second[i];
    }
    for(i=0; i<n*m; i++)
    {
        if(i==(n*m/2))
            printf("\n");
        printf("%d ", final[i]);
    }
    /* for(i=0; i<n; i++)
    {
        for(j=0; j<m)
    } */

}