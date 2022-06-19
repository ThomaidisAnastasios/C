#include <stdio.h>
#define N 10
int main()
{
    int A[N],B[N],C[N],i,*A_ptr,*B_ptr,*C_ptr,max=0,min=0,*max_ptr,*min_ptr;
    /*Dhlwnw metavlhtes.*/
    max_ptr=&max;
    min_ptr=&min;
    /*Bazw toys deiktes na deixnoyn stis katalhles theseis.*/
    printf("Dwse tis times min kai max.\n");
    scanf("%d %d",&min_ptr,&max_ptr);
    while(min_ptr==max_ptr || min_ptr>max_ptr)
    {
        printf("Oi times poy dwsate den einai apodextes.Ksanadwste.\n");
        scanf("%d %d",&min_ptr,&max_ptr);
    }
    /*Zhtaw apo ton xrhsth na eisagei tis times min kai max.*/
    for(i=0;i<20;i++)
    {
        printf("Dwse akeraio arithmo poy na vrisketai anamesa sto diasteima toy min kai max.\n");
        if(i<10)
        {
            A_ptr=&A[i];
            scanf("%d",&A_ptr);
            while(A_ptr<min_ptr || A_ptr>max_ptr)
            {
                printf("Dwsate mh apodekth timh.Ksanadwste.\n");
                scanf("%d",&A_ptr);
            }
        }
        else
        {
            B_ptr=&B[i];
            scanf("%d",&B_ptr);
            while(B_ptr<min_ptr || B_ptr>max_ptr)
            {
                printf("Dwsate mh apodekth timh.Ksanadwste.\n");
                scanf("%d",&B_ptr);
            }
        }
    }
    /*Diabazw tis 20 akeraies times.*/
    for(i=0;i<10;i++)
    {
        C[i]=B[i]+A[i];
        C_ptr=&C[i];
        if(C_ptr>max_ptr)
            printf("%d\n",C_ptr);
    }
    /*Eisagw tis times ston pianaka C kai elegxw an einai megalyteres apo thn max kai an nai tis emfaniw.*/
    return 0;
}

