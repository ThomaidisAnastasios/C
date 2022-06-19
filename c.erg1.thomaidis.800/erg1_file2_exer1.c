#include <stdio.h>

int main()
{
    char type;
    int number,pnumber;
    float payment,change,summary,psummary;

    printf("For simple tickets(with price 1.10 euro each) press A.\nFor student tickets(with price 0.60 euro each) press B.\nFor double ride tickets(with price 1.60 euro each) press C.\nFor daily tickets(with price 3.20 euro each) press D.\n");
    scanf("%c",&type);
    /*Showing the ticket's choice menu*/

    printf("Give the amount of tickets you want to buy.\n");
    scanf("%d",&number);

    if(type=='A')
        summary=number*1.10;
    else if(type=='B')
        summary=number*0.60;
    else if(type=='C')
        summary=number*1.60;
    else if(type=='D')
        summary=number*3.20;
    else
        printf("Wrong input.\n");
    printf("%0.2f\n",summary);
    /*Calculating the ticket amount payment summary.*/

    printf("You can only input 0.50,1,2 and 5 euro.\n");
    scanf("%f %d",&payment,&pnumber);
    psummary=payment*pnumber;
    /*Showing payment menu. And scaning type and amount of money.*/

    change=psummary-summary;
    printf("Your change equals to %0.2f euros.\n",change);

return 0;
}
