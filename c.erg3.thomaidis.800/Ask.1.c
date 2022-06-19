#include <stdio.h>
#define N 5
int main()
{
    int i,j;
    float mo,moe,mod,mm,mme,me[N],md[N],he[N],hd[N],x,y;
    x=0;
    y=0;
    mm=0;
    /*Dhlwnw ta dedomena kai mhdenizw tis times poy tha xrhsimopoihsw gia na kanw praxeis stous mesous orous.*/
    for (i=0;i<5;i++)
    {
        printf("Dwse thn hlikia toy %d ypallhloy apo 20 mexri 40 etwn.\n",i+1);
        scanf("%f",&he[i]);

        while(he[i]<20 || he[i]>40)
        {
            printf("Ksana dwse thn hlikia.\n");
            scanf("%f",&he[i]);
            fflush (stdin);
        }
    }
    for (i=0;i<5;i++)
    {
        printf("Dwse thn hlikia toy %d ypallhloy apo 41 mexri 60 etwn.\n",i+1);
        scanf("%f",&hd[i]);
        (fflush stdin);
        while(hd[i]<41 || hd[i]>60)
        {
            printf("Ksana dwse thn hlikia.\n");
            scanf("%f",&hd[i]);
            (fflush stdin);
        }
    }
    /*Zhtaw kai diavazw tis hlikies twn ypallhlvn ksexwrista gia 20 me 40 kai 41 me 60.*/
    for (i=0;i<5;i++)
    {
        printf("Dwse toys misthous twn ypallhlwn apo 20 mexri 40 etwn.\n");
        scanf("%f",&me[i]);
        x=x+me[i];
        if (mm<me[i])
            mm=me[i];
    }
    for (i=0;i<5;i++)
    {
        printf("Dwse toys misthous twn ypallhlwn apo 41 mexri 60 etwn.\n");
        scanf("%f",&md[i]);
        y=y+md[i];
        if (mm<md[i])
            mm=md[i];
    }
    /*Zhtaw kai diavazw toys misthoys.Enw tautoxrona metraw to synolo twn misthwn gia na vrw toys mesoys oroys kathws kanw kai elexgo gia ton megisto mistho.*/
    x=x/5;
    y=y/5;
    mo=(x+y)/10;
    printf("Emfanise o mesos oros twn 20 me 40 einai %f ,o mesos oros twn 41 me 60 einai %f kai o genikos einai %f.\n",x,y,mo);
    /*Emfanizw toys mesoys oroys.*/
    if(mm==me[i])
    {
        for(i=0;i<5;i++)
        {
           if(mm==me[i])
            printf("O yppalhlos me ton kalytero mistho exei hlikia %f kai o misthos einai %f.\n",he[i],me[i]);
        }
    }
    else if(mm==md[i])
    {
        for(i=0;i<5;i++)
        {
           if(mm==md[i])
            printf("O ypallhlos me ton kalyteo mistho exei hlikia %f kai o misthos einai %f.\n",hd[i],md[i]);
        }
    }
    /*Emfanizw thn hlikia toy ypallhloy meton megalytero mistho.*/
    for(i=0;i<5;i++)
    {
        mme=me[i];
        for(j=0;j<5;j++)
        {
            if(mme>md[j])
                printf("Oi misthoi twn ypallhlwn me mikrotero mistho apo ton ypallhlo  %d me hlikia  %f einai %f.\n",i,he[i],md[j]);
        }
    }
return 0;
}
