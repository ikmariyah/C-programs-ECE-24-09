#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter number= ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        printf("%d is not a prime number",n);
        else
        printf("%d is a prime number",n);
        break;
    }
    
    return 0;
}