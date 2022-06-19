#include <stdio.h>
#define NOF 2
/*NOF=number of students.*/

int main()
{
int i,position,team;
float g1[NOF],g2[NOF],max=0,s=0,a[NOF];
char year,yos1[NOF],yos2[NOF];
/*Declaration of variables.*/
/*yos=years of study,g=grades,s=summary,a=average*/

for(i=0;i<NOF;i++)
    {
        printf("Give the first's team %dth student's grade.\n",i+1);
        scanf("%f",&g1[i]);
        while(g1[i]<0 || g1[i]>3)
        {
            printf("You gave a wrong input. Try again. You daho.\n");
            scanf("%f",&g1[i]);
        }
/*We are inputing the students grade after we check if it's an acceptable value.*/

        s=s+g1[i];
        if(g1[i]>max)
            {
                max=g1[i];
                position=i+1;
                team=1;
            }
/*We calculate the average grade and define the max grade as well as which team and
which student posses it.*/

        fflush(stdin);
/*Clearing the scanf command so we can input charachters.*/

        printf("Give the first's team %dth student's year of study.\n",i+1);
        scanf("%c",&yos1[i]);
        while(yos1[i]!='A' && yos1[i]!='B' && yos1[i]!='C' && yos1[i]!='D')
        {
            printf("You gave a wrong input. Try again. You daho.\n");
            fflush(stdin);
            scanf("%c",&yos1[i]);
        }
    }
    a[0]=s/2;

    for(i=0;i<NOF;i++)
    {
        printf("Give the second's team %dth student's grade.\n",i+1);
        scanf("%f",&g2[i]);
        while(g2[i]<0 || g2[i]>3)
        {
            printf("You gave a wrong input. Try again. You daho.\n");
            scanf("%f",&g2[i]);
        }

        if(g2[i]>max)
            {
                max=g2[i];
                position=i+1;
                team=1;
            }

        fflush(stdin);

        printf("Give the second's team %dth student's year of study.\n",i+1);
        scanf("%c",&yos2[i]);
        while(yos2[i]!='A' && yos2[i]!='B' && yos2[i]!='C' && yos2[i]!='D')
        {
            printf("You gave a wrong input. Try again. You daho.\n");
            fflush(stdin);
            scanf("%c",&yos2[i]);
        }

        s=s+g2[i];
        if(g2[i]>max)
            {
                max=g2[i];
                position=i+1;
                team=1;
            }
    }
    a[1]=s/2;

    printf("The highest grade is %0.2f and it's owned by the %dth student of the %dth team.\n",max,position,team);
    for(i=0;i<NOF;i++)
        printf("The %dth team's average grade is %0.2f.\n",i+1,a[i]);
/*Displaying the highest grade and the owner. Also showing the teams average grades.*/

    fflush(stdin);

    printf("Give a year of study.\n");
    scanf("%c",&year);
    while(year!='A' && year!='B' && year!='C' && year!='D')
        {
            printf("You gave a wrong input. Try again. You daho.\n");
            fflush(stdin);
            scanf("%c",&year);
        }
   for(i=0;i<NOF;i++)
   {
       if(yos1[i]==year)
        printf("%0.2f\n",g1[i]);
   }

      for(i=0;i<NOF;i++)
   {
       if(yos2[i]==year)
        printf("%0.2f\n",g2[i]);
   }

return 0;
}
