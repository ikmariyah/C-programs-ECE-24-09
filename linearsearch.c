#include <stdio.h>
int main()
{
    int n,i,ary[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter number= ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(ary[i]==n)
        {
        printf("Element found at location %d",i+1);
        break;
        }
    }

    if(i==10)
    printf("Element not found");

    return 0;
}