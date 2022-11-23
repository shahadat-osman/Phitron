#include<stdio.h>
int main()
{
    int i, j, n;
    
    scanf("%d", &n);
    int m_array[n];

    for(i=1; i<=n; i++)
    {
        scanf("%d", &m_array[i]);
    }
    for(i=n, j=n; i>0; j++, i--)
    {
        m_array[j]=m_array[i];
    }
    for(i=n; i<n+n; i++)
    {
        printf("%d ", m_array[i]);
    }
}