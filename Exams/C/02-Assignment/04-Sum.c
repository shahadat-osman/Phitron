#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, a, pos_sum=0, neg_sum=0;
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a<0)
            neg_sum+=a;
        else
            pos_sum+=a;
    }
    printf("%d %d\n", pos_sum, neg_sum);
    return 0;
}
