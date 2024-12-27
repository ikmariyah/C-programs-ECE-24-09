#include <stdio.h>
int main()
{
    int n;
    printf("Enter year: ");
    scanf("%d",&n);

    (n%4==0 && n%1100!=0) ?printf("%d is a leap year",n) :printf("%d is not a leap year",n);

    return 0;
}