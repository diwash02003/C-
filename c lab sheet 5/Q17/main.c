//17. WAP to reverse a given string.
#include <stdio.h>
#include <string.h>
int main()
{
   char s[100], r[100];
   int begin, end, i = 0;
   printf("\nEnter a string:   ");
   gets(s);
   printf("\n\n");
   while (s[i]!= '\0')
     i++;
   end = i - 1;
   for (begin = 0; begin < i; begin++) {
      r[begin] = s[end];
      end--;
   }
   r[begin] = '\0';
   printf("The reverse of string is:  %s", r);
   return 0;
}
