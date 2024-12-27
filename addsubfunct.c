#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int subt(int a, int b);

int main()
{
    int a=9,b=4,c,d,e;
    c= add(a,b);
    printf("Sum of %d and %d= %d",b,a,c);

    d= sub(a,b);
    printf("\nDifference of %d and %d= %d",b,a,d);

    e= subt(a,b);
    printf("\nDifference of %d and %d= %d",b,a,e);

    return 0;
}

int add(int a, int b)
{
    int c=a+b;
    return c;
}

int sub(int a, int b)
{
    int d=a-b;
    return d;
}

int subt(int a, int b)
{
    int e= b-a;
    return e;
}