#include <stdio.h>

int main() 
{
    int i,ary[5],sum=0;
    printf("Enter elements in the array= ");
    for(i=0;i<5;i++)    
    scanf("%d",&ary[i]);
     
    for(i=0;i<5;i++)
    sum+=ary[i];
    
    printf("The sum of the elements of the array= %d",sum);
    
    return 0;
    
}