#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter your Input:\n");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("This is an alphabet.\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("This is a number.\n");
    }
    else
    {
        printf("This is a special charecter.\n");
    }
    return 0;
}