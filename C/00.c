#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, y;
    char ch1;
    scanf(" %d %c", &x,&ch1);
    scanf(" %d %c", &y,&ch1);
    printf("%d%%", x*y);
    return 0;
}