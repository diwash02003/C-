//13. WAP to compare two strings using string compare function.
#include <stdio.h>
#include <string.h>
int main()
{
    char result,s1[20],s2[20];
    int i;
    printf("Enter first string s1 :  ");
    gets(s1);
    printf("\nEnter second string s2 :  ");
    gets(s2);
    result = strcmp(s1,s2);
    if (result==0)
    printf("The srings are same.");
    else
    printf("The strings are different.");
    return 0;

}
