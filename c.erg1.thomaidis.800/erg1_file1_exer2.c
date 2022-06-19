#include <stdio.h>

int main()
{
    int x=3;
    int y,z,i,j,sum,prod,mody,modz,modi,modj;
    float aver,a,b,c;
    /*Declaration of variables*/

    printf("Give four integer numbers.\n");
    scanf("%d %d %d %d",&y,&z,&i,&j);
    /*Input of variable's values*/

    sum=y+z+i+j;
    prod=y*z*i*j;
    aver=sum/4;
    printf("The 4 numbers summary, product and average value are: %d , %d and %0.2f.\n",sum,prod,aver);
    /*Calculating the 4 numbers's summmary, product and average value.*/
    mody=y%x;
    modz=z%x;
    modi=i%x;
    modj=j%x;
    printf("The module of y with x is %d ,the module of z with x is %d ,the module of y with i is %d ,the module of y with j is %d.\n",mody,modz,modi,modj);
    /*Calculating the mod of the 4 variable nnumbers with the number x.*/

    printf("Give three float numbers.\n");
    scanf("%f %f %f",&a,&b,&c);

    sum=a+b+c;
    printf("The integer summary of the float numbers %0.2f, %0.2f and %0.2f is %d.\n",a,b,c,sum);

return 0;
}
