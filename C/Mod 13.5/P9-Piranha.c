#include<stdio.h>
int main()
{
    int t, i, n, j, output, equal;
    //scanf("%d", &t);
    //for(i=0; i<t; i++)
    //{
        scanf("%d", &n);
        int ary[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &ary[i]);
        }
        for(i=0; i<n-1; i++)
        {
            if(ary[0]==ary[i+1])
                 equal++;
        }
        if(equal==n-1)
            output=-1;
        
        else
        

        /* for(j=0; j<n-1; j++)
        {
            if(ary[0]==ary[j+1])
            {
                output=-1;
            }
            else 
            {
                int min=ary[0];
                for(k=0; k<n; k++)
                {
                    if(ary[k]<min)
                        min=ary[k];
                }
                for(k=0; k<n; k++
                {
                    if(ary[i     ])
                }
            }
        } */
    //}
    printf("%d", output);
}