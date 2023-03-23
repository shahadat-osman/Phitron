#include<stdio.h>
int solve(int n)
{
    if(n==0)
        return 0;
    
    return solve(n-1)+n;
}
int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", solve(n));

    return 0;
}