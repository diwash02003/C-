//15. WAP to convert the string into lower case characters using in-built function.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s1[20];
    int i=0;
    printf("\nEnter the string to convert into lower case :  ");
    gets(s1);
    printf("\n\n");
    while (s1[i]!='\0')
    {
       if (s1[i]>='A' && s1[i]<='Z')
       {
        s1[i]=s1[i]+32;
       }
       i++;
    }
    printf("The string is in lower case :'%s'",s1);
    return 0;
}
