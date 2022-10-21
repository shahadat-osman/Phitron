#include<stdio.h>
int main()
{
    int temp;
    printf("Enter today's weather in Centigrade:\n");
    scanf("%d",&temp);

    if(temp<0)
        printf("Freezing Weather.\n");
    else if(temp<=10)
        printf("Very Cold Weather.\n");
    else if(temp<=20)
        printf("Cold Weather.\n");
    else if(temp<=30)
        printf("Normal in Temp.\n");
    else if(temp<=40)
        printf("Its Hot.\n");
    else if(temp>=40)
        printf("Its very Hot.\n");
    
    return 0;
}