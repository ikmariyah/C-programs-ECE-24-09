#include<stdio.h>

int main()
{
    char str[10];
    char *s=str;
    char *e=s;

    printf("Enter a String to check palindrome:\n");
    scanf("%s",&str);

    while(*e!='\0')
    {
        e++;
    }
    e--;
    while(*s==*e)
    {
        if(s<e)
        {
            s++;
            e--;
        }
        else
        {
            printf("The String is a Palindrome.\n");
            return 0; 
        }
    }
}