#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Enter number of terms= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    sum+=i;
    printf("The sum of the series 1 to %d= %d",n,sum);

    return 0;
}