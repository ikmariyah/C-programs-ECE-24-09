#include <stdio.h>
int main()
{
    char s[]="Winter";
    int i,len=0;
    
    i=0;
    while(s[i] != 0)
    {
      len+=1;
      i++;
    }
    printf("Length of the string= %d",len);

    return 0;
}











