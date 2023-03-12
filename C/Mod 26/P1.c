#include<stdio.h>
void hash_display(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    int n, i;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        hash_display(i);
    }

    return 0;
}