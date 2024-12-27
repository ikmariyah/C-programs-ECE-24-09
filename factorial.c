#include <stdio.h>
int main ()
{
    int n,i,fact=1;
    printf("Enter number= ");
    scanf("%d",&n);

    if(n==0)
    printf("Factorial of %d= %d",n,fact);
    
    else
    {
    for(i=n;i>0;i--)
    fact*=i;
    printf("Factorial of %d= %d",n,fact);
    }
    
    return 0;
}