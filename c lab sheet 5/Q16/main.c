//16. WAP to convert the string into upper case characters using in-built function.
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    int i=0;
    printf("\n\nEnter any string to  convert into upper case:  ");
    gets(s1);
    printf("\n\n");
    while(s1[i]!='\0')
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]=s1[i]-32;
        }
        i++;
    }
    printf("The string in upper case is :%s",s1);
    return 0;

}
