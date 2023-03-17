#include <stdio.h>
#include <stdlib.h>

struct Point
{
    float x, y;
};

struct Triangle
{
    struct Point A[3];
};

struct Point centroid(struct Triangle Z);
struct Point p[3], Cnt;
struct Triangle T;

int main()
{
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%f %f", &p[i].x, &p[i].y);
        T.A[i]=p[i];
    }
    Cnt= centroid(T);
    printf("%.2f, %.2f\n", Cnt.x, Cnt.y);

    return 0;
}
struct Point centroid(struct Triangle Z)
{   struct Point ans;
    for(int i=0; i<3; i++)
    {
        ans.x+=Z.A[i].x;
        ans.y+=Z.A[i].y;
    }
    ans.x/=3;
    ans.y/=3;
    return ans;
}

/* 
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    float x;
    float y;
};
struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};
struct Point cent(struct Triangle t);
int main()
{
    struct Point p1 ={1,1};
    struct Point p2 ={4,5};
    struct Point p3 ={1,5};

    struct Triangle t = {p1, p2, p3};

    struct Point cntr = cent(t);

    printf("%.2f %.2f\n", cntr.x, cntr.y);

    return 0;
}
struct Point cent(struct Triangle t)
{
    struct Point ans;
    ans.x = (t.A.x + t.B.x + t.C.x)/3;
    ans.y = (t.A.y + t.B.y + t.C.y)/3;
    return ans;
}
 */