//14. WAP to read two strings and append the second string to the first string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[20];
    int i;
    printf("Enter the first string s1: ");
    gets(s1);
    printf("\nEnter second string s2: ");
    gets(s2);
    strcat(s1,s2);
    printf("\nThe full string is :'%s'",s1);
    return 0;
}
