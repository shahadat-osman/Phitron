#include <stdio.h>

struct Student_List
{
    double Weight;
    int Roll;
};

int main()
{
    int n, i;
    scanf("%d", &n);
    struct Student_List total[n];  // user input

    struct Student_List new[3];    // initialize

    new[0].Roll = 6;
    new[0].Weight = 53.2;

    new[1].Roll = 7;
    new[1].Weight = 52.2;

    new[2].Roll = 8;
    new[2].Weight = 51.2;

    for(i=0; i<n; i++)
        scanf("%d %lf", &total[i].Roll, &total[i].Weight);
    
    for(i=0; i<n; i++)
        printf("Roll- %d, Weight- %.2lf\n", total[i].Roll, total[i].Weight);
    
    for(i=0; i<3; i++)
        printf("Roll- %d, Weight- %.2lf\n", new[i].Roll, new[i].Weight);
    return 0;
}