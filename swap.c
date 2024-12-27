#include <stdio.h>
int main()
{
    int x=1,y=5,z;
    printf("x=%d and y=%d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nAfter swapping");
    printf("\nx=%d and y=%d",x,y);
    
    return 0;
}