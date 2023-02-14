#include <stdio.h>
int main()
{
    int n, i, j, k=1, count=0, element=0;
    scanf("%d", &n);
    int ary[n];
    int total[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=1; i<=n; i++)
    {
        count = 0;
        for(j=2; j<=ary[i]/2; j++)
        {
            if(ary[i]%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            element++;
            total[k]=ary[i];
            k++;
        }
    }
    printf("%d\n", element);
    for(i=1; i<k; i++)
    {
        printf("%d ", total[i]);
    }
    
}