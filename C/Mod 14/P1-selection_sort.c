#include<stdio.h>
int main()
{
    int n, i, j, min, m_ind;
    scanf("%d", &n);
    int ary[n], sorted[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for(j=0; j<n; j++)
    {
        min=ary[0];
        m_ind=0;
        for(i=0; i<n; i++)
        {
            if(ary[i]<min)
            {
                min=ary[i];
                m_ind=i;
            }
        }
        ary[m_ind]=999;
        sorted[j]=min;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", sorted[i]);
    }

}