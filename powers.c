#include <stdio.h>
#include <math.h>

int main() 
{
    int n,p;
    printf("Enter number= ");
    scanf("%d",&n);

    printf("Enter power= ");
    scanf("%d",&p);
    
    printf("%d raised to the power %d= %lf ",n,p,pow(n,p));

    return 0;
}