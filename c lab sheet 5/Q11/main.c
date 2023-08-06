//11. WAP to read your name from keyboard and output a list of ASCII codes that represent your name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //int i;
    char name[20];
    printf("Enter your name :\n");
    gets(name);
    //for(i=0;name[i]!='\0';i++);
    printf("ASCII codes of your name = %d",name,name);
    return(0);
}
