#include<stdio.h>
void func(int x, int y, int *p, int *q)
{
    *p= x>y?x:y;
    *q= x<y?x:y;
}
int main()
{
    int a, b, max, min;
    scanf("%d %d", &a, &b);


    func(a, b, &max, &min);
    printf("%d %d\n", max, min);
}