#include <stdio.h>
#include <math.h>
int main ()
{
    int n,i,k;
    printf("Enter number of terms= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      k=pow(2,i);
      printf("%d ",k);
    }
    
    return 0;
}