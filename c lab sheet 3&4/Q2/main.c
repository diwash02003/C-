#include <stdio.h>
#include <stdlib.h>

int main()
{
    int 1,2,3,4,5,6,7;
    float per;
    printf("Enter marks of seven subject:");
    scanf("%d%d%d%d%d%d%d",&1,&2,&3,&4,&5,&6,&7);
    total=1+2+3+4+5+6+7;
    per=total/7;
    printf("\nTotal marks:%d",total);
    if(1>=32 && 2>=32 && 3>=32 && 4>=32 && 5>=32 && health>=32 && gk>=32)
    {printf("\nPercentage:%f",per);
    if(per>=80)
        printf("\nDistinction");
    else if(per>=60)
        printf("\nFirst division");
    else if(per>=45)
        printf("\nSecond division");
    else if(per>=32)
        printf("\nThird division");
    else
        printf("\nFail");
    }
        else
        printf("\nfail");
    return 0;
}
