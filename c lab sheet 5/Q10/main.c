//10. WAP to read string from keyboard and count the number of vowels, consonants, spaces, semicolons, and commas in that string.
#include <stdio.h>
#include <string.h>
//#include <curses.h>
#include <ctype.h>
//#include <conio.h>
int main()
{
    char str[30];
    int i,vow=0,cons=0,spac=0,semi=0,comma=0;
    printf("Enter the string :\n");
    gets(str);
    for (i=0;str[i]!= '\0';i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
       {vow++;}
       else if(str[i]>='a' && str[i]<='z')
       {cons++;}
       else if(str[i]== ' ')
       {spac++;}
       else if(str[i]== ';')
       {semi++;}
       else if(str[i]== ',')
       {comma++;}
    }
    printf("\nNumber of Vowels: %d",vow);
    printf("\nNumber of consonants: %d",cons);
    printf("\nNumber of spaces: %d",spac);
    printf("\nNumber of semicolons: %d",semi);
    printf("\nNumber of commas: %d",comma);


}
