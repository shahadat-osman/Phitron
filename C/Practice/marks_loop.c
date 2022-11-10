#include<stdio.h>
int main()
{
    int i, j, m;
    float sum=0;
    for(i=1; i<=5; i++)
    {
        printf("%d--> Marks: ", i);
        for(j=1; j<=3; j++)
        {
            scanf("%d", &m);
            sum+=m;
        }
        printf("Average: %f\n", sum/3.0);
    }
}