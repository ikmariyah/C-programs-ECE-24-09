#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter starting number= ");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    printf("%d ",i);

    return 0;
}