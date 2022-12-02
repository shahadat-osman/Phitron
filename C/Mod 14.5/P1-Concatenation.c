#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, n, index=0;
    scanf("%d", &n);
    char string[100],full_string[100];
    for(i=0; i<n; i++)
    {
        scanf("%s", string);
        for(j=0; j<=strlen(string); j++)
        {
            full_string[index]=string[j];

            if(string[j]=='\0')
                full_string[index]=' ';

            index++;
        }
    }
    printf("%s\n", full_string);
}