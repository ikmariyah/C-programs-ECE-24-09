#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,x,y;
    double p,r;
    
    printf("Enter number= ");
    scanf("%d",&a);
    printf("Enter power= ");
    scanf("%d",&b);

    p=pow(a,b),
    printf("%d to the power %d= %lf",a,b,p);
    
    printf("\nEnter number= ");
    scanf("%d",&x);

    r=sqrt(x);
    printf("Square root of %d= %lf",x,r);

    return 0;
}