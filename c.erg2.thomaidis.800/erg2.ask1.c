#include <stdio.h>
int main()
{
    char t;
    int wh;
    printf("Dwse tomea ergasias.\n");
    scanf("%c",&t);
    fflush(stdin);
    printf("Dwse tis wres ergasias.\n");
    scanf("%d",&wh);
    if(t=='A')
        {
            if(wh>=20)
                printf("Bonus 200 euro.");
            else if(wh<5)
                printf("Bonus 0 euro.");
            else
                printf("Bonus 100 euro.");
        }
    else if(t=='B')
        {
            if(wh>=10)
                printf("Bonus 250 euro.");
            else if(wh<3)
                printf("Bonus 0 euro.");
            else
                printf("Bonus 150 euro.");
        }
    else
        {
            if(wh>=5)
                printf("Bonus 300 euro.");
            else if(wh==0)
                printf("Bonus 0 euro.");
            else
                printf("Bonus 200 euro.");
        }
return 0;
}
