#include<stdio.h>

int main()
{
 char sector;
 int overtime;
 float bonus;
 /*Declaration of variables.*/

 printf("Give the sector and the hours of overtime you worked this month.\n");
 scanf("%c %d",&sector,&overtime);
 if(sector!='A' && sector!='B' && sector!='C')
 {
    printf("You gave a wrong sector option.\n");
    return 0;
 }
 /*Scanning the sector choice and the hours of overtime work.*/

 if(sector=='A')
 {
    if(overtime>=20)
        bonus=200;
    else if(overtime<5)
        bonus=0;
    else
        bonus=100;
 }
 else if(sector=='B')
 {
    if(overtime>=10)
        bonus=250;
    else if(overtime<3)
        bonus=0;
    else
        bonus=150;
 }
  else
 {
    if(overtime>=5)
        bonus=300;
    else if(overtime=0)
        bonus=0;
    else
        bonus=200;
 }
/*Calculating the bonus based of the sector and the overtime given.*/

 printf("Your bonus equals %0.2f euros.\n",bonus);

 return 0;
}
