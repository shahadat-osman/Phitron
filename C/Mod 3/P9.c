#include<stdio.h>
int main()
{
    int x,y;
    printf("Input two numbers:\n");
    scanf("%d%d", &x, &y);

    if(x>0 && y>0)
    {
        printf("The coordinate point(%d,%d) lies in the 1st quadrant.\n", x, y);
    }
    else if(y>0 && x<0)
    {
        printf("The coordinate point(%d,%d) lies in the 2nd quadrant.\n", x, y);
    }
    else if(x<0 && y<0)
    {
        printf("The coordinate point(%d,%d) lies in the 3rd quadrant.\n", x, y);
    }
    else if(x>0 && y<0)
    {
        printf("The coordinate point(%d,%d) lies in the 4th quadrant.\n", x, y);
    }
    else
    {
        printf("The coordinate point(%d,%d) lies at the origin.\n", x, y);
    }
    return 0;
}