#include<stdio.h>
int solve(int n, int m)
{
    if(m==0)
        return 1;
    return solve(n, m-1)*n;

}
int main()
{
    int n, m, s;
    scanf("%d %d", &n, &m);

    s=solve(n, m);
    printf("%d\n", s);

    return 0;
}