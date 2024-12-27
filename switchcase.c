#include <stdio.h>
int main()
{
    int n;

    printf("Enter any number from 1 to 3= ");
    scanf("%d",&n);

    switch(n)
    {
        case 1: printf("Salaam");
                break;
        case 2: printf("Aadaab");
                break;
        case 3: printf("Hello");
                break;
        default:printf("Incorrect option");
    }
    return 0;
}