#include <stdio.h>
#include <stdlib.h>

int main () {

int x, y;
// ��� ������ �� ������������ ��� �������� ��� ����������
int w,f,mod,div,sum,prod;

x=5;
// ��� ������ �� ������������ ��� ������
y=3;
w=12.3;
f=3.5;

printf("the values of x and y are: %d and %d\n",x,y);
// ��� ������ �� ������������ ��� ������
printf("the value of w and f are: %d and %d\n",w,f);
sum=x+y;
prod=x*y;
printf("the sum and product of x an y are : %d and %d\n",sum,prod);
mod = x%y;
// ��� ������ �� ������������ ��� ������
printf("x modulo y gives %d\n", mod);
div=w/f;
printf("the result of division between w and f is %d\n",div);
system("PAUSE");
return 0;
}
