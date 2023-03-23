#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N, S;
    scanf("%d %d", &N, &S);

    printf("%d\n", abs((N-S)/2));
}