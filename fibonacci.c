#include <stdio.h>
int main ()
{
    int n,i,x=0,y=1,z;
    printf("Enter number of terms= ");
    scanf("%d",&n);
    printf("0 1 ");
    
    for(i=1;i<=n;i++)
    {
      z=x+y;
      printf("%d ",z);
      x=y;
      y=z;
    }

    return 0;
}