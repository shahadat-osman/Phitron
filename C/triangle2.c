#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area;

    printf("Enter a= ");
    scanf("%f", &a);
    printf("Enter b= ");
    scanf("%f", &b);
    printf("Enter c= ");
    scanf("%f", &c);
    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area is: %.2f unit square", area);
    return 0;
}