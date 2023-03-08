#include<stdio.h>
void sort(int ary[], int size)
{
    int temp, i, j;

    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(ary[j]>ary[j+1])
            {
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
}
int smallest(int ary[], int index)
{
    return ary[index-1];
}
int largest(int ary[], int index, int size)
{
    return ary[size-index];
}

int main()
{
    int n, i, k;
    scanf("%d", &n);

    int ary[n];
    for(i=0; i<n; i++)
        scanf("%d", &ary[i]);
    scanf("%d", &k);

    sort(ary, n);
    
    int Kth_smallest=smallest(ary, k);
    int Kth_largest= largest(ary, k, n);
    printf("%d smallest- %d\n%d largest- %d\n", k, Kth_smallest, k, Kth_largest);
}