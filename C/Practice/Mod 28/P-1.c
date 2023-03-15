#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5, i, *ptr;
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL)
        printf("Allocation Failed\n");
    else 
    {
        for(i=0; i<n; i++)
            scanf("%d", (ptr+i));
        for(i=0; i<n; i++)
            printf("%d, ", *(ptr+i));
    }
    n=10;
    ptr= realloc(ptr, n*sizeof(int));

    if(ptr==NULL)
        printf("Allocation Failed\n");
    else 
    {
        for(i=5; i<n; i++)
            scanf("%d", (ptr+i));
        for(i=0; i<n; i++)
            printf("%d, ", *(ptr+i));
    }

    free(ptr);
    return 0;
}