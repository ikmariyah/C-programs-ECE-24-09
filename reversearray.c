#include <stdio.h>
int main ()
{
    int i,ary[5];
    printf("Enter upto 5 elements in the array: ");

    for(i=0;i<=4;i++)
    scanf("%d",&ary[i]);
    
    printf("The elements of the array in reverse: ");

    for(i=4;i>=0;i--)
    printf("%d ",ary[i]); 

    return 0;
}