#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of iterations of the series 1-5= ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf(" ");
        for(j=1;j<=5;j++)
        printf("%d",j);
    }

    return 0;
}