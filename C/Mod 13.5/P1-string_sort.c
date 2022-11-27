#include<stdio.h>
#include<string.h>
int main()
{
    char sent[1000], m_a[26], ch;
    scanf("%s", sent);
    int i, j, index, count=0, select, inc, max;
    for(i=0; i<26; i++)
    {
        m_a[i]=0;
    }
    for(i=0; i<strlen(sent); i++)
    {
        select=sent[i];
        inc=select-'a';
        for(j=0; j<26; j++)
        {
            if(j==inc)
            {
                m_a[j]++;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        if(m_a[i]!=0)
        {
            count++;
        }
    }
    for(i=0; i<count; i++)
    {
        for(j=0; j<26; j++)
        {
            if(m_a[j]>max)
            {
                max=m_a[j];
                index=j;
            }
        }
        ch='a'+index;
        for(j=0; j<max; j++)
        {
            printf("%c", ch);
        }
        m_a[index]=0;
        index=0;
        max=0;
    }
    printf("\n");
    return 0;
}