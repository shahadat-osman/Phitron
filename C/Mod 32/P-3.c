#include<stdio.h>
int solve(int i, int n)
{
    if(i>n)
        return 0;
    int s= solve(i+1, n);
        return s+i;
}
int main()
{
    int s, n;
    scanf("%d", &n);
    
    s=solve(1,n);
    printf("%d\n", s);

    return 0;
}