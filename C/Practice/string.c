#include<stdio.h>
int main()
{
    int i=0, counter=0;
    char name[100];
    fgets(name, sizeof(name), stdin);

    while(name[i]!='\0')
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
            counter++;
        
        i++;
    }
    printf("%d\n", counter);
}