#include<stdio.h>

int main()
{
    char name[10]= "Winter";
    char *s=name;    
    char *e=s;

    while(*e!='\0')
    {
        e++;
    }
    e--;
    while(e>=s)
    {
        printf("%c",*e);
        e--;
    }

    return 0;

}