#include <stdio.h>

int main() 
{
    int n, i, k;
    printf("Enter the number to generate its table= ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
        k=n*i;
        printf("%d x %d = %d",n,i,k);
        printf("\n");
    }

    return 0;
}