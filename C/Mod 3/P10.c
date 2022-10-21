#include<stdio.h>
int main()
{
    int math, phy, chem;
    printf("Input Obtained marks:\n");
    scanf("%d%d%d", &phy, &chem, &math);
    if(phy>=55 && chem>=50 && math>=65)
    {
        if((math+phy+chem)>=190 || (math+phy)>=140)
            printf("The candidate is eligible fo admission.\n");
        else
            printf("The candidate is not eligible for admission.\n");
        
    }
    else
        printf("The candidate is not eligible for admission.\n");
    
    return 0;
}