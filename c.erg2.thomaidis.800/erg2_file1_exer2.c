#include <stdio.h>
#define N 10
#define n 4

int main()
{
int i,j,bonus[N],position;
float grades[N][n],average[N],summary,degree[N],final_grade[N],max;
char level[N];
/*Declaration of variables.*/

for(j=0;j<N;j++)
{
summary=0;
for(i=0;i<n;i++)
{
    printf("Give the grade of the %dth programming lesson.\n",i+1);
    scanf("%f",&grades[j][i]);
    while(grades[j][i]<0 ||grades[j][i]>10)
    {
        printf("Wrong input. Try again. You daho.\n");
        scanf("%f",&grades[j][i]);
    }
    summary=grades[j][i]+summary;
    average[j]=summary/n;
}
/*Taking the input of the 4 programming lessons. And testing if the
given values are acceptable.And calculating the average grade.*/

printf("Input you degree grade.\n");
scanf("%f",&degree[j]);
while(degree[j]<5 || degree[j]>10)
{
    printf("Wrong input. Try again. You daho.\n");
    scanf("%f",&degree[j]);
}
/*Reading the degree grade and testing is the value given
is acceptable.*/

fflush(stdin);
/*Clearing the scanf command so it can scan characters after
scanning integers or floats.*/

printf("Give you English knowledge level.\n");
scanf("%c",&level[j]);
while(level[j]!='A' && level[j]!='B' && level[j]!='C' && level[j]!='D')
{
    printf("Wrong input. Try again. You daho.\n");
    fflush(stdin);
    scanf("%c",&level[j]);
}
/*Reading the English knowledge level and testing if the value
given is acceptable.*/

if(level[j]=='A')
    bonus[j]=3;
else if(level[j]=='B')
    bonus[j]=2;
else if(level[j]=='C')
    bonus[j]=1;
else
    bonus[j]=0;

final_grade[j]=bonus[j]+(2*average[j])+degree[j];
printf("Your final grade is %0.2f.\n",final_grade[j]);
/*Calculating the final grade.*/
}

max=0;
for(i=0;i<N;i++)
{
    if(max<final_grade[i])
        max=final_grade[i];
        position=i+1;
}
printf("The highest final grade is %0.2f and the position is %d.\n",max,position);

return 0;
}
