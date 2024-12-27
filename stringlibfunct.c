#include <stdio.h>
#include <string.h>
#define size 10

int main()
{
    char s1[size]="Spring";
    char s2[size]="Summer";
    int len;

    printf("String 1: %s",s1);
    printf("\nString 2: %s",s2);

    strlwr(s1);
    printf("\nString 1 in lower case: %s",s1);

    strupr(s2);
    printf("\nString 2 in upper case: %s",s2);

    strcat(s1,s2);
    printf("\nString 1 and string 2 joined: %s",s1);

    strcpy(s1,s2);
    printf("\nString 2 copied into string 1: %s",s1);

    strset(s1,'!');
    printf("\nString 1 set to !: %s",s1);

    strrev(s2);
    printf("\nString 2 reversed is: %s",s2);

    len=strlen(s2);
    printf("\nLength of string 2: %d",len);

}