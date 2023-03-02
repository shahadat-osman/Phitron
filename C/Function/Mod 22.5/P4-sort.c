#include <stdio.h>

void ary_sort(int n, int arr[]);

int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    ary_sort(n, ary);

    return 0;
}
void ary_sort(int c, int arr[])
{
    int i, j, temp;
    for(i=0; i<c-1; i++)
    {
        for(j=0; j<c-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<c; i++)
    {
        printf("%d ", arr[i]);
    }
}