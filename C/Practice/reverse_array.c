#include<stdio.h>
int main()
{
    int i, j, n;
    
    scanf("%d", &n);
    int m_array[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &m_array[i]);
    }
    for(i=0, j=n-1; i<n/2; i++, j--)
    {
        int temp=m_array[i];
        m_array[i]=m_array[j];
        m_array[j]=temp;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", m_array[i]);
    }
}