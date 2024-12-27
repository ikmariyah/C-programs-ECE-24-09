#include <stdio.h>
int main ()
{
    double n,i,sum=0.0;
    printf("Enter number of terms= ");
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    sum+= 1/i;
    printf("The sum of the series 1 to 1/%lf= %lf",n,sum);

    return 0;
}