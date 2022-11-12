#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    
    int Alist[n], Blist[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &Alist[i]);
        Blist[i]=Alist[i];
    }
    for(i=1; i<=n; i++)
    {
        printf("%d - ", Blist[i]);
        for(j=1; j<=n; j++)
        {
            if(Blist[i]==Alist[j])
            {
                continue;
            }
            printf("%d ", Alist[j]);
        }
        printf("\n");
    }
    return 0;
}