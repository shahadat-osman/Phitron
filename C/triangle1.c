#include<stdio.h>
int main()
{
    float height, length, area;
    
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter height: ");
    scanf("%f", &height);

    area =(height*length)/2;
    printf("Area = %.2f unit square", area);

    return 0;
}