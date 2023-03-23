#include<stdio.h>
struct Complex
{
    double real, img;
};
struct Complex add_complex(struct Complex a, struct Complex b)
{
    struct Complex ans;
    ans.real = a.real+b.real;
    ans.img = a.img+b.img;

    return ans;
}
void display(struct Complex res)
{
    printf("%.2lf + %.2lfi\n", res.real, res.img);
}
int main()
{
    struct Complex c1, c2;
    scanf("%lf %lf", &c1.real, &c1.img);
    scanf("%lf %lf", &c2.real, &c2.img);

    display(add_complex(c1,c2));

    return 0;
}