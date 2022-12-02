#include<stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int ary[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    
    for(j=0; j<n-1; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(ary[i]>ary[i+1])
            {
                temp=ary[i];
                ary[i]=ary[i+1];
                ary[i+1]=temp;
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        printf("%d ", ary[i]);
    }
}