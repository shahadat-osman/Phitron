#include <stdio.h>
int main()
{
    int m, n;

    printf("Input two number: ");
    scanf("%d %d", &m, &n);

    if (m > 0 && n > 0)
        printf("The coordinate point(%d, %d) lies in the First quadrant.\n", m, n);

    if (m < 0 && n > 0)
        printf("The coordinate point(%d, %d) lies in the Second quadrant.\n", m, n);

    if (m < 0 && n < 0)
        printf("The coordinate point(%d, %d) lies in the Third quadrant.\n", m, n);

    if (m > 0 && n < 0)
        printf("The coordinate point(%d, %d) lies in the Fourth quadrant.\n", m, n);
    
    else
        printf("The coordinate point(%d,%d) lies at the origin.\n", m, n);

    return 0;
}