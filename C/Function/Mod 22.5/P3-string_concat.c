#include <stdio.h>
#include <string.h>
void concat(int n);

int main()
{
    int n;
    scanf("%d", &n);

    concat(n);

    return 0;
}
void concat(int n)
{
    int i, j, k=0;
    char str[100], m_str[100];
    for(i=0; i<n; i++)
    {
        scanf("%s", str);
        for(j=0; j<=strlen(str); j++, k++)
        {
            m_str[k]=str[j];

            if(str[j]=='\0')
                m_str[k]=' ';
        }
    }
    puts(m_str);
}