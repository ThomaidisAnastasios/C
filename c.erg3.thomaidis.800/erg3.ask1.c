#include <stdio.h>
#define N 3

int main()
{
    float a1,a2,s1,s2,lg1[N],lg2[N],max; /*lg=labgrade,s=summary,a=average*/
    int i,t1[N],t2[N],j; /*t=team*/
    char y1[N],y2[N],y;/*y=year*/

    for(i=0;i<6;i++)
    {
        if(i<3)
        {
        printf("Give %d student's lab grade of the first lab team.\n",i+1);
        scanf("%f",&lg1[i]);
        max=lg1[i];
        j=0;
        while(lg1[i]<0 || lg1[i]>3)
        {
            printf("Give again lab grade.\n");
            scanf("%f",&lg1[i]);
        }
        s1=s1+lg1[i];
        if(max<lg1[i])
        {
            max=lg1[i];
            j=i;
        }

        fflush(stdin);

        printf("Give %d student's year of the first lab team.\n",i+1);
        scanf("%c",&y1[i]);
        while(y1[i]!='A' && y1[i]!='B' && y1[i]!='C' && y1[i]!='D')
        {
            printf("Give again year.\n");
            scanf("%c",&y1[i]);
        }
        }

        else
        {
        printf("Give %d student's lab grade of the second lab team.\n",i+1);
        scanf("%f",&lg2[i]);
        while(lg2[i]<0 || lg2[i]>3)
        {
            printf("Give again lab grade.\n");
            scanf("%f",&lg2[i]);
        }
        s2=s2+lg2[i];
        if(max<lg2[i])
        {
            max=lg2[i];
            j=i;
        }

        fflush(stdin);

        printf("Give %d student's year of the second lab team.\n",i+1);
        scanf("%c",&y2[i]);
        while(y2[i]!='A' && y2[i]!='B' && y2[i]!='C' && y2[i]!='D')
        {
            printf("Give again year.\n");
            scanf("%c",&y2[i]);
        }
        }
    }
    a1=s1/3;
    a2=s2/3;
    printf("The average grade of the first's team is %.2f and the second's is %.2f.\n",a1,a2);

    if(j>3)
        printf("The max grade is %.2f of the second team number %d student.\n",max,j+1);
    else
        printf("The max grade is %.2f of the first team number %d student.\n",max,j+1);

    fflush(stdin);

    printf("Give a year.\n");
    scanf("%c",&y);

    if(y=='A' || y=='B' || y=='C' || y=='D')
        for(i=0;i<6;i++)
            if(i<3)
                if(y==y1[i])
                    printf("%c %d",y1[i],i+1);
            else if(i>2)
                if(y==y2[i])
                    printf("%c %d",y2[i],i+1);

return 0;
}
