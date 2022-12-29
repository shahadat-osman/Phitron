#include<stdio.h>
int main()
{
    int n=3, i, j, sum=0;
    int ary[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }

    //solution of A
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                sum+= ary[i][j];
        }
    }
    int main_dio=sum;
    printf("Ans (A) : %d\n", main_dio);

    //solution of C
    sum=0;
    int r[n];
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum+= ary[i][j];
        }
        r[i]=sum;      
    }
    int max=r[0];
    for(i=0; i<n; i++)
    {
        if(r[i]>max)
            max=r[i];
    }
    printf("Ans (C) : %d\n", max);

    //solution of D
    sum=0;
    int c[n];
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum+= ary[j][i];
        }
        c[i]=sum;       
    }
    max=c[0];
    for(i=0; i<n; i++)
    {
        if(c[i]>max)
            max=c[i];
    }
    printf("Ans (D) : %d\n", max);

}