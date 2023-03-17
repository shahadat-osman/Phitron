#include <stdio.h>
#include <stdlib.h>
struct Point middle(struct Point p1, struct Point p2);

struct Point
{
    float a, b;
    int x, y;
};

struct Point p1, p2, mid_point;

int main()
{
    scanf("(%d,%d) ", &p1.x, &p1.y);
    scanf("(%d,%d)", &p2.x, &p2.y);

    mid_point = middle(p1, p2);
    printf("(%.2f,%.2f)\n", mid_point.a, mid_point.b);

    return 0;
}
struct Point middle(struct Point p1, struct Point p2)
{
    mid_point.a = (p1.x + p2.x) / 2.0;
    mid_point.b = (p1.y + p2.y) / 2.0;
    
    return mid_point;
}