#include<stdio.h>
#include<math.h>

struct point
{
    int x, y;
};

double distance(struct point a, struct point b)
{
    int semi= pow(a.x- b.x, 2)+ pow(a.y - b.y, 2);

    return sqrt(semi);
}

int main()
{
    struct point p1, p2;

    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    double ans= distance(p1, p2);
    printf("Distance between them - %.2lf\n", ans);

    return 0;
}
