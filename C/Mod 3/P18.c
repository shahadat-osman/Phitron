#include<stdio.h>
int main()
{
    int cost, sell;

    printf("Enter your cost price:\n\t");
    scanf("%d", &cost);
    printf("Enter your Sell price:\n\t");
    scanf("%d", &sell);

    if(sell>cost)
    {
        printf("Profit amount: %d", sell-cost);
    }
    else if(cost>sell)
    {
        printf("Loss amount: %d", cost-sell);
    }
    else 
    {
        printf("Cost and Sell are Equal.\n");
    }
    return 0;
}