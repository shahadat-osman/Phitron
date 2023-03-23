#include<stdio.h>
int main()
{
    int n, i, freq[26], count=0;
    char ch;
    scanf("%d", &n);
    for(i=1; i<=26; i++)
        freq[i]=0;

    for(i=1; i<=n; i++)
    {
        scanf("%c", &ch);
        freq[ch-96]++;
    }
    for(i=1; i<=26; i++)
    {
        if(freq[i]==1)
            count++;
    }
    printf("%d\n", count);
}