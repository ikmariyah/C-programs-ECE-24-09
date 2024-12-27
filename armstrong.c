#include <stdio.h>
int main ()
{
    int n,temp,r,sum=0;
    printf("Enter a number= ");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
       r=n%10;
       sum+=(r*r*r);
       n=n/10;
    }
    
    if(temp==sum)
    printf("%d is an armstrong number",temp);
    else
    printf("%d is not an armstrong number",temp);
}
