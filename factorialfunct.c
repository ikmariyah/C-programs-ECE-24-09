#include <stdio.h>
int factorial(int n);
 
 int main()
 {
    int n,f;
    printf("Enter number= ");
    scanf("%d",&n);
    
    if(n==0)
    printf("Factorial of %d= 1 ",n);
    else
    {
    f= factorial(n);
    printf("Factorial of %d= %d ",n,f);
    }
 }

 int factorial(int n)
{
    if(n==0)
    return 1;

    int f=1;
    f= f*n*factorial(n-1);
   
    return f;
 }
