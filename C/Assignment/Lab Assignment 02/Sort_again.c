#include<stdio.h>
#include<string.h>
void sort(char str[], int len);

int main()
{
    char str[100];
    scanf("%s", str);
    
    int len= strlen(str);

    sort(str, len);
}
void sort(char str[], int len)
{
    int i, j;
    for(i=0; i<len-1; i++)
    {
        for(j=0; j<len-1; j++)
        {
            int temp;
            if(str[j]<str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    puts(str);
}