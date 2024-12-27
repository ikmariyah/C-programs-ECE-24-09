#include <stdio.h>
void bubble(int ary[], int n);
int main()
{
    int ary[]={1,2,4,67,6,53,2,0},n,i;
    n=sizeof(ary)/sizeof(ary[0]);

    printf("Unsorted array:");
    for(i=0;i<n;i++)
    printf("%d ",ary[i]);

    bubble(ary,n);
    
    printf("\nSorted array:");
    for(i=0;i<n;i++)
    printf("%d ",ary[i]);

    return 0;

}

void bubble(int ary[], int n)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ary[j]>ary[j+1])
            {
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    
    }
}