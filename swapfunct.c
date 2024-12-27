#include <stdio.h>
int swap(int x, int y);

int main()
{
    int x=1,y=7,z;
    printf("x=%d and y=%d",x,y);

    printf("\nAfter swapping: ");
    swap(x,y);

    return 0;
}

int swap(int x, int y)
{
    int z=x;
    x=y;
    y=z;

   printf("\nx=%d and y=%d",x,y);
}