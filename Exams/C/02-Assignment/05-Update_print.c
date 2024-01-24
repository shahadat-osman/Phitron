#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, x, v;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &x, &v);
    arr[x]=v;
    
    for(i=n-1; i>=0; i--)
        printf("%d ", arr[i]);
    return 0;
}
