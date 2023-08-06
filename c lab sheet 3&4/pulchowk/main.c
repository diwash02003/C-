#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[10]="pulchowk";
   int i,j;
   for(i=1;i<=8;i++)
   {
       for(j=0;j<i;j++)
       {
           if(i%2==0)
            putchar(str[j]);
            else
            {
                if(j%2==0)
                    putchar(str[j]);
                else
                    putchar(str[j]);
            }

       }puts("\n");

    }
   return 0;
}
