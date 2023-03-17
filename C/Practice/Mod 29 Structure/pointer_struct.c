#include<stdio.h>

struct pointer_struct
{
    double weight;
    int roll;
};

int main()
{
    struct pointer_struct list = {.roll= 45, .weight = 56.4};
    struct pointer_struct* ptr;

    ptr= &list;

    printf("%d %.2lf\n", list.roll, list.weight);       // print with variable name
    printf("%d %.2lf\n", ptr->roll, ptr->weight);       // print with pointer

    return 0;
}
