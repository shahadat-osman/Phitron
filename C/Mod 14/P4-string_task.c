#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char string[102];
    fgets(string, sizeof(string), stdin);
    for(i=0; i<strlen(string)-1; i++)
    {
        if(string[i]>='A' && string[i]<='Z')
            string[i]+=32;
        if(!(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='y'))
            printf(".%c", string[i]);
    }
    printf("\n");
}