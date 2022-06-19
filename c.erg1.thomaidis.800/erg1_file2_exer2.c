#include <stdio.h>
#define N 5

int main()
{
int n,i,j,years,grades[N],summary1=0,summary2=0,summary3=0,number;
float salary,gaverage;
/*Declaration of variables.*/

printf("Give the number of employees.\n");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        printf("Give employees number of work years and salary.\n");
        scanf("%d %f",&years,&salary);
        for(j=0;j<N;j++)
        {
            printf("Give the number of grade.\n");
            scanf("%d",&grades[j]);
            while(grades[j]!=1 && grades[j]!=2 && grades[j]!=3)
            {
                printf("Wrong input give a grade number from 1 to 3.\n");
                scanf("%d",&grades[j]);
            }
        }
        for(j=0;j<N;j++)
        {
           if(grades[j]==1)
                summary1=summary1+1;
           if(grades[j]==2)
                summary2=summary2+1;
           if(grades[j]==3)
                summary3=summary3+1;
        }
        gaverage=(summary1+summary2+summary3)/5;
        printf("%d : %d : %d : %0.2f\n", summary1, summary2, summary3,gaverage);
        printf("years %d : salary %0.2f\n",years,salary);
    }
/*We take the amount of employees and then the amount of years of work and salary as well as their 5 years grades and then we print the years
the salary and the grades average.*/

return 0;
}
