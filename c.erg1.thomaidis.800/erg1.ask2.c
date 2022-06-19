#include <stdio.h>
int main()
{
   int x=3,y,i,j,k;
   float summary,product, average,balance_y,balance_i,balance_k,balance_j;
   printf("Give 4 integer numbers\n");
   scanf("%d %d %d %d",&y,&i,&j,&k);
   summary=i+j+k+y;
   product=y*i*j*k;
   balance_i=i/x;
   balance_j=j/x;
   balance_y=y/x;
   balance_k=k/x;
   average=summary/4;
   printf("The numbers summary is %.2f the product is %.2f the average is %.2f the balance_y is %.2f the balance_k is %.2f the balance_i is %.2f and the balance_j is %.2f.",summary,product,average,balance_y,balance_k,balance_i,balance_j);
}
