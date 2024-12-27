#include <stdio.h>
int main ()
{
    int i;
    char ary[5]={'a','b','c','d','e'};

    printf("The elements of the array are: ");

    for(i=0;i<5;i++)
    printf("%c ",ary[i]); 

    return 0;
}