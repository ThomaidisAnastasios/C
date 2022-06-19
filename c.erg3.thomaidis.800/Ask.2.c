#include <stdio.h>
#include <string.h>
#define N 4
#define Z 20
#define M 3
int main()
{
    float pt0[M],pt1[M],pt2[M],pt3[M],t;
    char o[N][Z];
    int i,j,x;
    /*Dhlwnw metavlhtes.*/
    for (i=1;i<5;i++)
    {
        printf("Dwse to onoma toy soyper market.\n");
        gets(o[i]);
        fflush(stdin);
    }
    /*Diavazw ta onomata twn souper market.*/
    for (i=1;i<N;i++)
    {
        printf("Dwse thn timh tou prointos %d gia to prwto soupermarket %c.\n",i);
        scanf("%f",&pt0[i]);
        fflush(stdin);
    }
    for (i=1;i<N;i++)
    {
        printf("Dwse thn timh tou prointos %d gia to deutero soupermarket %c.\n",i);
        scanf("%f",&pt1[i]);
        fflush(stdin);
    }
    for (i=1;i<N;i++)
    {
        printf("Dwse thn timh tou prointos %d gia to trito soupermarket %c.\n",i);
        scanf("%f",&pt2[i]);
        fflush(stdin);
    }
    for (i=1;i<N;i++)
    {
        printf("Dwse thn timh tou prointos %d gia to tetarto soupermarket %c.\n",i);
        scanf("%f",&pt3[i]);
        fflush(stdin);
    }
    printf("Dwse to proion kai thn timh anazhthshs.\n");
    scanf("%d %f",&j,&t);
    while(j<1 || j>3)
    {
        printf("To onoma toy proiontos den einai apodekto ksanadwset to proion kai thn timh.\n");
        scanf("%d %f",&j,&t);
    }
    for (i=1;i<4;i++)
    {
        if(j==i)
        {
            if(t==pt0[i])
                printf("To proion yparxei pio fthna sto soupermarket\n");
                for(i=0;i<N;i++)
                printf("%s.\n",o[i]);
        }
    }
       for (i=1;i<4;i++)
    {
        if(j==i)
        {
            if(t==pt1[i])
                printf("To proion yparxei pio fthna sto soupermarket\n");
                for(i=0;i<N;i++)
                printf("%s.\n",o[i]);
        }
    }
       for (i=1;i<4;i++)
    {
        if(j==i)
        {
            if(t==pt2[i])
                printf("To proion yparxei pio fthna sto soupermarket\n");
                for(i=0;i<N;i++)
                printf("%s.\n",o[i]);
        }
    }
       for (i=1;i<4;i++)
    {
        if(j==i)
        {
            if(t==pt3[i])
                printf("To proion yparxei pio fthna sto soupermarket\n");
                for(i=0;i<N;i++)
                printf("%s.\n",o[i]);
        }
    }
return 0;
}
