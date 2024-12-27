#include <stdio.h>
#include<string.h>

int main() 
{
    char s[100],temp;
    int i,len;
    printf("Enter string: ");
    scanf("%s",&s);
    
    len=strlen(s);

    for(i=0;i<len-1;i++)
    {
        temp=s[i];
        s[i]=s[len-1];
        s[len-1]=temp;
        len--;
    }

     printf("The string in reverse: %s",s);

    return 0;
}