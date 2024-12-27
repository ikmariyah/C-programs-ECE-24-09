//the code only prints upto 6 terms max due to integer overflow
#include <stdio.h>
int main ()
{
    int n,i;
    long long int k=2;
    printf("Enter number of terms= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      printf(" %llu",k);
      k=k*k;
    }

    return 0;
}