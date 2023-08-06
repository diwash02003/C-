//12. WAP to read a string from the keyboard and copy the string onto the second string and display the strings on to the monitor.
#include <stdio.h>
#include <string.h>
//#include <ctype.h>
int main()
{
    char s1[20],s2[20];
    int i;
    printf("Enter any string:  ");
    //scanf("first string = %c",&str1);
    gets(s1);
    strcpy(s2,s1);
    printf("\n");
    printf("original string = '%s'\n\n",s1);
    printf("copied string = '%s'",s2);
    return 0;

}
