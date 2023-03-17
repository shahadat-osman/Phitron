#include <stdio.h>
#include <stdlib.h>
struct Point
{
    int x, y;
};

struct Point p1, p2;

int manhattan(struct Point p1, struct Point p2)
{
    int res = abs(p1.x - p2.x) + abs(p1.y - p2.y);

    return res;
}

int main()
{
    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
    int ans = manhattan(p1, p2);

    printf("%d\n", ans);

    return 0;
}