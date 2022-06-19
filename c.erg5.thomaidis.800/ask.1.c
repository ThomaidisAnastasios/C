#include <stdio.h>
#define N 10

int pin1();
int pin2();
pin3(int pina1[N],int pina2[N]);
int tmax(int pina3[N]);
int tmin(int pina3[N]);
int tsaver(int pina3[N]);
/*Dhlwnw tis synarthseis.*/

int main()
{
    int pinakas1[N],pinakas2[N],pinakas3[N],tmax,tmin,i,j;
    /*Dhlwsh twn metavlhtwn.*/

    pinakas1[N]=pin1();
    pinakas2[N]=pin2();
    pinakas3[N]=pin3(pinakas1[N],pinakas2[N]);
    tmax=tsmax(pinakas3[N]);
    tmin=tsmin(pinakas3[N]);
    tsaver=tsaver(pinakas3[N]);
    /*Kalesma synarthsewn.*/

    for(i=0;i<j;i++)
        printf("d\n",pinakas3[i]);
    printf("To synolo twn arithmwn poy yparxoyn ston pinaka einai %d.\n",j);
    printf("O max einai o %d.\nO min einai o %d.\nO mesos oros einai o %d.\n",tmax,tmin,tsaver);
    /*Emfanish toy pinaka 3,toy min,toy max kai toy mesoy oroy.*/

    return 0;
}

int pin1()
{
    int i,a1[N];
    for(i=0;i<N;i++)
    {
            printf("Dwse akeraio thetiko arithmo.\n");
            scanf("%d",&a1[i]);
            while(a1[i]<0)
            {
                printf("Mh apodekth kataxwrhsh.Ksanadwste arithmo.\n");
                scanf("%d",&a1[i]);
            }
            /*Kataxwrw times ston pinaka 1 afoy eleksw oti einai thetikes.*/
    }
return a1[N];
};

int pin2()
{
    int i,a2[N];
    for(i=0;i<N;i++)
    {
            printf("Dwse akeraio arvhtiko arithmo.\n");
            scanf("%d",&a2[i]);
            while(a2[i]>0)
            {
                printf("Mh apodekth kataxwrhsh.Ksanadwste arithmo.\n");
                scanf("%d",&a2[i]);
            }
            /*Kataxwrw times ston pinaka 2 afoy eleksw oti einai arnhtikes.*/
    }
return a2[N];
};

int pin3(int pina1[N],int pina2[N])
{
    int i,a3[N],j=0;
    for(i=1;i<N;i++)
        if(pina1[i]+pina2[i]==0)
    {
        j++;
        a3[i]=pina1[i];
    }
    /*Afoy eleksw oti h antistrofh timh yparxei stoys pinakes 1 kai 2 topothetw thn timh ston pinaka 3.*/
return a3[N],j;
};

int tsmax(int pina3[N])
{
    int i,j,max;
    max=pina3[1];
    for(i=0;i<j;i++)
        if(max<pina3[i])
            max=pina3[i];
return max;
};

int tsmin(int pina3[N])
{
    int i,j,min;
    min=pina3[1];
    for(i=0;i<j;i++)
        if(min>pina3[i])
            min=pina3[i];
return min;
};

int tsaver(int pina3[N])
{
    int i,j,aver;
    for(i=0;i<j;i++)
        aver=aver+pina3[i];
    aver=aver/j;
return aver;
}
