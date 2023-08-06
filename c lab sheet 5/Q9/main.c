//9. WAP to count length of a string.
#include <stdio.h>
#include <string.h>
void main()
{
    char name[20];
    int str1;
    printf("Enter string :\n");
    scanf("%s",name);
    str1=strlen(name);
    //str1=strlwr(name);
    printf("The length of your name is : %d",str1);

}
