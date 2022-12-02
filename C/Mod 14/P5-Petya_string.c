#include<stdio.h>
#include<string.h>

int main()
{
    int i, flag=1;
    char s[102], w[102];
    fgets(s, sizeof(s), stdin);
    fgets(w, sizeof(w), stdin);

    for(i=0; i<strlen(s)-1; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        if(w[i]>='A' && w[i]<='Z')
            w[i]+=32;
    }
    for(i=0; i<strlen(s)-1; i++)
    {
        if(s[i]>w[i])
        {
            flag=0;
            printf("1\n");
            break;
        }
        else if(s[i]<w[i])
        {
            flag=0;
            printf("-1\n");
            break;
        }
    }
    if(flag==1)
        printf("0\n");
}