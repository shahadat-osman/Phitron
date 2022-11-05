#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b,&c, &d);

    int state1=min(a,b);
    int state2=min(c,d);
    int state3=max(a,b);
    int state4=max(c,d);

    if(state1+state2<(state3+state4)/2)
        printf("Yes\n");
    else
        printf("No\n");

}