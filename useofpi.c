#include <stdio.h>
int main()
{
    int r;
    float area,pi=3.14;
    printf("Enter radius= ");
    scanf("%d",&r);
    area = pi*r*r;
    printf("Area of the circle= %f",area);

    return 0;
}
