#include <stdio.h>
int main ()
{
    int n,i,prod=1;
    printf("Enter number of terms= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    prod*=i;
    printf("The product of the series 1 to %d= %d",n,prod);

    return 0;
}