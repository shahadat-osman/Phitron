#include<stdio.h>
int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    int total=(hour*60)+minute;
    printf("%d\n", total);
}