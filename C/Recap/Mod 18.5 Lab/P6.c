#include<stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if(year%4==0)
        printf("Yes\n");
    else 
        printf("No\n");

    return 0;
}